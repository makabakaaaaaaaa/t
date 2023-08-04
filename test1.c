#include <stdio.h>
main()
{
	int a = 0;//第一个数组中的数的个数
	int b = 0;//第二个数组中的数的个数
	int i = 0;
	int j = 0;
	int k = 0;
	int c = 0;
	int m = 0;
	int n = 0;
	int arr[] = { 0 };
	int arr_1[] = { 0 };
	int arr_2[] = { 0 };
	printf("请输入第一个数组数的个数：");
	scanf_s("%d", &a);
	printf("请输入第一个数组中的数:");
	for (i = 0; i < a; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	printf("请输入第二个数组数的个数：");
	scanf_s("%d", &b);
	printf("请输入第二个数组中的数:");
	for (j = 0; j < b; j++)
	{
		scanf_s("%d", &arr_1[j]);
	}
	i = 0, j = 0, k = 0;
	while(i<a)
	{
		arr_2[k] = arr[i];
		k++;
		i++;              //把两个数组里的数放到arr_2里面
	}
	while(j<b)
	{
		arr_2[k] = arr_1[j];
		k++;
		j++;
	}
	/*for (j = 0; j < a; j++)
	{
		for (k = 0; k < a-1; k++)
		{
			if (arr[k] > arr[k + 1])
			{
				int temp = 0;
				temp = arr[k];
				arr[k] = arr[k + 1];
				arr[k + 1] = temp;
			}
		}
	}*/
	/*for (c = 0; c < k; c++)
	{
		printf("%d", arr_2[c]);
	}*/
	for (m= 0; m < k-1; m++)
	{
		for (n = 0; n < k-1; n++)
		{
			if (arr_2[n] > arr_2[n + 1])
			{
				int temp = 0;
				temp = arr_2[n];
				arr_2[n] = arr_2[n + 1];
				arr_2[n + 1] = temp;
			}
		}
	}
	for (c = 0; c < k; c++)
	{
		printf("%d", arr_2[c]);
	}
	return 0;
}
