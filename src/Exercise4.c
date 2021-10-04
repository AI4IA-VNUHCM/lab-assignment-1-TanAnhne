/*
4.	Write a program to display a hollow triangle by asterisks (*) on the screen.
The input will be the height of the triangle and the thickness of the borders.
Ex:
 ____________________________________
| Input: 7 2                         |
| Output:                            |
|             *                      |
|           * * *                    |
|         * *   * *                  |
|       * *       * *                |
|     * *           * *              |
|   * * * * * * * * * * *            |
| * * * * * * * * * * * * *          |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
int n,i,h;
printf("nhap chieu cao tam giac va do day");
scanf("%d","%d",&n,&h);
for(i=1;i<=n;i++)
{
for(h;h<=n-i;h++)
printf(" ");
if(h;h<=n*i-1;h++)
else printf("*");
printf("\n");
}
getch();
}