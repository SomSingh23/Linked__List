#include <bits/stdc++.h>
using namespace std ;
int sie ; // global variable
class node {
    public:
    int data;
    node *next ;
};
node *first , *second , *last ;
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
void create2(int *p , int size ) {
     node *ptr = new node ;
     second = ptr ;
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
}
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

void conCat(node *p , node *q){
    while(p->next!=nullptr)p=p->next ;
    p->next = q ;

   
}
node *third , *endptr ;
void mergeTwoSortedList(){// cout<<"madhar cod"<<endl;
    // step 1 check
    if(first->data>=second->data){ 
       third = second ;
       endptr = second ;
             cout<<third->data <<endl;
        second=second->next ; endptr->next = nullptr ;
        
    }
   else if(first->data<second->data){
      third = first ;
      endptr = first ;
   //   cout<<third->data <<endl;
        first=first->next ;
        endptr->next = nullptr ;
          
    }
    while (first!=nullptr or second!=nullptr)
    {
         if(first->data>=second->data){
       endptr->next = second ;
      endptr = second;
       
       second=second->next ;  endptr->next = nullptr ;if(second==nullptr){ endptr->next = first ;break ; } 
    }
   else if(first->data<second->data){
      endptr->next = first ;
      endptr = first ;
      
        first=first->next ;   endptr->next = nullptr ; if(first==nullptr){ endptr->next = second ;break ; }
    }

    
    }
     

}
int main(){
   int a[5] = {2 , 4   , 6 , 8 , 10} ;
   int b[3] = {1 , 5 , 24} ;  
   create(a , 5) ;
   create2(b , 3) ;
   display(first) ; display(second) ;
  // conCat(first , second) ; // use it to concat to linked list :)
 
   mergeTwoSortedList();

display(third);
    return 0 ;
}