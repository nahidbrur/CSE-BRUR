#include<stdio.h>

int minimum(int arr[],int n,int l)
{
   int i,loc=l,minn=arr[l];

   for(i=l;i<n-1;i++){
       if(minn>arr[i+1]){
            minn=arr[i+1];
            loc=i+1;
       }
   }
   return loc;
}

int main()
{
    int arr[20],i,j,k,n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("\nEnter %d integers: ",n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

     for(int l=0;l<n-1;l++){
        int loc=minimum(arr,n,l);

        int tmp=arr[l]; arr[l]=arr[loc];
        arr[loc]=tmp;
     }




    printf("\nafter sort: ");
    for(j=0;j<n;j++)
        printf("%d  ",arr[j]);
    return 0;
}
