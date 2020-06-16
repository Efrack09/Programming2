#include <stdio.h>

#define ARRAY_MAX 10

int values[ARRAY_MAX] = {              
	9, 3, 15, 0, 14, -23, -4, 5, -8, 4
};

int i;                      

int *values_ptr;            

int main() {

	for (i = 0; i < ARRAY_MAX; ++i) {
		printf("values[%d] = %d\n", i, values[i]);
	}

	values_ptr = &values[0];

	for (i = 0; i < ARRAY_MAX; ++i) {
		*values_ptr = 0;
		++values_ptr;
	}

	printf("--------------------\n");
	for (i = 0; i < ARRAY_MAX; ++i) {
		printf("values[%d] = %d\n", i, values[i]);
	}

	return(0);
}
