#include<stdio.h>
#include<stdlib.h>

struct node{
    int value;
    struct node *next;
}*start;

void createList(int n);
void traverseList();


int main(){
   
    printf("Enter the no of nodes: \n");
    int noOfNodes;
    scanf("%d",&noOfNodes);
    createList(noOfNodes);
    traverseList();  
    
    return 0;
}

void createList(int n){
    struct node *newNode,*temp;
    int data,i;
   
   start = (struct node*)malloc(sizeof(struct node));
   
   if(start == NULL){
       printf("Unable to allocate memory!");
       exit(0);
   }

   printf("Enter the data of Node 1: ");
   scanf("%d",&data);

   start->value =  data;
   start->next = NULL;
   
   temp = start;
   for(i=2;i<=n;i++){
       newNode = (struct node*)malloc(sizeof(struct node));
       printf("\nEnter the data of Node %d: ",i);
       scanf("%d",&data);

       newNode->value = data;
       newNode->next = NULL;

       temp->next = newNode;
       temp = newNode;
    }

}

void traverseList(){
    
    struct node *temp;

    if(start==NULL){
        printf("The List is empty!");
        return;
    }

    temp = start;
     
    printf("Traversing through the list...\n");
    while(temp!=NULL){
        printf("%d -> ",temp->value);
        temp = temp->next;
    }
}

