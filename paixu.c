#include  <stdio.h>
#include  <string.h>
#define   N   5
#define   M   8
void fun(char(*ss)[M])
{
	char  *ps[N], *tp;    int  i, j, k;
	for (i = 0; i<N; i++) ps[i] = ss[i];
	for (i = 0; i<N - 1; i++) {
		k = i;
		for (j = i + 1; j<N; j++)
		if (strlen(ps[k]) < strlen(ps[j])) k = j;
		tp = ps[i];  ps[i] = ps[k]; ps[k] = tp;
	}
	printf("\nThe string after sorting by length:\n\n");
	for (i = 0; i<N; i++)  puts(ps[i]);
}
main()
{
	char  ch[N][M] = { "red", "green", "blue", "yellow", "black" };
	int  i;
	printf("\nThe original string\n\n");
	for (i = 0; i<N; i++)puts(ch[i]);  printf("\n");
	fun(ch);
	getchar();
}