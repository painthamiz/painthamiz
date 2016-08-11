#include <stdio.h>
#include <string.h>
void reverse(char *a)
{
  if(*a=='\0')
      return;
  reverse(a+1);
  printf("%c",*a);
}
int main() 
{
  char a[100];
  scanf("%s",a);
  reverse(a);
  return 0;
}
