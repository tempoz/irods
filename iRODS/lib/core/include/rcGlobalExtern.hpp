/*** Copyright (c), The Regents of the University of California            ***
 *** For more information please refer to files in the COPYRIGHT directory ***/
/* rcGlobalExtern.h - Extern global declaration for client API */

#ifndef RC_GLOBAL_EXTERN_HPP
#define RC_GLOBAL_EXTERN_HPP

#include "rods.hpp"
#include "packStruct.hpp"
#include "apiHandler.hpp"
#include "objInfo.hpp"
#include "msParam.hpp"
#include "irodsGuiProgressCallback.hpp"

extern packConstantArray_t PackConstantTable[];
extern packInstructArray_t RodsPackTable[];
extern int ProcessType;
extern packInstructArray_t ApiPackTable[];
extern packType_t packTypeTable[];
extern int NumOfPackTypes;
extern apidef_t RcApiTable[];
extern int NumOfApi;
extern char *dataObjCond[];
extern char *compareOperator[];
extern char *rescCond[];
extern char *userCond[];
extern char *collCond[];
extern int NumRescTypeDef;
// JMC - legacy resource - extern rescClass_t RescClass[];
// JMC - legacy resource - extern int NumRescClass;
extern structFileTypeDef_t StructFileTypeDef[];
extern int NumStructFileType;
extern validKeyWd_t DataObjInpKeyWd[];
extern int NumDataObjInpKeyWd;
extern validKeyWd_t CollInpKeyWd[];
extern int NumCollInpKeyWd;
extern validKeyWd_t StructFileExtAndRegInpKeyWd[];
extern int NumStructFileExtAndRegInpKeyWd;
extern struct timeval SysTimingVal;

#ifdef  __cplusplus
extern "C" {
#endif

    extern irodsGuiProgressCallbak gGuiProgressCB;

#ifdef  __cplusplus
}
#endif


#endif	/* RC_GLOBAL_EXTERN_H */
