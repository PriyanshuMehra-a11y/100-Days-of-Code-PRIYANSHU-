#include <stdio.h>
int main(){
int a,b,c,d;
printf("Enter the cost prize:");
scanf("%d",&a);
printf("Enter selling prize:");
scanf("%d",&b);
c=b-a;
d=(c/a)*100;
if(b>a)
{
    printf("profit = %d",d);
}
else if(a>b){
    printf("Loss =%d",d);
}
else if (a=b){
printf("Loss");
}
}