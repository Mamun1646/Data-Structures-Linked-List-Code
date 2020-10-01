#include<bits/stdc++.h>
using namespace std;
typedef struct node{
    int data;
    struct node* next;
}node;
 node*head;
void print()
{
    node*temp;
    temp=head;
    while(temp!=NULL)
    {

        cout<<temp->data<<" ";
        temp=temp->next;

    }
}
void insertEnd(int value)
{
    node* temp=(node*)malloc(sizeof(node));
    temp->data=value;
    temp->next=NULL;
    if(head==NULL)
        head=temp;
    else
    {    node*t;
        t=head;
         while(t->next!=NULL){
            t=t->next;}
         t->next=temp;
    }
}

int main()
{
    head=NULL;
    insertEnd(1);
    insertEnd(3);
    insertEnd(7);
    print();

}


