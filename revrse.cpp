#include <stdio.h>
#include <string.h>
void reverse(char * word){
	char letter;
   printf("Enter a string : \n");
   gets(word);
   int length;
   length=strlen(word);
   for(int i=length-1;i>=0;i--){
   	letter=word[i];
   	printf("%c", letter);
   }
}
int main()
{
   char x;
   reverse(&x);

   return 0;
}
