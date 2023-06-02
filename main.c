#include <stdio.h>
#include <stdint.h>

int main()
{
	uint8_t a[] = { 0x83,0xF1,0x10,0x7F,0x02,0x12};
	//uint8_t a[] = { 0x83,0xF1,0x1A,0x7F,0x02,0x12};
	uint64_t sum = 0;
	for (int i = 0 ; i < sizeof(a); i++)
		sum = (sum + a[i]) % 256;
	printf("CheckSum8 Modulo 256 : %x\n",(uint8_t)sum);
}

