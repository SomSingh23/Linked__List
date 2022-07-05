#include <bits/stdc++.h>
using namespace std ;
// double linked list 
class Node{
    public:
    int data ;
    Node *next ;
    Node *prev ;
} ;Node *first   ;
void create(int a[] , int size){
     Node *ptr = new Node ;
     ptr->data = a[0] ;
     Node *last ;
     first = ptr ;
     ptr->next = nullptr;
      ptr->prev = nullptr ;
     last = first ;
     for(int i = 1 ; i<size ; i++){
         Node *ptr = new Node ;
         ptr->data = a[i];
         last->next = ptr ;
         ptr->prev = last ;
         ptr->next = nullptr ;
         last = ptr ;
     }
}
void display(Node *ptr ) {
    
    while(ptr!=nullptr){
        cout<<ptr->data<<" ";
        ptr=ptr->next ;
    }cout<<endl;
}
void sumOFAllElement(Node *ptr){
    int sum = 0 ;
    while(ptr!=nullptr){
        sum+=ptr->data;
        ptr=ptr->next;
    }
    cout<<"sum of element is "<<sum<<endl;
}

int main(){
   
    int a[4] = {1 , 10 , 100 , 1000} ;
    create(a , 4) ;
   // cout<<"hi";
    display(first) ;
    sumOFAllElement(first);
 return 0 ;
}