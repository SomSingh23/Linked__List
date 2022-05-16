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
void issorted(node *ptr){
    int check ;
    int cond = 0 ;
    check = INT_MIN;
    while (ptr!=nullptr)
    {
    if(ptr->data>=check){ cond++ ;check = ptr->data ; ptr=ptr->next; continue;}
    else{ cout<<"Not Sorted"<<endl; ; break;}
    }
    if(cond==sie)
      cout<<"Sorted"<<endl;
   
}

int main(){
    int a[5] = {40 , 400 , 4 , 14 , 44 };
    create(a,5); issorted(first); display(first) ;
    int b[4] = {3 , 4 , 5 ,7};
     create(b,4);issorted(first);display(first) ;
   
    return 0 ;
}