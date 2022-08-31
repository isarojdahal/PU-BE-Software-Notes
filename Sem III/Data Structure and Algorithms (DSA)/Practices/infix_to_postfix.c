#include<ctype.h>
#include<stdio.h>
#define MAX 20

char stack[MAX];
int TOS = -1;

char push(char c){
    return (stack[++TOS] = c);
}

char pop(){
    if(TOS!=-1)
    return (stack[TOS--]);
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

    char expression[MAX];
    char *e, x;

    printf("Enter infix expression : ");
    scanf("%s", expression);

    *e = expression;

    while(*e!='\0'){

        if(isalnum(*e)){
            printf("%c", *e);
        }
        else if(*e=="("){
            push(*e);
        }
        else if(*e==")"){
            while((x=pop())!=')'){
                printf("%c", x);
            }
        }
        else{
            while(priority(stack[TOS]) >=priority(*e)){
                printf("%c", pop());
            }
            push(*e);
        }
        e++;
    }
    //print remaning data from stack.

    while(stack[TOS]!=-1){
        printf("%c", pop());
    }

    return 1;
}