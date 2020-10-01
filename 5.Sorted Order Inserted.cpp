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



void insertSorted(int value)
{
    node* temp=(node*)malloc(sizeof(node));
    temp->data=value;
    temp->next=NULL;


    if(head==NULL||head->data>temp->data){

        temp->next=head;
        head=temp;
    }
    else
    {
        node*pred;
        node*post;

          post=head;
        while(pred->next!=NULL&&temp->data>post->data)
        {
            pred=post;
          post=post->next;
        }

        temp->next=post;
        pred->next=temp;

    }

}


int main()
{
    head=NULL;
    insertEnd(2);
    insertEnd(3);
    insertEnd(7);
    insertSorted(4);
    insertSorted(1);
        insertSorted(5266);
    print();

}


