#include <stdio.h>
int main(){
  int a,b;
  printf("Enter first number a=");
  scanf("%d",&a);
  printf("Enter second number b=");
  scanf("%d",&b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("numbers after swap are a=%d b=%d",a,b);
}