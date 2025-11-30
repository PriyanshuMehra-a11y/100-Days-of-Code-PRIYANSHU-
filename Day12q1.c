#include <stdio.h>
int main(){
    int a,b,c=0;
printf("Enter the prize of book:");
scanf("%d",&a);
printf("Enter the number of days delayed:");
scanf("%d",&b);
if(b<=5){
    c=a+(2*b);
    printf("%d",c);}
    else if (b<=10 && b>5) {
        c=a+(b*4);
        printf("%d",c);}
    else if (b>10 && b<=20){
        c=a+(b*6);
        printf("%d",c);
    }
    else 
    printf("Membership cancled");
}