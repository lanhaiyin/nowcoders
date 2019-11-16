#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>

#if 1
int Fun(int  *arr,int * end)//int *end
{
	int num = 0;
	if (arr == end)
		return ++num;
	else if (*arr == *(arr+1))
	{
		while (*arr == *(arr + 1))
		{
			arr++;
			num++;
		}
		if (*arr > * (arr + 1))
		{
			while (*arr > *(arr + 1))
			{
				arr++;
				num++;
				if (arr == end)
					return ++num;
			}
			return ++num;
		}
		else if (*arr < *(arr + 1))
		{
			while (*arr < *(arr + 1))
			{
				arr++;
				num++;
				if (arr == end)
					return ++num;
			}
			return ++num;
		}
	}
	else if (*arr>*(arr+1))
	{
		while (*arr >= *(arr + 1))
		{
			arr++;
			num++;
			if (arr == end)
				return ++num;
		}
		return ++num;
	}
	else if(*arr < *(arr + 1))
	{
		while (*arr <= *(arr + 1))
		{
			arr++;
			num++;
			if (arr == end)
				return ++num;
		}
		return ++num;
	}
}
void pr(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main()
{
	int n;
	scanf_s("%d", &n);
	int arr[4000];
	int num = 0;
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i]);
	}

	for (int i = 0; i < n;)
	{
		int tmp = Fun(&arr[i],&arr[n-1]);
		num++;
		//pr(&arr[i], tmp);
		i += tmp;
	}
	printf("%d", num);
	return 0;
}
#endif

#if 0

int Fun(int* arr, int len)
{
	int num = 0;
	while ((len - 1))
	{
		if (*arr >= *(arr + 1))
		{
			while (*arr >= *(arr + 1))
			{
				arr++; len--;
				if ((len - 1) == 0)
					break;

			}
			num++;

		}
		else if (*arr <= *(arr + 1))
		{
			while (*arr <= *(arr + 1))
			{
				arr++; len--;
				if ((len - 1) == 0)
					break;

			}
			num++;
		}
	}
	return num;
}

int main()
{
	int n;
	scanf_s("%d", &n);
	int arr[40];
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		count++;
		scanf_s("%d", &arr[i]);
	}

	printf("%d", Fun(arr, count));
	return 0;
}

#endif