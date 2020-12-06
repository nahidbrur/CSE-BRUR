#include<stdio.h>
int main()
{
    int arr[20],i,j,k,n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("\nEnter %d integers: ",n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(k=1;k<n;k++){
        int tmp=arr[k];
        int ptr=k-1;
        while(tmp<arr[ptr]){
            arr[ptr+1]=arr[ptr];
            ptr=ptr-1;
        }
        arr[ptr+1]=tmp;
    }
    printf("\nafter sort: ");
    for(j=0;j<n;j++)
        printf("%d  ",arr[j]);
    return 0;
}
