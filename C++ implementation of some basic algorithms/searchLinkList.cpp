#include<stdio.h>
#include<stdlib.h>
struct node{
    int value;
    struct node *next;
};
struct node *head=NULL;
void insert(int n){
    struct node *tmp=(struct node*)malloc(sizeof(struct node));
    struct node *link;

    tmp->value=n;
    tmp->next=NULL;

    link=head;

    if(head==NULL){
        head=tmp;
    }
    else{
        while(link->next!=NULL){
            link=link->next;
        }
        link->next=tmp;
    }
}
int searchNode(int n)
{
    int pos=0;
    struct node *temp;
    temp=head;
    while(temp!=NULL){
            pos++;
        if(temp->value==n){
            return pos;
            break;
        }
        temp=temp->next;
    }
    return 0;
}

void printList(){
    struct node *temp;
    temp=head;
    while(temp!=NULL){
        printf("%d-->",temp->value);
        temp=temp->next;
    }
}
int main()
{
    int val,n,pos,cnt=0;
    printf("Enter some integers( (-ve) for exit): ");
    while(scanf("%d",&val)==1){
        if(val>=0)
            insert(val);
        else
            break;
        cnt++;
    }
    printf("list is: ");
    printList();
    printf("\n\nEnter the value for search:");
    scanf("%d",&n);
    pos=searchNode(n);
    if(pos>0)
        printf("Position of the value %d in list is %d",n,pos);
    else
        printf("Not found");

    return 0;
}
