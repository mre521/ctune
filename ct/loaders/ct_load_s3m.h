/*
   ct_load_s3m.h - definitions for S3M file loader
*/

#ifndef CT_LOAD_S3M_H
#define CT_LOAD_S3M_H

/* we store the loaded s3m into this structure */
#include "../ct_types.h"
#include "../ct_trackermodule.h"
#include "../ct_filecallback.h"

ctBoolean ct_load_s3m(char *pFileName, ctFileCallbacks *pCallbacks, ctTrackerModule *pModuleOut);

#endif /* CT_LOAD_S3M_H */
