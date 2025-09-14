#include <stdio.h>
int main(){
 int a;
printf("Enter unit in second:");
scanf("%d",&a);
int h=a/3600;
int m=a%3600/60;
int s=a%60;
printf("%d:%d:%d",h,m,s);
}
