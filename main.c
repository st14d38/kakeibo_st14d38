#include<stdio.h>
#include "sum.h"
#include "average.h"

#define number 5

int main()
{
	int payments[number];
	int i;
	for(i=0; i<number; i++) {
		scanf("%d", &payments[i]);
	}

	printf("合計値:%d\n", sum(payments));
	printf("平均値:%d\n", average(payments));
	return 0;
}
