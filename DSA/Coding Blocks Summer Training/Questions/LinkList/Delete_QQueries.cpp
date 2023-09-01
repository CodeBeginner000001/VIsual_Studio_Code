/*
We are given a linked list. There are Q queries. Each query is represented by a
index x which represents the position from which the element has to be deleted.
After every query print the linked list.

Input Format
First line contains the number of nodes in the linked list n and queries q and then
next line contains n space separated integers representing the node values of the
linked list and then q lines follow containing the indices to be deleted.

Constraints
n < 1000

Output Format
Output the linked list after every query. Print the node values in a single line separated by spaces.

Sample Input
5 2
1 2 3 4 5
0
1
Sample Output
2 3 4 5
2 4 5
Explanation
Initially the node at index 0 is deleted and list becomes 2 3 4 5. Then node at index 1 is deleted
and the list becomes 2 4 5.
*/

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int d)
    {
        data = d;
        next = NULL;
    }
};

void printLinkedList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node *deleteNodeAtIndex(Node *head, int index)
{
    if (index == 0)
    {
        Node *newHead = head->next;
        delete head;
        return newHead;
    }

    Node *current = head;
    for (int i = 0; i < index - 1; ++i)
    {
        if (current == NULL || current->next == NULL)
            return head;
        current = current->next;
    }

    Node *temp = current->next;
    current->next = temp->next;
    delete temp;

    return head;
}

int main()
{
    int n, q;
    cin >> n >> q;

    Node *head = NULL;
    Node *temp = head;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        if (!head)
        {
            head = new Node(x);
            temp = head;
        }
        else
        {
            temp->next = new Node(x);
            temp = temp->next;
        }
    }

    for (int i = 0; i < q; ++i)
    {
        int index;
        cin >> index;

        head = deleteNodeAtIndex(head, index);
        printLinkedList(head);
    }

    return 0;
}