// delation
#include <iostream>
using namespace std;

struct node{
    int data;
    struct node* next;
};

void linked_list_traversal(struct node* ptr){
  while(ptr!=NULL){
      cout<<ptr->data<<endl;
      ptr=ptr->next;
  }  
}

//case 1
struct node* delete_from_first(struct node* head){
    
    struct node* temp;
    temp=head;
    head=head->next;
    free(temp);
    return head;
}

//case 2 
struct node* delete_from_the_end(struct node* head){
     
     struct node* temp=head;
     struct node* prenode=NULL;
    while(temp->next!=0){
        prenode=temp;
        temp=temp->next;
         }
          prenode->next=NULL;
          free (temp);
          return head;
    
}

//case 3 
struct node* delete_from_between(struct node *head, int index)
{
    struct node* p= head;
    struct node* q= head->next;

    for(int i=0; i<index-1; i++)
    {
      p=p->next;
      q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;
}

int main() {
    struct node* head=NULL, *newnode, *temp;
    int i,d,n,item;
    cout<<"Number of Nodes:";
    cin>>n;
    
    cout<<"Number of each nodes:";
    for(i=0;i<n;i++){
        cin>>d;
        
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=d;
        newnode->next=NULL;
        
        if(head==NULL){
            head=temp=newnode;
        }
        
        else{
            temp->next=newnode;
            temp=newnode;
        }
    }
     
    cout<<"Linked list before deletion:"<<endl;
    linked_list_traversal(head);
    cout<<endl;
    
    //case 1
    head = delete_from_first(head);
    cout << "After deletion:" << endl;
    linked_list_traversal(head);
    cout << endl;
    
    //case 2 
    head = delete_from_the_end(head);
    cout << "After deletion:" << endl;
    linked_list_traversal(head);
    cout << endl;
    
    //case 3 
    
   cout<<"Enter the deliting index:";
    int index;
    cin>>index;

    head=delete_from_between(head, index);
    cout<<"Linked-list after deletion from the given index:"<<endl;
    linked_list_traversal(head);
    cout<<endl;


    return 0;
}