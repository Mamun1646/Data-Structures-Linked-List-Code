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

int main()
{
    head=NULL;
    head=(node*)malloc(sizeof(node));
    head->data=5;
    head->next=(node*)malloc(sizeof(node));
    head->next->data=7;
    head->next->next=NULL;
    print();

}



