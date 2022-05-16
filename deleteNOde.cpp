#include <iostream>
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
void deleteNode(int pos){
if(pos==1){
    node *ptr = first ;
    first = first->next;
     cout<<"Task completed : node with data "<<ptr->data<<" deleted successfully "<<endl;
    delete ptr ;
    sie-- ;
   
}
else{
    node *ptr , *qtr ;
    ptr = nullptr ;
    qtr = first ;
    if(pos>sie){
        cout<<"Invalid index"<<endl;

    }
    else {
        for(int i = 0 ;i<pos-1 ; i++){
            ptr = qtr ;
            qtr = qtr->next ;
          
        
        }
          ptr->next = qtr->next ;
            cout<<"Task completed : node with data "<<qtr->data<<" deleted successfully "<<endl;
          delete qtr;
             sie-- ;

    }
}
}

int main(){
    int a[5] = {40 , 400 , 4 , 14 , 44 };
    create(a,5);
     display(first);
     deleteNode(3);
       display(first);
         deleteNode(1);
          display(first);
          deleteNode(3);
          display(first);
    return 0 ;
}