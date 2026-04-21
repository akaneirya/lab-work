#include<stdio.h>

int main()
{
  // char ch [15] = {'a', 's', 'h', 'i', 's', 'h'};
  char ch[15] = "Ashish";
  for(int i = 0; ch[i] != NULL; i++) {
  printf("%c", ch[i]);
  }
}