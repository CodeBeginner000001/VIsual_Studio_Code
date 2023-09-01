/*
Given a singly linked list: A0→A1→…→An-1→An, reorder it to: A0→An→A1→An-1→A2→An-2→…

It is recommended do this in-place without altering the nodes' values.

Input Format
The First Line contains an Integer as the number of test cases.

Next Line contains an Integer N as the size of the Linked Lists.

Next Line contains N Integers separated by space.

Constraints
1<=T<=200 1<=N<=200

Output Format
print the Folded Linked-List for each test case separated by a new Line.

Sample Input
2
3
1 2 3
4
1 7 3 4
Sample Output
1 3 2
1 4 7 3
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

Node *reverseLinkedList(Node *head)
{
    Node *prev = nullptr;
    Node *current = head;
    Node *nextNode = nullptr;

    while (current != nullptr)
    {
        nextNode = current->next;
        current->next = prev;
        prev = current;
        current = nextNode;
    }

    return prev;
}

Node *reorderLinkedList(Node *head)
{
    if (!head || !(head->next) || !(head->next->next))
        return head;

    // Step 1: Find the middle of the linked list
    Node *slow = head;
    Node *fast = head;

    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    // Step 2: Reverse the second half of the linked list
    Node *secondHalf = reverseLinkedList(slow->next);
    slow->next = nullptr;

    // Step 3: Merge the first and reversed second halves
    Node *temp1 = head;
    Node *temp2 = secondHalf;

    while (temp2)
    {
        Node *next1 = temp1->next;
        Node *next2 = temp2->next;

        temp1->next = temp2;
        temp2->next = next1;

        temp1 = next1;
        temp2 = next2;
    }

    return head;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        Node *head = nullptr;
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

        head = reorderLinkedList(head);

        // Print the modified linked list
        temp = head;
        while (temp)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    return 0;
}
