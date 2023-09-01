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

void insertAthead(listnode *&head, int val)
{
    listnode *n = new listnode(val);
    n->next = head;
    head = n;
}

void printlinked(listnode *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

listnode *getTail(listnode *temp)
{
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    return temp;
}

void insertAtTail(listnode *&head, int val)
{
    if (head == NULL)
    {
        insertAthead(head, val);
        return;
    }
    listnode *n = new listnode(val);

    listnode *tail = getTail(head);

    tail->next = n;
}

int main()
{
    listnode *head = NULL;

    insertAthead(head, 50);
    insertAthead(head, 40);
    insertAthead(head, 30);
    insertAthead(head, 20);
    insertAthead(head, 10);

    insertAtTail(head, 70);
    printlinked(head);
}