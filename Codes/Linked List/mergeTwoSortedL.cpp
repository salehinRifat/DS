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
ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head1 = list1;
        ListNode* head2 = list2;
        if(head1 == nullptr && head2 == nullptr) return NULL;

        ListNode* newHead = new ListNode(0);

        while (head1!= NULL && head2 != NULL)
        {
            

        }
        return newHead->next;
}
    
int main()
{
    
}