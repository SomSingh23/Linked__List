#include <iostream>
using namespace std ;
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

}}
void display(node *ptr){
    while (ptr!=nullptr)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next ;
        /* code */
    }
    
}
void sortedAddition(node *ptr , int x){
   
    if(ptr==nullptr){
 node *ptr = new node ;
     first = ptr ;
     ptr->data = x ;
     ptr->next = nullptr ;
     last = ptr ; 
    }
    else if(x <= first->data){
         node *f1 ;
f1=new node ;
f1->data = x ;
f1->next = first ;
first = f1 ;
    }
    else if(x >= last->data){
         node *f1 ;
        f1=new node ;
f1->data = x ;
f1->next = nullptr ;
last->next = f1 ;
last = f1 ;
    }
    else{ node *f1 , *f2 ;f1=first ;
f2=nullptr ;
        while(f1->data<=x){
         
            f2=f1;   f1=f1->next ;
        }
        node *ano = new node ;
        ano->data = x ;
        ano->next = f1;
        f2->next = ano ; 

    }
}
int main(){
    int a[6] = {10 , 20 , 30  , 40 , 50 , 100};  
    create(a,6); 
     display(first);
     cout<<endl;
     cout<<endl;
     sortedAddition(first , 5897);
     sortedAddition(first , 7);
     sortedAddition(first , 17);
     sortedAddition(first , 27);
     sortedAddition(first , 37);
        display(first);
    return 0 ;
}