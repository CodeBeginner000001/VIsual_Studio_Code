/*
Implement Selection Sort in a linked list using iterative methods

Input Format
Enter the size of the linked list N and take N more inputs

Constraints
Output Format
Display the elements of the sorted list in a space separated manner

Sample Input
4
9
6
3
2
Sample Output
2 3 6 9
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

Node *selectionSortLinkedList(Node *head)
{
    if (!head || !head->next)
        return head;

    Node *current = head;
    while (current)
    {
        Node *minNode = current;
        Node *temp = current->next;

        // Find the minimum node
        while (temp)
        {
            if (temp->data < minNode->data)
            {
                minNode = temp;
            }
            temp = temp->next;
        }

        // Swap current and minNode data
        int tempData = current->data;
        current->data = minNode->data;
        minNode->data = tempData;

        current = current->next;
    }

    return head;
}

void printLinkedList(Node *head)
{
    Node *temp = head;
    while (temp)
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

    head = selectionSortLinkedList(head);
    printLinkedList(head);

    return 0;
}
