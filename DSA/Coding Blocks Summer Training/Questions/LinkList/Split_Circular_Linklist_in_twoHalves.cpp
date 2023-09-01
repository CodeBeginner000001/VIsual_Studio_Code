/*
Given a Cirular Linked List of size N, split it into two halves circular
lists. If there are odd number of nodes in the given circular linked list
then out of the resulting two halved lists, first list should have one node
more than the second list. The resultant lists should also be circular lists
and not linear lists.

Input Format
First line contains the number of nodes-N. Second line contains the N nodes.

Constraints
Expected Time Complexity: O(N) Expected Auxilliary Space: O(1

Output Format
Print the two lists.

Sample Input
Circular LinkedList: 2->6->1->5
Sample Output
2 6
1 5
Explanation
it is of even size so the two halves are evenly divided which in turn are circular.
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

Node *findMidAndSplit(Node *head)
{
    if (!head || !head->next)
        return head;

    Node *slow = head;
    Node *fast = head->next;

    while (fast != head && fast->next != head)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    Node *firstHalf = head;
    Node *secondHalf = slow->next;

    slow->next = firstHalf; // Breaking the circular link

    // Finding the last node of the second half
    Node *temp = secondHalf;
    while (temp->next != head)
    {
        temp = temp->next;
    }

    temp->next = secondHalf; // Closing the circular link for the second half

    return secondHalf;
}

void printCircularList(Node *head)
{
    if (!head)
        return;

    Node *temp = head;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
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
            head->next = head; // Make it circular
            temp = head;
        }
        else
        {
            temp->next = new Node(x);
            temp = temp->next;
            temp->next = head; // Make it circular
        }
    }

    Node *secondHalf = findMidAndSplit(head);

    cout << "First Half: ";
    printCircularList(head);

    cout << "Second Half: ";
    printCircularList(secondHalf);

    return 0;
}
