#include<stdio.h>
int main()
{
    int LA[100],i,j,k,n,flag,value;
    printf("Enter the number of elements of a linear array: ");
    scanf("%d",&n);
    printf("\nEnter %d integers: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&LA[i]);
    }
    printf("\nEnter the value for delete: ");
    scanf("%d",&value);
    j=0,flag=0;
    while(j<n-1){
        if(LA[j]==value)
            flag=1;
        if(flag==1){
            LA[j]=LA[j+1];
            j++;
        }
        else
            j++;
    }
    printf("\nAfter delete the linear array is: ");
    for(k=0;k<n-1;k++){
        printf("%d ",LA[k]);
    }
    printf("\n");
    return 0;
}

