#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char strng[100],strng2[100];
    int tam; int j,i;

    printf("Digite uma palavra: ");
    scanf("%s",strng);
    tam=strlen(strng);
    i = 0;
    for (  j = tam - 1; j>=0 ; j--)
    {
        strng2[j] = strng[i];
        i++;
    }

    if(strcmp(strng,strng2)==0)
    {
        printf("\nA palavra %s e um palindromo\n",strng);
    }
    else
    {
        printf("\nA palavra %s  nao e um palindromo\n",strng);
    }

    return 0;
}
