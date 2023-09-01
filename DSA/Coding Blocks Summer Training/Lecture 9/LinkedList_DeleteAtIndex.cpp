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
listNode *getNode(listNode *temp, int j)
{
    int k = 0;
    while (temp != NULL & k < j)
    {
        temp = temp->next;
        k++;
    }
    return temp;
}
void deleteAthead(listNode *head)
{
    listNode *temp = head;
    head = head->next;
    delete temp;
}
void deleteIndex(listNode *&head, int i)
{
    if (i == 0)
    {
        deleteAthead(head);
        return;
    }
    listNode *cur = getNode(head, i);
    if (cur == NULL)
    {
        return;
    }
    listNode *prev = getNode(head, i - 1);
    prev->next = cur->next;
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

    deleteIndex(head, 2);
    printLinkedList(head);
}