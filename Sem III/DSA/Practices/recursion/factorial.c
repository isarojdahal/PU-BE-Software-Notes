#include<stdio.h>


int fact(int num){

    //base case.
    if(num==1)
        return 1;
    return num * fact(num - 1); //recursive case.
}
int main(){

    printf("factorial of 5 : %d", fact(5));
    return 1;
}