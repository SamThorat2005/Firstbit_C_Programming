// print holo square

#include<stdio.h>
int main()
{
    for(int i=1; i<=10 ;i++)
    {
        for(int j=1;j<=10;j++)
        {
            

            if(i<=10 && j==1 || i==1 && j<=10 || i==10 && j<=10 || i<=10 && j==10)
            {
                printf("* ");
            }
            else if((i>=2 && i<=9) && (j>=2 && j<=9))
            {
                printf("  ");
            }
                
        }
        printf("\n");
    }
}