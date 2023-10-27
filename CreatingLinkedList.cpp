// Program to create a singly linked list in c++
#include<bits/stdc++.h>
using namespace std ;

class ListNode{
public:
  int val ;
  ListNode* next ;
  
  ListNode(int key){
    val = key ;
    next = NULL ;
  }
};

void print(ListNode* head){  //Function to print a singly linked list
  if(head==NULL){
    return ;
  }
  ListNode* curr = head ;
  while(curr){
    cout<<curr->val<<"->" ;
    curr=curr->next ;
  }
  cout<<"NULL"<<endl ;
}

int main(void){
//   creating a linked list of 1->2->3->4->5
  ListNode* head = new ListNode(1) ;  //   first element is the head of a linked list
  ListNode* a = new ListNode(2) ;
  ListNode* b = new ListNode(3) ;
  ListNode* c = new ListNode(4) ;
  ListNode* d = new ListNode(5) ;
  head->next = a ;
  a->next = b ;
  b->next = c ;
  c->next = d ;
  print(head) ;
  return 0 ;
}
