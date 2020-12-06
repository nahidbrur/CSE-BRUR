#include<stdio.h>
void tower(int n ,char beg,char aux,char end)
{
    if(n==1){
        printf("%c-->%c\n",beg,end);
        return;
    }
    tower(n-1,beg,end,aux);
    printf("%c-->%c\n",beg,end);

    tower(n-1,aux,beg,end);
}
int main()
{
    printf("Enter the number of peg: ");
    int n;
    scanf("%d",&n);
    printf("We need to follow the move: \n");
    tower(n,'A','B','C');
}
