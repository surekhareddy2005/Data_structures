#include<stdio.h>
#include<string.h>
int get_priority(char ch){
    if(ch == '/' || ch == '*'){
        return 3;
    }
    else if(ch == '+' || ch == '-'){
        return 2;
    }
    else {
        return 1;
    }
}
void convert_infix_to_postfix(char *infix){
    char postfix[101];
    char st[50];
    int top = -1;
    int i, j = 0;
    for(i=0; i<strlen(infix); i++){
        int priority = get_priority(infix[i]);
        if(priority == 1){
            postfix[j++] = infix[i];
        }
        else {
            while(top != -1 && priority <= get_priority(st[top])){
                postfix[j++] = st[top--];
            }
            st[++top] = infix[i];
        }
        
    }
    while(top != -1) postfix[j++] = st[top--];
        postfix[j] = '\0';
    printf("%s",postfix);
}
int main (){
    char infix[101];//string will be give in infix form
    scanf("%s",infix);
    convert_infix_to_postfix(infix);
    return 0;
}
