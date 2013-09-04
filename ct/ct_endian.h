/*
   ct_endian.h - endian helper macroes because
   no one can decide which is the best endianness.
*/

#ifndef CT_ENDIAN_H
#define CT_ENDIAN_H

/* Either LITTLE_ENDIAN or BIG_ENDIAN must
   be defined at compile time or errors will occur
   ( you can't build this library ).
*/

/* swapping helper macros for converting LE and BE to native */
/* exchange two bytes */
#define SWAP16(x) ((x>>8)&0x00FF) | ((x<<8)&0xFF00)
/* reverse three bytes (middle stays where it is) */
#define SWAP24(x) (x>>16)&0x0000FF) | (x&0x00FF00) | ((x<<16)&0xFF0000)
/* reverse four bytes */
#define SWAP32(x)

/* Macroes for little-endian systems */
#ifdef LITTLE_ENDIAN
   /* (U)INTXXLE - reads little-endian integer in native endian format */
   #define INT16LE(x)  (ctInt16)x
   #define UINT16LE(x) (ctInt16u)x
   #define INT24LE(x)  (ctInt24)x
   #define INT32LE(x)  (ctInt32)x
   #define UINT32LE(x) (ctInt32u)x
   /* (U)INTXXBE - reads big-endian integer in native endian format */
   #define INT16BE(x)  (ctInt16)SWAP16(x)
   #define UINT16BE(x) (ctInt16u)SWAP16(x)
   #define INT24BE(x)  (ctInt24)SWAP24(x)
   #define INT32BE(x)  (ctInt32)SWAP32(x)
   #define UINT32BE(x) (ctInt32u)SWAP32(x)

/* for big-endian systems */
#elif BIG_ENDIAN
   #define INT16LE(x)  (ctInt16)SWAP16(x)
   #define UINT16LE(x) (ctInt16u)SWAP16(x)
   #define INT24LE(x)  (ctInt24)SWAP24(x)
   #define INT32LE(x)  (ctInt32)SWAP32(x)
   #define UINT32LE(x) (ctInt32u)SWAP32(x)

   #define INT16BE(x)  (ctInt16)x
   #define UINT16BE(x) (ctInt16u)x
   #define INT24BE(x)  (ctInt24)x
   #define INT32BE(x)  (ctInt32)x
   #define UINT32BE(x) (ctInt32u)x
#else /* BIG_ENDIAN */
   #error You must either define LITTLE_ENDIAN or BIG_ENDIAN according to your hardware when compiling this software!
#endif /* LITTLE_ENDIAN */


#endif /* CT_ENDIAN_H */
