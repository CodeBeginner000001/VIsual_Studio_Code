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
bool searchIterative(ListNode *head, int t)
{
    while (head != NULL)
    {
        if (head->val == t)
        {
            return true;
        }
        head = head->next;
    }
    return false;
}

bool searchRecursive(ListNode *head, int i)
{
    // base case
    if (head == NULL)
    {
        return false;
    }
    // recursive case
    if (head->val == i)
    {
        return true;
    }
    // ask your friend to search for the target in the sublist
    // that starts from the node which comes after the head note

    return searchRecursive(head->next, i);
}

int main()
{

    ListNode *head = NULL; // initially, linkedList is empty

    insertAtHead(head, 50);
    insertAtHead(head, 40);
    insertAtHead(head, 30);
    insertAtHead(head, 20);
    insertAtHead(head, 10);

    printLinkedList(head);

    int target = 100;
    searchIterative(head, target) ? cout << target << " found!" << endl : cout << target << " not found!" << endl;

    searchRecursive(head, target) ? cout << target << " found!" << endl : cout << target << " not found!" << endl;

    int tar = 30;
    searchIterative(head, tar) ? cout << tar << " found!" << endl : cout << target << " not found!" << endl;

    searchRecursive(head, tar) ? cout << tar << " found!" << endl : cout << target << " not found!" << endl;
}