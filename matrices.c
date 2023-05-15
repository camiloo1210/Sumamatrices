#include <stdio.h>
#include <time.h>
#include<stdlib.h>
int main()
{
    int x[3][3]={{0,0,0},{0,0,0},{0,0,0}};
    int y[3][3]={{0,0,0},{0,0,0},{0,0,0}};
    int z[3][3]={{0,0,0},{0,0,0},{0,0,0}};
    for (int  i = 0; i < 3; i++)
    {
        for (int j=0; j <3; j++)
        {
            x[i][j]=rand();
            
        }
    }
        for (int i = 0; i < 3; i++)
    {
        for (int j=0; j <3; j++)
        {
              y[i][j]=rand();
           
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            z[i][j]=x[i][j]+y[i][j];
            printf("%i",z[i][j]);
        }
    }
} 
