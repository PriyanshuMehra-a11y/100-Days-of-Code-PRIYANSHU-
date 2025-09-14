#include <stdio.h>
int main(){
int a,b,c;
printf("Enter first number a=");
scanf("%d",&a);
printf("Enter second number b=");
scanf("%d",&b);
c = a;
a = b;
b = c;
printf("No. after swap are a=%d b=%d",a,b);
}