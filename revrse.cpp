#include <stdio.h>
#include <string.h>
void reverse(char * word){

   printf("Enter a string : \n");
   gets(word);

   strrev(word);

   printf("Reverse of the string you entered : %s\n", word);
}
int main()
{
   char x;
   reverse(&x);

   return 0;
}
