#include <stdio.h>
#define n 100

  void enterstring(char *cad);
   void EnterCharacter(char *arre);
    int printNumberTimes(char *stringet, char character);

       int main()
         {
             char cad[n];
    char arre;
    int numbertimescharacter;

    enterstring(cad);
    EnterCharacter(&arre);
   numbertimescharacter = printNumberTimes(cad,arre);

    printf("the character %c appear %d times in the string",arre,numbertimescharacter);

    return 0;
}
void EnterCharacter(char *arre)
{
    printf("Enter the desired character: ");
    scanf(" %s", arre);
}

void enterstring(char *cad)
{

    printf("Enter a string of characters: ");
    gets(cad);
}
int printNumberTimes(char *stringet, char characters)
{
    int cont = 0;
    for (int z = 0; z < n; z++)
    {
        if (stringet[z] == characters )
        {
            cont++;
        }
    }
    return cont;
}
