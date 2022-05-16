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

int main(){
    int a[5] = {1 , 2 , 3222 , 5 ,6 };
    create(a,5);
     display(first);
    return 0 ;
}