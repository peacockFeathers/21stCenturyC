#include <stdio.h>

int  add_two_ints(int a, int b){
    return a+b;
}

int main(){
    printf("1 + 1 = %i\n", add_two_ints(1, 1));
}
