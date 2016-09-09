#include <stdint.h>

void setbit(uint64_t A[], int index);
void setbits(uint64_t A[4], int index[], int len);

void clearbit(uint64_t A[], int index);
void clearbits(uint64_t A[4], int index[], int len);

int readbit(uint64_t A[], int index);

void invertvector(uint64_t A[4], uint64_t B[4]);
void unionvectors(uint64_t A[4], uint64_t B[4], uint64_t C[4]);
void intersectvectors(uint64_t A[4], uint64_t B[4], uint64_t C[4]);

void printvector(uint64_t A[4]);