#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, totalChar;
    totalChar=0;
    printf("Please enter the string for count words\n");
    gets(str);

    for(i=0; str[i] != '\0'; i++){
        if(str[i]!=' '){
            totalChar++;
        }
    }
    printf("The total characters of the given string= %d",totalChar);
    getch();
    return 0;
}