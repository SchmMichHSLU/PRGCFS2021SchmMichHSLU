/* system include */
#include <stdio.h>


/* project include */
#include "bitOps.h"

/* implementations */
void setBitNInByte( unsigned char* data, unsigned char bitN) {
	*data |= 1 << bitN;
}

void clearBitNInByte( unsigned char* data, unsigned char bitN) {
	*data &= ~(1 << bitN);
}

void toggleBitNInByte( unsigned char* data, unsigned char bitN) {
	*data ^= 1 << bitN;
}

unsigned char BitNIsSet(unsigned char data, unsigned char bitN ) {
	return (data >> bitN & 1);  
}
