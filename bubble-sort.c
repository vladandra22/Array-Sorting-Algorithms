#include <stdio.h>

int main ()
{
	int v[1001], n, ok, i;
	scanf ("%d" , &n);
	for (i = 0; i < n ; i++)
		scanf ("%d", &v[i]);
	for (i = 0 ; i < n-1; i++)
	{
		ok = 0;
		for(int j = 0; j < n - i + 1; j++)
		{
			if(v[j] > v[j + 1])
				{
					int aux = v[j];
					v[j] = v[j + 1];
					v[j + 1] = aux;
					ok = 1;
				}
		}
	}
	for (i = 0; i < n; i++)
		printf("%d ", v[i]);
