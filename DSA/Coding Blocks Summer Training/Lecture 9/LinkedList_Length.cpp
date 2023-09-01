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

int computeLengthIteration(listNode *head)
{
    int count = 0;
    while (head != NULL)
    {
        count++;
        head = head->next;
    }
    return count;
}
int comuteLengthRecursive(listNode *head)
{
    // base case
    if (head == NULL)
    {
        return 0;
    }
    // recursive case
    // 1. ask your friend to compute the length of the sublist that starts from
    // the node which comes after the head note
    int x = comuteLengthRecursive(head->next);
    return x + 1;
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

    cout << computeLengthIteration(head) << endl;
    cout << comuteLengthRecursive(head) << endl;
}