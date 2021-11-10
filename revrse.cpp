#include <stdio.h>
#include <stdlib.h>
void reverse(char * word){
   printf("Enter a string : ");

   gets(word);
   strrev(word);
   printf("Reverse of entered string is : %s", word);
}
int main()
{
    char x;
    reverse(&x);
    return 0;
}
