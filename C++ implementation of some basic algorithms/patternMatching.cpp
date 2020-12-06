#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char fs[100],ss[100],fl,sl,maxx;
    printf("Enter first string: ");
    gets(fs);
    fl=strlen(fs);
    printf("Enter second string less or than equal %d characters: ",fl);
    gets(ss);
    sl=strlen(ss);
    maxx=fl-sl+1;

    int i,k=0,index=0;
    while(k<maxx){
        int flag=1;
        for(i=0;i<sl;i++){
            if(ss[i]!=fs[k+i]){
                flag=0;
                 break;
            }
        }

        if(flag==1){
          index=k+1;
          break;
        }
        k++;
    }

    if(index==0)
        printf("There is no matching\n");
    else
        printf("matching index is %d",index);
    return 0;
}
