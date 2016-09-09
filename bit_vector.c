/*
	Bit_vector file for core bitvector manipulation functions
	The code and ideas contained in this code were derived from:
	http://www.mathcs.emory.edu/~cheung/Courses/255/Syllabus/1-C-intro/bit-array.html

	Coded by: 	Tommy Tracy II
	email:		tjt7a@virginia.edu
	date:		8 September 2016
*/
	
#include <stdint.h>
#include <stdio.h>
#include "bit_vector.h"

// Setting the word 64 to 64 (for 64-bit machine)

/*
	Set the bit at <index> in A[] high (1)
*/
void setbit(uint64_t A[4], int index)
{

	// Set the bit at <index> to 1
	A[index / 64] |= 1ULL << (index % 64);

}

/*
	Set the bits at each value in A[] high (1)
*/
void setbits(uint64_t A[4], int index[], int len)
{

	int i;

	for( i = 0; i < len; i++)
		setbit(A, index[i]);
}

/*
	Set the bit at <index> in A[] low (0)
*/
void clearbit(uint64_t A[4], int index)
{

	// Set the bit at <index> to 0
	A[index / 64] &= ~(1ULL << (index % 64));

}

/*
	Set the bits at each value in A[] low (0)
*/
void clearbits(uint64_t A[4], int index[], int len)
{

	int i;

	for( i = 0; i < len; i++)
		clearbit(A, index[i]);
}


/*
	Read the bit at <index> in A[]
*/
int readbit(uint64_t A[4], int index)
{

	// Read the bit at index in A
	return ( (A[index / 64] & (1ULL << (index % 64) )) != 0);

}

/*
	Invert the first bit vector and return in the second
*/
void invertvector(uint64_t A[4], uint64_t B[4])
{
	int i;
	for( i=0; i < 4; i++)
		B[i] = ~ A[i];
}

/*
	Union first two bit vectors and return result in third
*/

void unionvectors(uint64_t A[4], uint64_t B[4], uint64_t C[4])
{
	int i;
	for( i=0; i < 4; i++ )
		C[i] = A[i] | B[i];

}

/*
	Intersect first two bit vectors and return result in third
*/

void intersectvectors(uint64_t A[4], uint64_t B[4], uint64_t C[4])
{
	int i;
	for( i=0; i < 4; i++ )
		C[i] = A[i] & B[i];

}

/*
	Print the set bits in the A[]
*/

void printvector(uint64_t A[4])
{

	printf("%016llx %016llx %016llx %016llx\n",A[3], A[2], A[1], A[0]);
	
	//int i;

	//printf("Bits set: ");
	/*for( i = 0; i < 64 * 4; i++)
		if(readbit(A, i))
			printf("%d ", i);
	printf("\n");
	*/
}
