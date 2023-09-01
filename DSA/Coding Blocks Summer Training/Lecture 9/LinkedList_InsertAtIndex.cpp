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
void printlistnode(listNode *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}
listNode *getnode(listNode *temp, int j)
{
    int k = 0;
    while (temp != NULL & k < j)
    {
        temp = temp->next;
        k++;
    }
    return temp;
}

void insertAtindex(listNode *head, int i, int val)
{
    if (i == 0)
    {
        insertHead(head, val);
        return;
    }
    listNode *n = new listNode(val);
    listNode *pre = getnode(head, i - 1);
    if (pre == NULL)
    {
        return;
    }
    n->next = pre->next;
    pre->next = n;
}

int main()
{
    listNode *head = NULL;
    insertHead(head, 50);
    insertHead(head, 40);
    insertHead(head, 30);
    insertHead(head, 20);
    insertHead(head, 10);
    printlistnode(head);

    insertAtindex(head, 2, 25);
    printlistnode(head);
}