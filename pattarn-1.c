// This program about print star like box shape
#include<stdio.h>
int main()
{
    int col, row, n;
    printf("Enter Your Range: ");
    scanf("%d",&n);

    ///This program create Top site output
    //print row
    for(row=1; row<=n; row++)
    {
        //print space
        for(col=1; col<=n-row; col++)
        {
            printf("   ");
        }

        //print left star
        for(col=2; col<=row; col++)
        {
         printf("*  ");
        }

        //print right star
        for(col=1; col<=row; col++)
            printf("*  ");

         printf("\n");
    }

    ///This program create bottom site output
    //print row
    for(row=1; row<=n; row++)
    {

        //print space
        for(col=1; col<=row; col++)
        {
            printf("   ");
        }

        //print left star
        for(col=2; col<=n-row; col++)
        {
         printf("*  ");
        }

        //print right star
        for(col=1; col<=n-row; col++)
            printf("*  ");

         printf("\n");
    }

    return 0;
}
