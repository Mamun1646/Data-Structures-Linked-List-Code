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
void deletNODe(int position)
{
    if(position==1){
            node*temp=(node*)malloc(sizeof(node));
        temp=head;
        head=temp->next;
	free(temp);
    }else
    {
        node*temp1=(node*)malloc(sizeof(node));
        temp1=head;
        for(int i=1;i<position-2;i++)
        {
            temp1=temp1->next;

        }
        node*temp2=(node*)malloc(sizeof(node));
        temp2=temp1->next;
        temp1->next=temp2->next;
free(temp2);

    }
}
int main()
{
    head=NULL;
    insertBegin(3);
    insertBegin(5);
    insertBegin(7);
    insertBegin(10);
    deletNODe(1);
    print();

}





