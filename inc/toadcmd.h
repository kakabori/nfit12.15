#ifndef GUARD_TOADCMD_H
#define GUARD_TOADCMD_H

#include "Para.h"
#include "modelcalculator.h"
#include "dataset.h"

int YF_DSfitting(ClientData clientData, Tcl_Interp *interp,int objc, Tcl_Obj *const objv[]);
int YF_nfitdata(ClientData clientData, Tcl_Interp *interp,int objc, Tcl_Obj *const objv[]);
int YF_fitdata(ClientData clientData, Tcl_Interp *interp,int objc, Tcl_Obj *const objv[]);
int YF_dataset(ClientData clientData, Tcl_Interp *interp,int objc, Tcl_Obj *const objv[]);
int YF_modelcc(ClientData clientData, Tcl_Interp *interp,int objc, Tcl_Obj *const objv[]);
int NK_qzrexport(ClientData clientData, Tcl_Interp *interp,int objc, Tcl_Obj *const objv[]);
void updatelinks(double chisq, char *chain);


/* structure to be used for dspacing calculation */
struct SetUp {
  double s;
  double x0;
  double alpha;
  double d;
  double R;
  double lambda;
  double pz;
  double delts;
  double refn;
} ;


struct UpdateStruct {
  double xisq;
  char *chain;
} ;


/* multi-threading utilities */
struct NfitThreadPars {
  int iter;
  Data *dp;
  ModelCalculator *mc;
  Para *p;
  FILE *fp;
};

#endif
