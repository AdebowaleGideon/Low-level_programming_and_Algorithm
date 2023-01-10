/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer to array head
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i <= n; i++, n--)
	{
		tmp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = tmp;
	}
}
