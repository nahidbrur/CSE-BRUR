#include<stdio.h>
#include<stack>
#include<cstdlib>
#include<cstring>
using std::stack;


int evalute(char *expresion)
{
    int i,result,top1,top2;
    stack<int> newStack;

    for(i=0; i < strlen(expresion); ){


        char ch = expresion[i];
        if(ch == '+'){               //calculate for sum
            top1=newStack.top();
            newStack.pop();
            top2=newStack.top();
            newStack.pop();
            newStack.push(top2+top1);
            i++;
        }

        else if(ch =='-'){           //calculate for sub
            top1=newStack.top();
            newStack.pop();
            top2=newStack.top();
            newStack.pop();
            newStack.push(top2-top1);
            i++;
        }

        else if(ch =='*'){           //calculate for mul
            top1=newStack.top();
            newStack.pop();
            top2=newStack.top();
            newStack.pop();
            newStack.push(top2 * top1);
            i++;
        }

        else if(ch == '/'){             //calculate for div
            top1=newStack.top();
            newStack.pop();
            top2=newStack.top();
            newStack.pop();
            newStack.push(top2/top1);
            i++;
        }
        else{

            char tmp[10];
            int k=0;
            bool flag=true;
            while(expresion[i]==' '){       //clearing space
                i++;
            }
            while(flag){                   //taking digit
                if(expresion[i]>='0' && expresion[i]<='9'){
                    tmp[k]=expresion[i];
                    k++;i++;
                }
                else
                   flag=false;
            }
            tmp[k]='\0';
            if(strlen(tmp)>0){

                newStack.push(atoi(tmp));
            }
        }

    }
    result=newStack.top();
    return result;
}


int main()
{
    char expresion[50];
    printf("Enter an expresion: ");
    gets(expresion);     //taking expresion

    printf("After evaluation the result is: %d\n",evalute(expresion)); //calling function evalute
    return 0;
}
