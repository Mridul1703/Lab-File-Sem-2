#include<stdio.h>
#include<string.h>
 
int TOP=-1;
 
void Push(char *stack, char ins, int max)
{
    if (TOP==max)
        printf("Overflow.");
    else{
        TOP=TOP+1;
        stack[TOP]=ins;
    }
}
 
char Pop(char *stack)
{
    if (TOP==-1)
        printf("Underflow.");
    else{
        char item=stack[TOP];
        TOP=TOP-1;
        return item;
    }
}
 
char View(char *stack){
    if (TOP==-1)        printf("Empty stack.");
    else
        return stack[TOP];
}
 
void POST(char *infix, char *post){
    int count=0;
    int max=strlen(infix);
    char stack[max],temp;
    Push(stack,'(',max);
    for (int i=0; TOP!=-1; i++){
        if (infix[i]>64 && infix[i]<91){
            post[count]=infix[i];
            count=count+1;
        } else if (infix[i]=='(')
            Push(stack, infix[i], max);
        else if (infix[i]=='+' || infix[i]=='-' || infix[i]=='*' || infix[i]=='/' || infix[i]=='^'){
            if (View(stack)=='(')
                Push(stack, infix[i], max);
            else{
                if (infix[i]=='+' || infix[i]=='-'){
                    while (View(stack)=='^' || View(stack)=='*' || View(stack)=='/' || View(stack)=='+' || View(stack)=='-'){
                        post[count]=Pop(stack);
                        count++;
                    }
                }else if (infix[i]=='*' || infix[i]=='/'){
                    while (View(stack)=='^' || View(stack)=='*' || View(stack)=='/'){
                        post[count]=Pop(stack);
                        count++;
                    }
                } else{
                    while (View(stack)=='^') {
                        post[count]=Pop(stack);
                        count++;
                    }
                }
                Push(stack,infix[i],max);
            }
        } else if (infix[i]==')'){
            while (View(stack)!='('){
                post[count]=Pop(stack);
                count++;
            }
            temp=Pop(stack);
        }
    }
}
 
void main(){
    char infix[]="Z*(X+Y-(M/N*O)^P)/Q)";
    int n=strlen(infix);
    char post[n];

    POST(infix,post);
    printf("%s",post);
    printf("\n");
}
