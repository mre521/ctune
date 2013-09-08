/*
   ct_genericloader.h - definition for the callback type of a generic loader
*/

#ifndef CT_GENERICLOADER_H
#define CT_GENERICLOADER_H

#include "../ct_types.h"
#include "../ct_filecallback.h"
#include "../ct_trackermodule.h"

typedef ctBoolean (*ctGenericLoader)(char *file, ctFileCallbacks *pCallbacks, ctTrackerModule *pModuleOut);

#endif /* CT_GENERICLOADER_H */

