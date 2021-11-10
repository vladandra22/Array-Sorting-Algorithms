#include <stdio.h>
#include <stdlib.h>

void merge_sort(int v[], int st, int dr)
{
	if(st < dr)
	{

	    int tmp[1000];
		int m = (st + dr) / 2;
		merge_sort(v, st , m);
		merge_sort(v, m + 1 , dr);

		int i = st, j = m + 1, k = 0;
		while( i <= m && j <= dr )
			if( v[i] < v[j])
				tmp[++k] = v[i++];
			else
				tmp[++k] = v[j++];
		while(i <= m)
			tmp[++k] = v[i++];
		while(j <= dr)
			tmp[++k] = v[j++];
		for(i = st , j = 1 ; i <= dr ; i ++ , j ++)
			v[i] = tmp[j];
	}
}

int main (){
   int i, n, a[1000];
   printf ("Enter the number of items to be sorted: ");
   scanf ("%d", &n);
   printf ("Enter items: ");
   for (i = 0; i < n; i++){
      scanf ("%d", &a[i]);
   }
   merge_sort (a, 0, n);
   printf ("Sorted items : ");
   for (i = 0; i < n; i++)
      printf ("%d ", a[i]);
   printf ("\n");
   return 0;
}
