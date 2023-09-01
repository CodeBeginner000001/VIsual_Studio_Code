#include <iostream>
using namespace std;
class listNode
{
public:
    int val;
    listNode *next;
    listNode(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insertAtHead(listNode *&head, int val)
{

    listNode *n = new listNode(val);
    n->next = head;
    head = n;
}

void printLinkedList(listNode *head)
{

    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }

    cout << endl;
}
void deleteAthead(listNode *head)
{
    if (!head)
    {
        return;
    }
    listNode *temp = head;
    head = head->next;
    delete temp;
}

void deleteTail(listNode *&head)
{
    if (head == NULL)
    {
        return;
    }
    if (head->next == NULL)
    {
        deleteAthead(head);
        return;
    }

    listNode *prev = NULL;
    listNode *cur = head;
    while (cur->next != NULL)
    {
        prev = cur;
        cur = cur->next;
    }
    prev->next = NULL;
    delete cur;
}

int main()
{
    listNode *head = NULL;

    insertAtHead(head, 50);
    insertAtHead(head, 40);
    insertAtHead(head, 30);
    insertAtHead(head, 20);
    insertAtHead(head, 10);

    printLinkedList(head);

    deleteTail(head);
    printLinkedList(head);
}