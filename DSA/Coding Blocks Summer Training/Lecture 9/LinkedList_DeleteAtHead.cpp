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
void insertHead(listNode *&head, int val)
{
    listNode *n = new listNode(val);
    n->next = head;
    head = n;
}

void printList(listNode *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}
void deleteHead(listNode *&head)
{
    if (head == NULL)
    {
        return;
    }
    listNode *temp = head;
    head = head->next;
    delete temp;
}
int main()
{
    listNode *head = NULL;

    insertHead(head, 50);
    insertHead(head, 40);
    insertHead(head, 30);
    insertHead(head, 20);
    insertHead(head, 10);

    printList(head);

    deleteHead(head); // delete the starting element
    printList(head);

    deleteHead(head); // delete the next starting element
    printList(head);
}