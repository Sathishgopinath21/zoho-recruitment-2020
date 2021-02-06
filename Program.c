
#include<stdio.h>
int main()
{
    int i,j,row;
    puts("Enter the Row Value:");  
    scanf("%d", &row);
    for(i=1;i<=row;i++)
    {
        for(j=row;j>row-i;j--)
        {
            printf("%d",j);
        }

        for(j=1;j<=row-i;j++)
        {
            printf("%d",(row - i + 1));
        }

        printf("\n");
    }

    return 0;
}
