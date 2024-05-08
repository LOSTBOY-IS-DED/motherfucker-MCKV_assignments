// write a c program to swap two integer number without using the third variable

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main() {
    int x , y ;
    printf("Enter the value of x and y:\n");
    scanf("%d%d",&x,&y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("The values of x after swapping is: %d\n",x);
    printf("The values of y after swapping is: %d\n",y);


    return 0;
}




