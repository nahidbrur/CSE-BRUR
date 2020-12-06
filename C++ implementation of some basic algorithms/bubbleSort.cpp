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

    for(k=0;k<n;k++){
        int ptr=0;
        while(ptr<=n-k-1){
            if(arra[ptr]>arra[ptr+1]){
                int tmp=arra[ptr];
                arra[ptr]=arra[ptr+1];
                arra[ptr+1]=tmp;
            }
            ptr++;
        }
    }
    printf("The sorted array is : ");
    for(j=0;j<n;j++){
        printf("%d ",arra[j]);
    }
    return 0;
}
