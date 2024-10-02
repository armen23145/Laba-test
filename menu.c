#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "max.h"
#include "min.h"
#include "diff.h"
#include "sum.h"

int main()
{

     char* pMas = malloc(101*11+1);
     int i = 0;
     int mas[100];
     char* next_token1 = NULL;
     while (1) {
         scanf("%c", &pMas[i]);
         if (pMas[i] == '\n') {
             break;
         }
         else {
             i++;
         }
     }
     pMas[i] = '\0';
     char* pch;
     int func;
     pch = strtok(pMas, " ");
     int j = 0;
     func = atoi(pch);
     while (pch != NULL)
     {
         /*printf("%s\n", pch);*/
         pch = strtok(NULL, " ");
         if (pch != NULL) {
             mas[j] = atoi(pch);
             j++;
         }    
         
     }
     switch (func)
     {
     case 0:
         printf("%d",max(mas,j));
         break;
     case 1:
         printf("%d", min(mas,j));
         break;
     case 2:
         printf("%d", diff(mas,j));
         break;
     case 3:
         printf("%d", sum(mas,j));
         break;
     default:
         printf("%s", "Данные некорректны");
         break;
     }
    return 0;
}
