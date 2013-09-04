/*
   ct_filecallback.h - callback definitions for file i/o abstraction
*/

#ifndef CT_FILECALLBACK_H
#define CT_FILECALLBACK_H
#include "ct_types.h"

/* 
   some way to keep track of open files.
   could actually be a pointer to memory
   or a system file handle or anything really.
*/
typedef void* ctFileHandle;

/* if a ctFileHandle has this value it is invalid */
#define INVALID_FILEHANDLE (ctFileHandle)0

/*
   opens a file by its system filename or some
   sort of identifier. Caller must set
   writeAccessRequired to ctTrue if they require
   write access to the file. Returns INVALID_FILEHANDLE
   if it fails.
*/
typedef ctFileHandle (*ctFileOpenCallback)(char* fileNameOrIdentifier, ctBoolean writeAccessRequired);

/*
   closes an open ctFileHandle, assuming it is valid.
*/
typedef void (*ctFileCloseCallback)(ctFileHandle openFile);

#endif /* CT_FILECALLBACK_H */

