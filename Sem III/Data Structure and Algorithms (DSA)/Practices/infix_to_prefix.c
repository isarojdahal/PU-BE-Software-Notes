#include<stdio.h>
#include<ctype.h>
#include<string.h> 
#define MAX 20

char stack[MAX];
int TOS = -1;

char push(char c){
    return stack[++TOS] = c;
}

char pop(){
    if(TOS!=-1)
        return stack[TOS--];
}

int priority(char c){

    switch(c){
        case '^':
            return 3;
        case '*':
        case '/':
            return 2;
        case '+':
        case '-':
            return 1;
        default:
            return 0;
        }
}



int main(){

    char expression[MAX], postfix[MAX];
    char *e, x;

    printf("Enter any infix expression : ");
    scanf("%s", expression);

    strrev(expression);

    *e = expression;

    while(*e !='\0'){

        if(isalnum(*e)){
            strncat(postfix, *e, 1);
        }
        else if(*e==")"){
            push(*e);
        }
        else if (*e =="("){

            while((x=pop())!=')'){
                strncat(postfix, x, 1);
            }
        }
        else{

            if(priority(*e)>=priority(stack[TOS])){
                push(*e);
            }
            else{

                while(priority(*e)<priority(stack[TOS])){
                    strncat(postfix, pop(), 1);
                }
            }
        }

        e++;
    }

    strrev(postfix);
    printf("%s", (postfix));

    return 1;
}