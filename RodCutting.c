#include<stdio.h>
#include<limits.h>

/*Simple method to calculate the maximum of two numbers*/
int max(int x, int y)
{
	return x > y ? x : y;
}

/* this method is recursive call to find out the maximum revenue obtained*/

int cut(int *p, int n)
{
	if (n == 0)
		return 0;
	int q = INT_MIN;
	
	for (int i = 0; i < n; i++)
	{
		q = max(q, p[i] + cut(p, n - i-1));
	}
	return q;
}

/* the driving function */
int main()
{
	int profits[10] = { 1, 5, 8, 9, 10, 17, 17, 20, 24, 30 };

	int result = 0;
	result=cut(profits, 4);

	printf("The final answer is %d\n ", result);
	getch();
	return 0;


}
