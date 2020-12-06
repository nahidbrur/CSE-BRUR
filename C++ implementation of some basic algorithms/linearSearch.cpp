#include<stdio.h>
int main()
{
    int arra[100],n,i,k=0,j;
    printf("Enter the number of elements of array: ");
    scanf("%d",&n);
    printf("Enter %d integers: ",n);

    for(i=0;i<n;i++){
        scanf("%d",&arra[i]);
    }

    int item,loc=0;
    printf("Enter the item: ");
    scanf("%d",&item);

    while(k<n){
        if(item==arra[k]){
            loc=k+1;
            break;
        }
        k++;
    }

    if(loc>0)
        printf("the location of %d is %d\n",item,loc);
    else
        printf("not found\n");
    return 0;
}
