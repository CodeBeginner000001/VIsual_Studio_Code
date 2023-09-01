/*
Given a linked list containing 0’s, 1’s, 2’s, sort
the linked list by doing a single traversal of it.

Input Format
First line of input contains integer N, denoting the
size of linked list. Next line of input contains N
space separated integers, denoting the elements of
the linked list.

Constraints
1<=N<=10^4

Output Format
Print the elements of the linked list after sorting.

Sample Input
12
0 1 2 2 1 0 0 2 0 1 1 0
Sample Output
0 0 0 0 0 1 1 1 1 2 2 2
Explanation
0 0 0 0 0 1 1 1 1 2 2 2 linked list after sorting.
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

Node *sortLinkedList(Node *head)
{
    if (!head || !(head->next))
        return head;

    Node *zeroHead = new Node(0);
    Node *oneHead = new Node(0); // Pivot 1
    Node *twoHead = new Node(0);
    Node *zero = zeroHead;
    Node *one = oneHead;
    Node *two = twoHead;

    Node *current = head;

    while (current)
    {
        if (current->data == 0)
        {
            zero->next = current;
            zero = zero->next;
        }
        else if (current->data == 1)
        {
            one->next = current;
            one = one->next;
        }
        else
        {
            two->next = current;
            two = two->next;
        }
        current = current->next;
    }

    zero->next = oneHead->next ? oneHead->next : twoHead->next;
    one->next = twoHead->next;

    two->next = nullptr;

    head = zeroHead->next;
    delete zeroHead;
    delete oneHead;
    delete twoHead;

    return head;
}

int main()
{
    int n;
    cin >> n;

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

    head = sortLinkedList(head);

    // Print the sorted linked list
    temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    return 0;
}