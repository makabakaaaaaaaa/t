#include <stdio.h>
main()
{
	int water_num = 0;
	scanf_s("%d", &water_num);
	int sum = water_num/2;

	while (water_num>=2)
	{
		sum = sum + water_num / 2;
	}
	printf("%d", num);
	return 0;
}