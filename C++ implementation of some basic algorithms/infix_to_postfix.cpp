#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

//checking operand
bool isOperand(char ch)
{
    if(isdigit(ch) || isalpha(ch))
        return true;
    return false;
}

//checking operator
bool IsOperator(char ch)
{
    if((ch=='+') || (ch=='-') || (ch=='*') || (ch=='/') || (ch=='^'))
        return true;
    return false;
}

        //taking the precedence of operator
int getPrecendence(char ch)
{
    switch(ch)
    {
        case '+':
        case '-':
            return 1;
            break;
        case '*':
        case '/':
            return 2;
            break;
        case '^':
            return 3;
            break;
    }
}

    //comparing precedence between stack top and infix exp. operator
bool hasHigherPre(char sch,char ch)
{
    int op1=getPrecendence(sch);
    int op2=getPrecendence(ch);
    if(op1>=op2)
        return true;
    return false;
}


    //this function give equivalent postfix exp.
char*  getExpresion(char infix[])
{
    int i,k=0,len=strlen(infix);

    char postfix[40];
    stack <char> s;

    infix[len]=')';    //taking ) at the end of infix exp
    s.push('(');        //push ( in the stack for manage extra ) in infix exp

    for(i=0;i<len+1;i++){

        if(infix[i]==' ')
            continue;

        else if(infix[i]=='(')
            s.push(infix[i]);

        else if(infix[i]==')'){
            while(s.top()!='('){
                postfix[k++]=s.top();
                s.pop();
            }
            s.pop();
        }

        else if(isOperand(infix[i])){
            postfix[k++]=infix[i];
        }

        else if(IsOperator(infix[i])){
            while(!s.empty() && s.top()!='(' && hasHigherPre(s.top(),infix[i])){
                postfix[k++]=s.top();
                s.pop();
            }
            s.push(infix[i]);
        }
    }

    return postfix;
}

int main()
{
    char infix[40];
    printf("Enter an infix expresion: ");
    gets(infix);
    char *postfix=getExpresion(infix);
    printf("\nPostfix expresion is: %s\n",postfix);
}

