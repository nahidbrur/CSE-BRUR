#include<stdio.h>
#include<stack>
using std::stack;
int arr[30];
int loc;

void quick(int left,int right)
{
    while(arr[loc]<=arr[right] && loc!=right){
        right--;
    }
    if(loc==right)
        return;
    if(arr[loc]>arr[right]){
        int tmp=arr[right]; arr[right]=arr[loc];
        arr[loc]=tmp;
        loc=right;
    }

    while(arr[left]<=arr[loc] && loc!=left){
        left++;
    }
    if(loc==left)
        return;
    if(arr[loc]<arr[left]){
        int tmp=arr[left]; arr[left]=arr[loc];
        arr[loc]=tmp;
        loc=left;
    }

    quick(left,right);
}

int main()
{
    int n,i,j;
    printf("Enter the number of element of array: ");
    scanf("%d",&n);
    printf("Enter %d numbers: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int beg=0,end=n-1;
    stack<int> lower,upper;
    if(n>1){
        lower.push(beg);
        upper.push(end);
    }
    while(!lower.empty()){
        beg=lower.top();lower.pop();
        end=upper.top();upper.pop();
        loc=beg;

        quick(beg,end);

        if(beg<loc-1){
            lower.push(beg);
            upper.push(loc-1);
        }
        if(loc+1<end){
            lower.push(loc+1);
            upper.push(end);
        }
    }


    printf("\nAfter sort: ");
    for(j=0;j<n;j++){
        printf("%d ",arr[j]);
    }
    return 0;
}
