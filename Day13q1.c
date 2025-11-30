#include <stdio.h>
int main(){
    int a,b,d=0;
    char c;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    printf("Enter operation:");
    scanf(" %c",&c);
    switch(c){
        case '+':
        d=a+b;
        printf("%d\n",d);
        break;
        case '-':
        d=a-b;
        printf("%d\n",d);
        break;
        case '*':
        d=a*b;
        printf("%d\n",d);
        break;
        case'%':
        d=a%b;
        printf("%d\n",d);
        break;
        case '/':
        d=a/b;
        printf("%d\n",d);
        break;
        default:
        printf("Enter valid opration");
    }
}