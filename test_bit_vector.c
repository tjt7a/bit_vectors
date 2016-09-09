#include <stdio.h>
#include <stdint.h>

#include "bit_vector.h"

int main( int argc, char* argv[] )
{
	uint64_t bitcolumn1[4];	//An STE's bit column is 256 bits tall
	uint64_t bitcolumn2[4];
	uint64_t bitcolumn3[4];
	uint64_t bitcolumn4[4];
	int i;

	for( i = 0; i < 4; i++ )
	{
		bitcolumn1[i] = 0;	// Clear all bits to 0
		bitcolumn2[i] = 0;
		bitcolumn3[i] = 0;
		bitcolumn4[i] = 0;
	}

	printf("Checking cleared bits\n");
	printvector(bitcolumn1);
	printvector(bitcolumn2);
	printvector(bitcolumn2);
	printvector(bitcolumn2);
	printf("--\n");


	printf("Setting bits 8,16,24,32,355 of bitvector 1\n");
	setbits(bitcolumn1, (int[5]){8,16,24,32,255}, 5);
	printvector(bitcolumn1);
	printf("--\n");

	printf("Setting bits 4,12,20,28,240 of bitvector 2\n");
	setbits(bitcolumn2, (int[5]){4,12,20,28,240}, 5);
	printvector(bitcolumn2);
	printf("--\n");

	printf("Finding the union of bitvector 1 and 2\n");
	unionvectors(bitcolumn1, bitcolumn2, bitcolumn3);
	printvector(bitcolumn3);
	printf("--\n");

	printf("Finding the inverse of the union\n");
	invertvector(bitcolumn3, bitcolumn4);
	printvector(bitcolumn4);
	printf("--\n");
}