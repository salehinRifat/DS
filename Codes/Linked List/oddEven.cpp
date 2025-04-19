#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) v.begin(), v.end()
class ListNode
{
public:
    int data;
    ListNode *next;
    ListNode(int data1, ListNode *next1)
    {
        data = data1;
        next = next1;
    }
    ListNode(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

ListNode *oddEvenList(ListNode *head)
{
    if (head == NULL || head->next == NULL)
        return head;
    ListNode *oddHead = head;
    ListNode *evenHead = head->next;
    ListNode *even = head->next;
    while (even && even->next)
    {
        oddHead->next = even->next;
        oddHead = oddHead->next;
        even->next = oddHead->next;

        even = even->next;
    }
}
    int main()
    {
    }