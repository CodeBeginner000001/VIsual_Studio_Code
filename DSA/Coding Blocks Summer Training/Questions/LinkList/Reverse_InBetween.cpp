/*
There is a family on the trip of N members and they have already
decided that they will be maitaining their order in the manner just
like the linked list and at certain point due to thunderstorm they got
panic and also their order got disturbed . they know that their order
is so disturbed that if the whole members list from left point to the
right point is reversed then their order will be maintianed again.

Input Format
First line contains the number of member in the family--N Second line contains
the N member of the family. Third line contains the value of the left pointer
and the right pointer from where we have to reverse the list to get the same order back.

Constraints
1 <= n <= 500
-500 <= Node.val <= 500
1 <= left <= right <= n

Output Format
You have to print the order after reversing the linked list from the given points.

Sample Input
5
1 2 3 4 5
2 4
Sample Output
1 4 3 2 5
Explanation
left pointer points to the node '4' and the right pointer points to the node '2'. After
reversing this much part of the list the order will be maintained.
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

Node *reverseLinkedList(Node *head, int left, int right)
{
    if (head == NULL || left == right)
        return head;

    Node *dummy = new Node(0);
    dummy->next = head;

    Node *beforeLeft = dummy;
    for (int i = 1; i < left; ++i)
    {
        beforeLeft = beforeLeft->next;
    }

    Node *prev = beforeLeft;
    Node *current = beforeLeft->next;
    Node *nextNode = NULL;

    for (int i = left; i <= right; ++i)
    {
        nextNode = current->next;
        current->next = prev;
        prev = current;
        current = nextNode;
    }

    beforeLeft->next->next = current;
    beforeLeft->next = prev;

    head = dummy->next;
    delete dummy;

    return head;
}

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

    int left, right;
    cin >> left >> right;

    head = reverseLinkedList(head, left, right);
    printLinkedList(head);

    return 0;
}
