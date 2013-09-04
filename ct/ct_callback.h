/*
   ct_callback.h - callback definition for events
*/

#ifndef CT_CALLBACK_H
#define CT_CALLBACK_H

/* data is a pointer to any kind of data which can change based on event context. */
typedef void (*ctCallbackEvent)(void* data);

#endif /* CT_CALLBACK_H */

