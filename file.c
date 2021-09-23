#include<stdio.h>

int problem1();
long problem2();

int main(){
    printf("Problem 1 :\t%d\n", problem1());
    printf("Problem 2 :\t%ld\n", problem2());
}

int problem1(){
    int total = 0;
    int i;
    for (i = 1; i < 1000; i++){
        if (i % 3 == 0 || i % 5 == 0){
            total+= i;
        }
    }
    return total;
}

long problem2(){
    int a, b, c;
    a = 1;
    b = 1;
    c = 2;
    long total = 0;
    while (c < 4000000){
        if (c % 2 == 0){
            total+= c;
        }
        a = b;
        b = c;
        c = a + b;
    }
    return total;
}