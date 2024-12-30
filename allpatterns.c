#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows\n");
    scanf("%d", &n);
    /*
  <---NUMBER PATTERN --->
        1
        1 2
        1 2 3
        1 2 3 4
        1 2 3 4 5
    */

    printf("<---NUMBER PATTERN --->\n\n\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    /*

        <---STAR PATTERN --->


        * * * * *
        * * * *
        * * *
        * *
        *


    */
    printf("\n");
    printf("<---STAR PATTERN FIRST--->\n\n\n");

    for (int i = 1; i <= n; i++)
    {
        for (int j = 5; j >= i; j--)
        {
            printf("* ", j);
        }
        printf("\n");
    }
    /*<---STAR PATTERN --->


        *
        **
        ***
        ****
        *****

*/
    printf("\n");
    printf("<---STAR PATTERN SECOND--->\n\n\n");

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
