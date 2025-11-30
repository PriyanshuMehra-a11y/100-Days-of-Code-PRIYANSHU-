#include <stdio.h>
int main(){
  char ch;
    printf("Enter a characher:");  
scanf("%c",&ch);
if (ch>='A'&& ch<='Z'){
 printf("Upper case alphabet");
}
  else if (ch>='a' && ch<='z'){
  printf("Lower case character");
  }
  else if (ch>='0'&& ch<='9'){
  printf("Its digit");
  }
  else {
  printf("Its special character");
}
}


  