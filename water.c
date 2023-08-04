#include <stdio.h>
main()
{
	int empty = 0;
	int money = 0;
	int sum = 0;
	int empty_leave = 0;
	scanf_s("%d", &money);
	sum = money;
	empty = sum;
	while (empty > 1)
	{
		empty = empty / 2;
		sum = sum + empty;
		empty = empty + empty_leave;
		empty_leave = empty % 2;
	}
	printf("%d", sum);
	return 0;
}