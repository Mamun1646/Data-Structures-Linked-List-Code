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
void insertBegin(int value)
{
    node*temp=(node*)malloc(sizeof(node));
    temp->data=value;
    temp->next=head;
    head=temp;
}
int main()
{
    head=NULL;
    insertBegin(3);
    insertBegin(5);
    insertBegin(7);
    print();

}




