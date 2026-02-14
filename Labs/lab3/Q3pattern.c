//print email like structure

#include<stdio.h>
int main()
{
    for(int i=1;i<=9;i++)
    {
        for(int j=1;j<=9;j++)
        {

            if (i==2 && (j>=3 && j<=7) || i==3 && (j>=4 && j<=6) || i==4 && j==5 )
            {
                printf("  ");
            }
            else
            {
                printf(" *");
            }
        }
        printf("\n");
    }

}