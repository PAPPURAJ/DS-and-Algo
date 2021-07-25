#include<bits/stdc++.h>
using namespace std;
#define nl '\n'


struct Node{
    int value;
    struct Node *next,*prev;
};


struct Node *head;


void insertFirst(int val){
       struct Node *temp=(struct Node *) malloc(sizeof(struct Node*));

       if(head==NULL){
           temp->prev=NULL;
           temp->next=NULL;
           temp->value=val;
           head=temp;
       }else{
           temp->value=val;
           temp->prev=NULL;
           temp->next=head;
           head=temp;
       }

}


void insertLast(int val){
   struct Node *temp=(struct Node *) malloc(sizeof(struct Node*)),*t2;

    if(head==NULL){
        temp->next=NULL;
        temp->prev=NULL;
        temp->value=val;
        head=temp;
    }else{
        t2=head;
        temp->value=val;

        while(t2->next!=NULL)
            t2=t2->next;

        temp->next=NULL;   
        temp->prev=t2;
        t2->next=temp;
    }
}


void display(){
    struct Node *temp=head;
    
    cout<<"Displaying value"<<nl;
    while(temp!=NULL)
        {
            cout<<temp->value<<nl;
            temp=temp->next;
        }
    
    
}

void deleteFirst(){
    head=head->next;
    head->prev=NULL;
}

void deleteLast(){
    struct Node *temp=head;

    while(temp->next->next!=NULL)
        temp=temp->next;

    temp->next=NULL;
}

int main(){
    
    for (size_t i = 0; i < 10; i++)
    {
       insertFirst(i);
    }

    display();

    insertLast(60);
    deleteFirst();
    display();
    deleteLast();
    display();


    return 0;
}
