/**
 * @author Vapaus World
 *         sudhik197@gmail.com 
**/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int asize = 0, i = 0, j = 0, count = 0;
    double sum = 0.0;
    printf("How many number you have\n");
    scanf("%d", &asize);
    int anum[asize];
    printf("Enter the number\n");
    for (i = 0; i < asize; i++)
    {
        scanf("%d", &anum[i]);
    }
    printf("You numbers\n");
    for (i = 0; i < asize; i++)
    {
        printf("%d\n", anum[i]);
    }
    printf("The avarage of 3 number is the array\n");
    for (i = 0; i < asize; i++)
    {
        for (j = i; j < i + 3; j++)
        {
            if (j < asize)
            {
                sum = sum + ((double)(anum[j]));
                count++;
            }
            else
            {
                break;
            }
        }
        printf("%f\n", (sum / count));
        sum = 0;
        count = 0;
        i = j - 1;
        printf("-------------\n");
    }
    return 0;
}