#include<bits/stdc++.h>
using namespace std;
#define nl '\n'

struct Node{
    int value;
    struct Node *node;
};


struct Node *head;


void add(int val){
    struct Node *temp=(struct Node *) malloc(sizeof(struct Node*));
    temp->value=val;
    temp->node=head;
    head=temp;
}


void display(){
    struct Node *temp=head;
    
    cout<<"Displaying value"<<nl;
    while(temp!=NULL)
        {
            cout<<temp->value<<nl;
            temp=temp->node;
        }
    
    
}

int main(){
    
    for (size_t i = 0; i < 10; i++)
    {
       add(i);
    }

    display();
    return 0;
}
