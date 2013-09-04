/*
   ct_types.h - main type definitions for ctune
*/

#ifndef CT_TYPES_H
#define CT_TYPES_H

#include <stdint.h>

typedef uint8_t ctByte;

/* 8-bit integer types */
typedef uint8_t ctInt8u;
typedef int8_t  ctInt8;

/* 16-bit integer types */
typedef uint16_t ctInt16u;
typedef int16_t  ctInt16;

/* 24-bit "integer" type */
typedef struct _int24
{
   union
   {
      ctByte bits[3];
      struct
      {
         ctInt16u low16;
         ctInt8u hi8;
      };
   };
} ctInt24u;

/* 32-bit integer types */
typedef uint32_t ctInt32u;
typedef int32_t  ctInt32;

/* boolean type that C is lacking */
typedef enum booleantype
{
   ctFalse,
   ctTrue
} ctBoolean;


#endif /* CT_TYPES_H */
