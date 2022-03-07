#include<stdio.h>

int TOH(int n, char source, char aux, char dest){

    if(n==1){
        printf("\nMove disk %d from peg %c to peg %c", n, source, dest);
        return 1;
    }
    TOH(n - 1, source, dest, aux);
    printf("\nMove disk %d from peg %c to peg %c", n, source, dest);
    TOH(n - 1, aux, source, dest);
}
int main(){
    return TOH(3, 'A', 'B', 'C');
    
}