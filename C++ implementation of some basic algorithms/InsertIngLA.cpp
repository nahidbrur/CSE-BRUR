#include<stdio.h>
int main()
{
    int LA[100],i,j,k,n,index,value;
    printf("Enter the number of elements of a linear array: ");
    scanf("%d",&n);
    printf("\nEnter %d integers: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&LA[i]);
    }
    printf("\nEnter the value and position(between 1 to %d): ",n+1);
    scanf("%d %d",&value,&index);
    j=n;
    while(j>=index){
        LA[j]=LA[j-1];
        j--;
    }
    LA[index-1]=value;
    printf("\nAfter insert the linear array is: ");
    for(k=0;k<n+1;k++){
        printf("%d ",LA[k]);
    }
    printf("\n");
    return 0;
}
