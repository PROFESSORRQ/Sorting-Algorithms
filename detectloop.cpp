#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
};
void push(node** head_ref,int key)
{
    node* temp=new node();
    temp->data=key;
    temp->next=*head_ref;
    (*head_ref)=temp;
}
int loop(node* head)
{
    int flag=0;
    
    node* slow_ptr=head;
    node* fast_ptr=slow_ptr->next;
cout<<slow_ptr->data;
cout<<fast_ptr->data;
    while(slow_ptr!=NULL&&fast_ptr!=NULL)
    {cout<<flag;
        if(slow_ptr==fast_ptr)
        { 
             flag=1;
             break;
        }

            slow_ptr=slow_ptr->next;
            fast_ptr=fast_ptr->next->next;
            
    }
        if(flag==1)
            return 1;
        else
            return 0;
}
bool detectloopHash(node* head)
{
    unordered_set<node*> s;
    while(head!=NULL)
    {
        if(s.find(head)!=s.end())
        return true;
        head=head->next;
    }
    return false;
}
int main()
{ 
    node* head=NULL;
    push(&head,1);
    push(&head,2);
    push(&head,3);
    push(&head,4);
    head->next->next->next->next=head;
    if(loop(head))
        cout<<"TRUE";
    else
        cout<<"FALSE";
    
    return 0;
}