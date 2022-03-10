#include<stdio.h>
#include<string.h>
 
int TOP = -1;
 
void PUSH(char *stack, char ins, int max){
    if (TOP==max)
        printf("Overflow.");
    else{
        TOP=TOP+1;
        stack[TOP]=ins;
    }
}
 
char POP(char *stack){
    if (TOP==-1)
        printf("Underflow.");
    else {
        char item=stack[TOP];
        TOP=TOP-1;
        return item;
    }
}
 
int eval(char *post){
    int max=strlen(post);
    char stack[max],ans,A,B;
    int res;
    for (int i=0; post[i]!=')'; i++){
        if (post[i]>47 && post[i]<58)
            PUSH(stack,post[i],max);
        else{
            if (post[i]=='+'){
                A=POP(stack);
                B=POP(stack);
                ans=(int)B+(int)A;
                PUSH(stack,ans,max);
            } else if (post[i]=='-'){
                A=POP(stack);
                B=POP(stack);
                ans=(int)B-(int)A;
                PUSH(stack,ans,max);
            } else if (post[i]=='*'){
                A=POP(stack);
                B=POP(stack);
                ans=(int)B*(int)A;
                PUSH(stack,ans,max);
            } else if (post[i]=='/'){
                A=POP(stack);
                B=POP(stack);
                ans=(int)B/(int)A;
                PUSH(stack,ans,max);
            }
        }
    }
    res=(int)POP(stack);
    return res;
}
 
void main(){
    char post[]={'8','1','2','+','*','7','1','/','-',')'};
    int ans=eval(post);
    printf("%d \n",ans);
}