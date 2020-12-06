#include<stdio.h>
int main()
{
    int LA[100],i,j,k,n,count=0;
    printf("Enter the number of elements of a linear array: ");
    scanf("%d",&n);
    printf("\nEnter %d integers: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&LA[i]);
    }
    for(j=0;j<n;j++){
       printf("%d\n",LA[j]);
       count++;
    }
    printf("The number of visited elements is: %d\n",count);
    return 0;

}
