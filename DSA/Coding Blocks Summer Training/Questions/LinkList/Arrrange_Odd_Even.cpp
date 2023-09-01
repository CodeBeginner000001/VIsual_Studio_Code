/*
We are Given a singly linked list, group all odd nodes
together followed by the even nodes. Here we are talking
about the node number and not the value in the nodes.
Note: i) You should try to do it in place. The program
should run in O(1) space complexity and O(nodes) time
complexity.
ii) The relative order inside both the even and odd groups
should remain as it was in the input.
iii) The first node is considered odd, the second node
even and so on

Input Format
First line contains the number of nodes n. Next line
contains the n node numbers.

Constraints
1<=Length of linked list<=10^4

Output Format
Print the original list and the modified list after
Grouping all odd nodes together followed by the even nodes.

Sample Input
10
1 2 3 4 5 6 7 8 9 10
Sample Output
Original List: 1 2 3 4 5 6 7 8 9 10
Modified List: 1 3 5 7 9 2 4 6 8 10
Explanation
None

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

Node *oddEvenLinkedList(Node *head)
{
    if (!head || !(head->next))
        return head;

    Node *odd = head;
    Node *even = head->next;
    Node *evenHead = even;

    while (even && even->next)
    {
        odd->next = even->next;
        odd = odd->next;

        even->next = odd->next;
        even = even->next;
    }

    odd->next = evenHead;

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

    cout << "Original List: ";
    temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    head = oddEvenLinkedList(head);

    // Print the modified linked list
    cout << "Modified List: ";
    temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    return 0;
}