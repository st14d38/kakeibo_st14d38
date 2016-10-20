#include<stdio.h>
#include "sum.h"

int main()
{
	int payments[5] = {1, 2, 3, 4, 5};

	if (sum(payments) == 15 ) {
		printf("成功\n");
	} else {
		printf("失敗\n");
	}

	return 0;
}
