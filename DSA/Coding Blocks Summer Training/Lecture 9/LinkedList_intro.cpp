#include <iostream>
using namespace std;
class listnode
{
public:
    int val;
    listnode *next;
    listnode(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

listnode *insertAthead(listnode *&head, int val)
{
    listnode *n = new listnode(val);
    n->next = head;

    head = n;
    return head;
}

// void insertAthead(listnode *&head, int val)
// {
//     listnode *n = new listnode(val);
//     n->next = head;

//     head = n;
// }

void printLinkedList(listnode *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    // listnode *n = new listnode(10);
    // cout << n->val << endl;

    listnode *head = NULL;

    // insertAthead(head, 50);
    // insertAthead(head, 40);
    // insertAthead(head, 30);
    // insertAthead(head, 20);
    // insertAthead(head, 10);

    head = insertAthead(head, 50);
    head = insertAthead(head, 40);
    head = insertAthead(head, 30);
    head = insertAthead(head, 20);
    head = insertAthead(head, 10);

    printLinkedList(head);

    printLinkedList(head);
}