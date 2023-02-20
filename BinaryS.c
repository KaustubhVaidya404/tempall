#include<stdio.h>
int binarySearch(int arr[], int l, int r, int x, int i)
{
    while (l <= r) {
	int m = l + (r - l) / 2;
	i++;
		if (arr[m] == x)
	{   printf("\nTotal iterations: %d\n",i);
	    return m;
	}
		if (arr[m] < x)
	    l = m + 1;
	else
	    r = m - 1;
    }
    return -1;
}
void main()
{
    int arr[100],n,c;
    int it=0;
    int num, result;
    
    printf("Enter number of elements in array\n");
	scanf("%d", &n);
	printf("Enter %d integer(s)\n", n);
	for (c = 0; c < n; c++)
    scanf("%d", &arr[c]);
	printf("Enter a number to search\n");
	scanf("%d", &num);
    result = binarySearch(arr, 0, n - 1, num, it);
    (result == -1) ? printf("Element is not present in array"): printf("Element is present at index %d",result);
    
}
