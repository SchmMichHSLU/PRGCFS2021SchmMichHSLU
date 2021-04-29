#include <stdio.h>

#include "bitOps.h"

unsigned char data = 0xD3;

int main( void ) {
	
	setBitNInByte(&data, 2);
	setBitNInByte(&data, 3);
	setBitNInByte(&data, 5);
	printf("Setting Bit 2,3,5 from D3 (211) results in: %X (%d)\n", data, data);
	
	data = 0xD3;
	clearBitNInByte(&data, 4);
	clearBitNInByte(&data, 6);
	clearBitNInByte(&data, 7);
	printf("Setting Bit 4,6,7 from D3 (211) results in: %X (%d)\n", data, data);
	
	data = 0xD3;
	toggleBitNInByte(&data, 1);
	toggleBitNInByte(&data, 4);
	toggleBitNInByte(&data, 6);
	printf("Setting Bit 1,4,6 from D3 (211) results in: %X (%d)\n", data, data);
	
	data = 0xD3;
	for (int i = 0; i<8; i++){
		printf("%d\n", BitNIsSet(data, i));
	}
	return 0;
}

