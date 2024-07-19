#include<stdio.h>
#include<string.h>
#include<ctype.h>
void postfix_evaluation(char *postfix){
    int st[101];
    int top = -1;
    int i;
    for(i=0; i<strlen(postfix); i++){
        if(isdigit(postfix[i])){
            st[++top] = postfix[i]-'0';
        }
        else {
            int val;
            if(postfix[i] == '+'){
                val = (st[top-1]) + (st[top]);
                top--;
                top--;
            }
            else if(postfix[i] == '-'){
                val = (st[top-1]) - (st[top]);
                top--;
                top--;
            }
            else if(postfix[i] == '*'){
                val = (st[top-1]) * (st[top]);
                top--;
                top--;
            }
            else {
                val = (st[top-1]) / (st[top]);
                top--;
                top--;
            }
            st[++top] = val;
            
        }
    }
    printf(" the final result after evaluation of posfix expression is %d",st[top]);
}
int main (){
    char postfix[101];
    printf("enter postfix expression\n");
    scanf("%s",postfix);
    postfix_evaluation(postfix);
    return 0;
}
