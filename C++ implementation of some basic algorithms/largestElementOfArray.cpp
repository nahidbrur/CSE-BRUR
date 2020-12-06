#include<stdio.h>
int main()
{
    int arra[100],n,i,k,j;
    printf("Enter the number of elements of array: ");
    scanf("%d",&n);
    printf("Enter %d integers: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&arra[i]);
    }
    int max=arra[0];
    int loc=0;
    for(j=0;j<n;j++){
        if(arra[j]>max){
            max=arra[j];
            loc=j;
        }
        j++;
    }

    printf("the loc of the largest element %d is %d\n",max,loc+1);
    return 0;
}
