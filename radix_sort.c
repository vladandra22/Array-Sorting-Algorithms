#include <stdio.h>
#include <stdlib.h>

void radix_sort (int a[], int n)
{
    int m[10][10], m_cnt[10];
    int i, j, k, r, NOP = 0, div = 1, maxi, p;
    maxi = a[0];
    for (i = 1; i < n; i++)
        if(a[i] > maxi)
            maxi = a[i];
    while (maxi > 0)
    {
        NOP++;
        maxi /= 10;
    }
    for (p = 0; p < NOP; p++)
    {
        for (i = 0; i < 10; i++)
            m_cnt[i] = 0;
        for (i = 0; i < n; i++)
        {
            r = (a[i] / div) % 10;
            m[r][m_cnt[r]] = a[i];
            m_cnt[r]++;
        }
        i = 0;
        for (k = 0; k < 10; k++)
            for (j = 0; j < m_cnt[k]; j++)
                {a[i] = m[k][j];
                i++;
                }
        div*=10;
        printf("After pass %d: ", p+1);
        for (i = 0; i < n; i++)
                printf("%d ", a[i]);
        printf("\n");

    }
}
int main (){
   int i, n, a[10];
   printf ("Enter the number of items to be sorted: ");
   scanf ("%d", &n);
   printf ("Enter items: ");
   for (i = 0; i < n; i++){
      scanf ("%d", &a[i]);
   }
   radix_sort (a, n);
   printf ("Sorted items : ");
   for (i = 0; i < n; i++)
      printf ("%d ", a[i]);
   printf ("\n");
   return 0;

