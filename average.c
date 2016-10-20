#include <stdio.h>
#include "average.h"

int average(int payments[]){
	int i;
	int result1=0;
	for(i=0;i<5;i++){
		result1 = result1 + payments[i];	
	}
	result1=result1/5;
	return result1;
}
