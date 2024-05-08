#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

void main() {
    int x,y=0,i=1;
    printf("enter the value of x: \n");
    scanf("%d",&x);
    while(i<=5){
        y=y+pow(i,i);
        i++;
    }
    printf("%d",y);
}
