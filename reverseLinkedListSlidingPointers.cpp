#include <bits/stdc++.h>
using namespace std ;
int sie ; // global variable
class node {
    public:
    int data;
    node *next ;
};
node *first , *last ;
void create(int *p , int size ) {
     node *ptr = new node ;
     first = ptr ;
     ptr->data = p[0] ;
     ptr->next = nullptr ;
     last = ptr ; 
for(int i = 1 ; i<size ; i++){
    node *ptr = new node ;
    ptr->data = *(p+i);
   last->next = ptr ;
    last = ptr ;
    last->next = nullptr ;

}
sie = size ;}
void display(node *ptr){
    while (ptr!=nullptr)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next ;
        /* code */
    }
    cout<<endl;
}
void reverseLinkedList_method_2(){
  // we should not modify the data rather then we should reverse the links so for that we need a sliding pointer 
node *p , *q , *r ;
r = nullptr ;
q = nullptr ;
p = first ;
while(p!=nullptr){
    r = q ;
    q =  p;
    p=p->next ;
    q->next = r ; // game changer 
}
first = q ; // new first node is the last one ;
  
}

int main(){
    int a[10] = {40 , 400 , 4 , 14 , 44  , 0 , 1 , 2 , 4 , 5};
    create(a,10);
     display(first);
   reverseLinkedList_method_2() ;
  
      display(first);
    return 0 ;
}