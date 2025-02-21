//insert at first.
#include<iostream>
using namespace std;
struct node{
    int data;
    struct node* next; 
};
void linked_list_traversal(struct node* ptr){
    while(ptr!= NULL){
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
}
//case 1 

struct node* insertAtFirst(struct node* head,int data){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->next=head;
    newnode->data=data;
    return newnode;
}
//case 2 
   struct node * insert_in_between(struct node *head, int index, int data)
{
    struct node * new_node = (struct node *) malloc(sizeof(struct node));
    struct node * p = head;
    int i = 0;

    while (i!=index-1)
    {
        p = p->next;
        i++;
    }
    new_node->data = data;
    new_node->next = p->next;
    p->next = new_node;
    return head;
}

//case 3 

 struct node * insert_at_the_end(struct node *head, int data){
    struct node * new_node = (struct node *) malloc(sizeof(struct node));
    new_node->data = data;
    struct node * p = head;

    while(p->next!=NULL){
        p = p->next;
    }
    p->next = new_node;
    new_node->next = NULL;
    return head;


}

int main(){
    struct node* head=NULL, *newnode, *temp;
    int n,d,item,i;
    cout<<"enter nodes=";
    cin>>n;
    for(i=0;i<n;i++){
        cin>>d;

        newnode = (struct node*)malloc(sizeof(struct node));
        newnode->data = d;
        newnode->next = NULL;
        
        if(head==NULL)
        {
            head=temp=newnode;
        }
        
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
    }
    cout<<"Linked list before insersion:"<<endl;
    linked_list_traversal(head);
    cout<<endl;

//case 1
    int data;
    cout<<"Enter element for the first node:";
    cin>>data;
    
   head= insertAtFirst(head, data);
   cout<<"Linked list after insersion:"<<endl;
   linked_list_traversal(head);
   cout<<endl;
 
 //case 2
int index;

    cout<<"Enter the index for the new node: ";
    cin>>index;

    cout<<"Enter the data for the "<<index<<"th node:";
    cin>>data;

    head=insert_in_between(head, index, data);
    cout<<"Linked-list after insertion:"<<endl;
    linked_list_traversal(head);
    cout<<endl;
    
//case 3
cout<<"Insert data for the end node :";
    cin>>data;
    head=insert_at_the_end(head, data);
    cout<<"Linked-list after inserdion:"<<endl;
    linked_list_traversal(head);
    
  
return 0;
}
