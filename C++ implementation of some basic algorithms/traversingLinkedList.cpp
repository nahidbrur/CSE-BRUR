#include<stdio.h>
#include<stdlib.h>
struct node{
    int value;
    struct node *next;
};

struct node *head=NULL;

void insert(int value){
    struct node *tmp=(struct node*)malloc(sizeof(struct node));
    struct node *link;

    tmp->value=value;
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

void printList(){
    struct node *tmp;
    tmp=head;
    while(tmp->next!=NULL){
        printf("%d-->",tmp->value);
        tmp=tmp->next;
    }
    printf("%d\n",tmp->value);

}

int main()
{
    int n,value,i;
    printf("Enter the numbers of value: ");
    scanf("%d",&n);
    printf("Enter %d integers: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&value);
        insert(value);
    }
    printList();
}








