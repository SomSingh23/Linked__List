// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std ;
class node {
    public :
    int data ;
    node *next ;
}*first  , *last;

void insertAtEnd(int x){
if(last==nullptr){
    node *current = new node ;
    first = current ;
    current->data = x ;
    last = current ; }
    else {
       node *current = new node ;
       current->data = x ; 
       last->next = current ;
       last = current ; 
       last->next = nullptr ;
    }

}
void displayLinkedList(node *ptr){
    while(ptr!=nullptr){
        cout<<ptr->data<<" ";
        ptr=ptr->next ;
    }
    cout<<endl;
}
int main(){
  insertAtEnd(23);
    insertAtEnd(233);
      insertAtEnd(2333);
        insertAtEnd(23333); displayLinkedList(first);
        insertAtEnd(0); displayLinkedList(first);
        insertAtEnd(1);
         insertAtEnd(11);
          insertAtEnd(111);
          insertAtEnd(1111);
           insertAtEnd(11111);
            displayLinkedList(first);
       
    return 0 ; 
}