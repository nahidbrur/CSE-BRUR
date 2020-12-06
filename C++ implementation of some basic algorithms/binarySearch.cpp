#include<stdio.h>
int main()
{
    int arra[100],n,i,k=0,j;
    printf("Enter the number of elements of array: ");
    scanf("%d",&n);
    printf("Enter %d integers in increasing order: ",n);

    for(i=0;i<n;i++){
        scanf("%d",&arra[i]);
    }

    int item,loc=0;
    printf("Enter the item: ");
    scanf("%d",&item);

    int beg=0,end=n-1,mid=int((beg+end)/2);
    while(beg<=end && arra[mid]!=item){
        if(item>arra[mid])
            beg=mid+1;
        else
            end=mid-1;
        mid=int((beg+end)/2);
    }

    if(arra[mid]==item)
        printf("location of %d is %d\n",item,mid+1);
    else
        printf("not found\n");
    return 0;
}
