/* THIS IS A GENERATED FILE. DO NOT EDIT! */
/* Generated from ../O.Common/linkTest.dbd */

#include <string.h>
#ifndef USE_TYPED_RSET
#  define USE_TYPED_RSET
#endif
#include "compilerDependencies.h"
#include "epicsStdlib.h"
#include "iocsh.h"
#include "iocshRegisterCommon.h"
#include "registryCommon.h"
#include "recSup.h"

extern "C" {

epicsShareExtern typed_rset *pvar_rset_ioRSET;

typedef int (*rso_func)(dbRecordType *pdbRecordType);
epicsShareExtern rso_func pvar_func_ioRecordSizeOffset;

static const char * const recordTypeNames[] = {
    "io"
};

static const recordTypeLocation rtl[] = {
    {(struct typed_rset *)pvar_rset_ioRSET, pvar_func_ioRecordSizeOffset}
};

epicsShareExtern jlif *pvar_jlif_lnkCalcIf, *pvar_jlif_lnkConstIf,
    *pvar_jlif_lnkDebugIf, *pvar_jlif_lnkStateIf, *pvar_jlif_lnkTraceIf;

static struct jlif *jlifsl[] = {
    pvar_jlif_lnkCalcIf,
    pvar_jlif_lnkConstIf,
    pvar_jlif_lnkDebugIf,
    pvar_jlif_lnkStateIf,
    pvar_jlif_lnkTraceIf};

epicsShareExtern int * const pvar_int_lnkDebug_debug;

static struct iocshVarDef vardefs[] = {
    {"lnkDebug_debug", iocshArgInt, pvar_int_lnkDebug_debug},
    {NULL, iocshArgInt, NULL}
};

int linkTest_registerRecordDeviceDriver(DBBASE *pbase)
{
    static int executed = 0;
    const char *bldTop = "/home/Eloise/base-R7.0.4.1";
    const char *envTop = getenv("TOP");

    if (envTop && strcmp(envTop, bldTop)) {
        printf("Warning: IOC is booting with TOP = \"%s\"\n"
               "          but was built with TOP = \"%s\"\n",
               envTop, bldTop);
    }

    if (!pbase) {
        printf("pdbbase is NULL; you must load a DBD file first.\n");
        return -1;
    }

    if (executed) {
        printf("Warning: Registration already done.\n");
    }
    executed = 1;

    registerRecordTypes(pbase, NELEMENTS(rtl), recordTypeNames, rtl);
    registerJLinks(pbase, NELEMENTS(jlifsl), jlifsl);
    iocshRegisterVariable(vardefs);
    return 0;
}

/* linkTest_registerRecordDeviceDriver */
static const iocshArg rrddArg0 = {"pdbbase", iocshArgPdbbase};
static const iocshArg *rrddArgs[] = {&rrddArg0};
static const iocshFuncDef rrddFuncDef =
    {"linkTest_registerRecordDeviceDriver", 1, rrddArgs};
static void rrddCallFunc(const iocshArgBuf *)
{
    iocshSetError(linkTest_registerRecordDeviceDriver(*iocshPpdbbase));
}

} // extern "C"

/*
 * Register commands on application startup
 */
static int Registration() {
    iocshRegisterCommon();
    iocshRegister(&rrddFuncDef, rrddCallFunc);
    return 0;
}

static int done EPICS_UNUSED = Registration();
