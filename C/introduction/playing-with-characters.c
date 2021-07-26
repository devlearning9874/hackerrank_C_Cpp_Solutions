#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    char c;
    scanf("%c", &c);
    char p[100];
    scanf("%s \n", p);
    
    char sentence[100];
    scanf("%[^\n]%*c", sentence);
    
    printf("%c \n", c);
    printf("%s \n", p);
    printf("%s \n", sentence);
      
    return 0;
}

/*

Sample Input 0

C
Language
Welcome To C!!

Sample Output 0

C
Language
Welcome To C!!



*/