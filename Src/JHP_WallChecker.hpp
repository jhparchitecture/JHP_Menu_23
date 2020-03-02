#ifndef JHPTESTDIALOG_HPP
#define JHPTESTDIALOG_HPP

#include	"DGModule.hpp"


short DGCALLBACK WallCheckerDialogCallback(short message, short dialId, short item, DGUserData, DGMessageData);

short DGCALLBACK WallCheckerSetupDialogCallback(short message, short dialId, short item, DGUserData, DGMessageData);

GSErrCode JHP_WallChecker_ImportRules(void);

bool JHP_WallChecker_PropertiesInitialized(void);

GSErrCode JHP_WallChecker_SetProperties(API_Elem_Head* elemHead); //set properties on wall for angle and length

#endif