#include <stdio.h>
#include <string.h>
void main()
{
    int a[15];
    int i, j, k, n, c = 0, pos = 0;
    //clrscr();
    printf("\nEnter the number of bits: ");
    scanf("%d", &n);
    printf("\nEnter the bits: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            c++;
            if (c == 5)
            {
                pos = i + 1;
                c = 0;
                for (j = n; j >= pos; j--)
                {
                    k = j + 1;
                    a[k] = a[j];
                }
                a[pos] = 0;
                n = n + 1;
            }
        }
        else
            c = 0;
    }
    printf("\nDATA AFTER STUFFING:\n");
    printf("01111110\t");
    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
    printf("\t01111110");
    //getch();
}
