#include "Autores.h"
#include "input.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int initAutores(Autores* list, int len)
{
    int result=-1; // devuelve -1 si hay error y 0 si est� todo ok
    int i;

    if(list!=NULL && len>0)
    {
        for(i=0;i<len;i++)
        {
            list[i].isEmpty=1;
        }
        result=0;
    }

    return result;
}
int printAutores(Autores* list, int len)
{
    int result=-1; // devuelve -1 si hay error y 0 si est� todo ok
    int i;

    printf("\n\tid \tNombre \t\tApellido \n\n");
    for(i=0;i<len;i++)
    {
        printf("\t%d \t%s \t\t%s \n", list[i].idAutores, list[i].nombre, list[i].apellido);
        result=0;
    }
    printf("\n");

    return result;
}

int ordenarAutores(Autores* list, int len)
{
    int result=-1;
    Autores aux;
    int i;
    int j;

    for(i=0;i<len-1;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(strcmp(list[i].apellido, list[j].apellido)>0)
            {
                aux=list[i];
                list[i]=list[j];
                list[j]=aux;
                result=0;
            }
        }
    }

    return result;
}
