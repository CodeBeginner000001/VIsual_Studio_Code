#include <iostream>

using namespace std;

class ListNode
{

public:
    int val;
    ListNode *next;

    ListNode(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insertAtHead(ListNode *&head, int val)
{

    ListNode *n = new ListNode(val);
    n->next = head;
    head = n;
}

void printLinkedList(ListNode *head)
{

    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }

    cout << endl;
}
ListNode *reverseIteration(ListNode *head)
{
    ListNode *prev = NULL;
    ListNode *cur = head;
    while (cur != NULL)
    {
        ListNode *temp = cur->next;
        cur->next = prev;
        prev = cur;
        cur = temp;
    }
    return prev;
}
ListNode *reverseRecursive(ListNode *head)
{
    // base caase
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    // 1. ask your friend to reverse the sublist that starts from head->next
    ListNode *headfromFriend = reverseRecursive(head->next);
    head->next->next = head;
    head->next = NULL;

    return headfromFriend;
}

int main()
{

    ListNode *head = NULL; // initially, linkedList is initially empty

    insertAtHead(head, 50);
    insertAtHead(head, 40);
    insertAtHead(head, 30);
    insertAtHead(head, 20);
    insertAtHead(head, 10);

    printLinkedList(head);
    head = reverseIteration(head);
    printLinkedList(head);
    head = reverseRecursive(head);
    printLinkedList(head);
}