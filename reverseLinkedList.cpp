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
void reverseLinkedList_method_1(){
    int ctr = 0 ; 
   node *ptr = first ;
   vector <int> vec ;
   while(ptr!=nullptr){
       vec.push_back(ptr->data);
       ptr=ptr->next ;
       ctr++;
   }
ptr = first ;
while(ptr!=nullptr){
    ptr->data = vec.at(ctr-1) ; ctr-- ;
    ptr = ptr->next ;
}
}

int main(){
    int a[5] = {40 , 400 , 4 , 14 , 44 };
    create(a,5);
     display(first);
   reverseLinkedList_method_1() ;
   display(first); // kalashnikov
    return 0 ;
}