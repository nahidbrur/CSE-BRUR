#include<stdio.h>
#include<stdlib.h>
struct node{
    int value;
    struct node *next;
};
struct node *head=NULL;
void insert(int n)
{
    struct node *tmp=(struct node*)malloc(sizeof(struct node));
    struct node *link=head;

    tmp->value=n;
    tmp->next=NULL;

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

void printList()
{
    struct node *tmp=head;
    while(tmp!=NULL){
        printf("%d-->",tmp->value);
        tmp=tmp->next;
    }
}

void deleteNode(int pos)
{
    int cnt=2;
    struct node *pre=head;
    struct node *curr=head->next;
    struct node *currNext=curr->next;

    if(pos==1){
        head=head->next;
    }
    else{
        while(cnt<pos){
            pre=pre->next;
            curr=curr->next;
            currNext=currNext->next;
            cnt++;
        }
        pre->next=currNext;
    }
}

int main()
{
    int val,pos,cnt=0;
    printf("Enter some integers( (-ve) for exit): ");
    while(scanf("%d",&val)==1){
        if(val>=0)
            insert(val);
        else
            break;
        cnt++;
    }
    printf("Before delete the list is: ");
    printList();
    printf("\nEnter the position of an node(1 to %d): ",cnt);
    scanf("%d",&pos);
    deleteNode(pos);
    printf("\nAfter delete the list is: ");
    printList();

}
