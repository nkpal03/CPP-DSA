// C++ program to count set bits by pre-storing

#include <bits/stdc++.h>
using namespace std;

int num_to_bits[16] = { 0, 1, 1, 2, 1, 2, 2, 3,1, 2, 2, 3, 2, 3, 3, 4 };

unsigned int countSetBitsRec(unsigned int num)
{
	int nibble = 0;
	if (0 == num)
		return num_to_bits[0];

	// Find last nibble
	nibble = num & 0xf;		

	// remaining nibbles.
	return num_to_bits[nibble] + countSetBitsRec(num >> 4);
}

int main()
{
	int num = 31;
	cout << countSetBitsRec(num);
	return 0;
}

