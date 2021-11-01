#include<bits/stdc++.h>
using namespace std;
#define nl '\n'



struct Node{
    int value;
    struct Node *next,*prev;
};


struct Node *head;


void insert(int val){
       struct Node *temp=(struct Node *) malloc(sizeof(struct Node*)),*t2;

       if(head==NULL){
           temp->value=val;
           head=temp;
           temp->prev=head;
           temp->next=head;
       }else{
            t2=head;
            while(t2->next!=head)
                t2=t2->next;
              
            t2->next=temp;


           temp->value=val;
           temp->prev=t2;
           temp->next=head;
           head=temp;
       }

}



void display(){
    struct Node *temp=head;
    
    cout<<"Displaying value"<<nl;
    while(temp->next!=head)
        {
            cout<<temp->value<<nl;
            temp=temp->next;
        }
        cout<<temp->value<<nl;
    
    cout<<"=========="<<nl;
}


void del(int val){
        struct Node *temp=head,*t2;
        while(temp->next->value!=val)
            temp=temp->next;;
        temp->next=temp->next->next;
        temp->next->prev=temp;

}

 int main(){
    
    for (size_t i = 0; i < 10; i++)
    {
       insert(i);
    }

    display();
    del(5);
    display();


    return 0;
    
}
