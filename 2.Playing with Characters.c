#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char s[24];
    char t[100];
    
    scanf("%c", &ch);
    scanf("%s", s);
    getchar();
    scanf("%[^\n]%*c", t);
    
    printf("%c\n", ch);  //prints a letter
    printf("%s\n", s);   //prints a word
    printf("%s\n", t);   //prints a sentence
      
    return 0;
}
