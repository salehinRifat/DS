#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) v.begin(), v.end()
class DLLNode {
    public:
      int data;
      DLLNode *next;
      DLLNode *prev;
  
      DLLNode(int val) {
          data = val;
          this->next = NULL;
          this->prev = NULL;
      }
};
DLLNode* reverseDLL(DLLNode* head) {
    if(head == NULL || head->next == NULL){
        return head;
    }
    DLLNode* prev = NULL;
    DLLNode* current = head;
    while(current != NULL){
        prev = current->prev;
        current->prev = current->next;
        current->next = prev;
        current = current->prev;
    }
    return prev->prev;
}
int main()
{
 
}