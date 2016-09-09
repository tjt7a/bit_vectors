CC = clang

test: bit_vector.c test_bit_vector.c
		$(CC) -o test bit_vector.c test_bit_vector.c

clean:
		rm -f *.o test