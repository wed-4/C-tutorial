#include <stdio.h>

int main(void) {
  int i=0, j;
  char str[255];
  printf("文字列を入力してね\n");
  scanf("%s", str);
  printf("逆にすると");
  while(str[i] != '\0') {
    i++;
  }
  for(j=i-1; j>=0; j--)
  {
     putchar(str[j]);   
  }
  printf("です。\n");
  return 0;
}
