// write a program to check a number is a armstrong number or not.

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main() {
    int num, dusraNum , result=0, remainder ;
    printf("Enter a three digit number :");
    scanf("%d",&num);

    dusraNum=num;

    while(dusraNum!=0){
        remainder=dusraNum%10;
        result+=remainder*remainder*remainder;
        dusraNum /= 10;
    }
    if(result == num)
        printf("%d is an Armstrong number:\n",num);
    else
        printf("%d is not a armstrong number.\n",num);
    return 0;
}
