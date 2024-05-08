// write a program to check if a number is prime or not.

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main() {
    int x;
    printf ("Enter your number :\n");
    scanf ("%d",&x);
    if (x==2){
        printf("%d is a prime number\n", x);
    }
    else if (x%2==0){
        printf("%d is not a prime number\n", x);
    }
    else{
        printf("%d is a prime number\n", x);
    }
    return 0;
}

