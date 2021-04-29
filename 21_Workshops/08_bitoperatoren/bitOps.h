#ifndef _BITOPS_H_
#define _BITOPS_H_

void setBitNInByte( unsigned char* data, unsigned char bitN );

void clearBitNInByte( unsigned char* data, unsigned char bitN );

void toggleBitNInByte( unsigned char* data, unsigned char bitN );

unsigned char BitNIsSet(unsigned char data, unsigned char bitN );


#endif
