/* ioRecord.h generated from ioRecord.dbd */

#ifndef INC_ioRecord_H
#define INC_ioRecord_H

#include "epicsTypes.h"
#include "link.h"
#include "epicsMutex.h"
#include "ellLib.h"
#include "devSup.h"
#include "epicsTime.h"

typedef struct ioRecord {
    char                name[61];   /* Record Name */
    char                desc[41];   /* Descriptor */
    char                asg[29];    /* Access Security Group */
    epicsEnum16         scan;       /* Scan Mechanism */
    epicsEnum16         pini;       /* Process at iocInit */
    epicsInt16          phas;       /* Scan Phase */
    char                evnt[40];   /* Event Name */
    epicsInt16          tse;        /* Time Stamp Event */
    DBLINK              tsel;       /* Time Stamp Link */
    epicsEnum16         dtyp;       /* Device Type */
    epicsInt16          disv;       /* Disable Value */
    epicsInt16          disa;       /* Disable */
    DBLINK              sdis;       /* Scanning Disable */
    epicsMutexId        mlok;       /* Monitor lock */
    ELLLIST             mlis;       /* Monitor List */
    ELLLIST             bklnk;      /* Backwards link tracking */
    epicsUInt8          disp;       /* Disable putField */
    epicsUInt8          proc;       /* Force Processing */
    epicsEnum16         stat;       /* Alarm Status */
    epicsEnum16         sevr;       /* Alarm Severity */
    epicsEnum16         nsta;       /* New Alarm Status */
    epicsEnum16         nsev;       /* New Alarm Severity */
    epicsEnum16         acks;       /* Alarm Ack Severity */
    epicsEnum16         ackt;       /* Alarm Ack Transient */
    epicsEnum16         diss;       /* Disable Alarm Sevrty */
    epicsUInt8          lcnt;       /* Lock Count */
    epicsUInt8          pact;       /* Record active */
    epicsUInt8          putf;       /* dbPutField process */
    epicsUInt8          rpro;       /* Reprocess  */
    struct asgMember    *asp;       /* Access Security Pvt */
    struct processNotify *ppn;      /* pprocessNotify */
    struct processNotifyRecord *ppnr; /* pprocessNotifyRecord */
    struct scan_element *spvt;      /* Scan Private */
    struct typed_rset   *rset;      /* Address of RSET */
    unambiguous_dset    *dset;      /* DSET address */
    void                *dpvt;      /* Device Private */
    struct dbRecordType *rdes;      /* Address of dbRecordType */
    struct lockRecord   *lset;      /* Lock Set */
    epicsEnum16         prio;       /* Scheduling Priority */
    epicsUInt8          tpro;       /* Trace Processing */
    epicsUInt8          bkpt;       /* Break Point */
    epicsUInt8          udf;        /* Undefined */
    epicsEnum16         udfs;       /* Undefined Alarm Sevrty */
    epicsTimeStamp      time;       /* Time */
    DBLINK              flnk;       /* Forward Process Link */
    epicsInt32          val;        /* Value */
    DBLINK              input;      /* Input Link */
    DBLINK              output;     /* Output Link */
} ioRecord;

typedef enum {
	ioRecordNAME = 0,
	ioRecordDESC = 1,
	ioRecordASG = 2,
	ioRecordSCAN = 3,
	ioRecordPINI = 4,
	ioRecordPHAS = 5,
	ioRecordEVNT = 6,
	ioRecordTSE = 7,
	ioRecordTSEL = 8,
	ioRecordDTYP = 9,
	ioRecordDISV = 10,
	ioRecordDISA = 11,
	ioRecordSDIS = 12,
	ioRecordMLOK = 13,
	ioRecordMLIS = 14,
	ioRecordBKLNK = 15,
	ioRecordDISP = 16,
	ioRecordPROC = 17,
	ioRecordSTAT = 18,
	ioRecordSEVR = 19,
	ioRecordNSTA = 20,
	ioRecordNSEV = 21,
	ioRecordACKS = 22,
	ioRecordACKT = 23,
	ioRecordDISS = 24,
	ioRecordLCNT = 25,
	ioRecordPACT = 26,
	ioRecordPUTF = 27,
	ioRecordRPRO = 28,
	ioRecordASP = 29,
	ioRecordPPN = 30,
	ioRecordPPNR = 31,
	ioRecordSPVT = 32,
	ioRecordRSET = 33,
	ioRecordDSET = 34,
	ioRecordDPVT = 35,
	ioRecordRDES = 36,
	ioRecordLSET = 37,
	ioRecordPRIO = 38,
	ioRecordTPRO = 39,
	ioRecordBKPT = 40,
	ioRecordUDF = 41,
	ioRecordUDFS = 42,
	ioRecordTIME = 43,
	ioRecordFLNK = 44,
	ioRecordVAL = 45,
	ioRecordINPUT = 46,
	ioRecordOUTPUT = 47
} ioFieldIndex;

#ifdef GEN_SIZE_OFFSET

#include <epicsAssert.h>
#include <epicsExport.h>
#ifdef __cplusplus
extern "C" {
#endif
static int ioRecordSizeOffset(dbRecordType *prt)
{
    ioRecord *prec = 0;

    assert(prt->no_fields == 48);
    prt->papFldDes[ioRecordNAME]->size = sizeof(prec->name);
    prt->papFldDes[ioRecordDESC]->size = sizeof(prec->desc);
    prt->papFldDes[ioRecordASG]->size = sizeof(prec->asg);
    prt->papFldDes[ioRecordSCAN]->size = sizeof(prec->scan);
    prt->papFldDes[ioRecordPINI]->size = sizeof(prec->pini);
    prt->papFldDes[ioRecordPHAS]->size = sizeof(prec->phas);
    prt->papFldDes[ioRecordEVNT]->size = sizeof(prec->evnt);
    prt->papFldDes[ioRecordTSE]->size = sizeof(prec->tse);
    prt->papFldDes[ioRecordTSEL]->size = sizeof(prec->tsel);
    prt->papFldDes[ioRecordDTYP]->size = sizeof(prec->dtyp);
    prt->papFldDes[ioRecordDISV]->size = sizeof(prec->disv);
    prt->papFldDes[ioRecordDISA]->size = sizeof(prec->disa);
    prt->papFldDes[ioRecordSDIS]->size = sizeof(prec->sdis);
    prt->papFldDes[ioRecordMLOK]->size = sizeof(prec->mlok);
    prt->papFldDes[ioRecordMLIS]->size = sizeof(prec->mlis);
    prt->papFldDes[ioRecordBKLNK]->size = sizeof(prec->bklnk);
    prt->papFldDes[ioRecordDISP]->size = sizeof(prec->disp);
    prt->papFldDes[ioRecordPROC]->size = sizeof(prec->proc);
    prt->papFldDes[ioRecordSTAT]->size = sizeof(prec->stat);
    prt->papFldDes[ioRecordSEVR]->size = sizeof(prec->sevr);
    prt->papFldDes[ioRecordNSTA]->size = sizeof(prec->nsta);
    prt->papFldDes[ioRecordNSEV]->size = sizeof(prec->nsev);
    prt->papFldDes[ioRecordACKS]->size = sizeof(prec->acks);
    prt->papFldDes[ioRecordACKT]->size = sizeof(prec->ackt);
    prt->papFldDes[ioRecordDISS]->size = sizeof(prec->diss);
    prt->papFldDes[ioRecordLCNT]->size = sizeof(prec->lcnt);
    prt->papFldDes[ioRecordPACT]->size = sizeof(prec->pact);
    prt->papFldDes[ioRecordPUTF]->size = sizeof(prec->putf);
    prt->papFldDes[ioRecordRPRO]->size = sizeof(prec->rpro);
    prt->papFldDes[ioRecordASP]->size = sizeof(prec->asp);
    prt->papFldDes[ioRecordPPN]->size = sizeof(prec->ppn);
    prt->papFldDes[ioRecordPPNR]->size = sizeof(prec->ppnr);
    prt->papFldDes[ioRecordSPVT]->size = sizeof(prec->spvt);
    prt->papFldDes[ioRecordRSET]->size = sizeof(prec->rset);
    prt->papFldDes[ioRecordDSET]->size = sizeof(prec->dset);
    prt->papFldDes[ioRecordDPVT]->size = sizeof(prec->dpvt);
    prt->papFldDes[ioRecordRDES]->size = sizeof(prec->rdes);
    prt->papFldDes[ioRecordLSET]->size = sizeof(prec->lset);
    prt->papFldDes[ioRecordPRIO]->size = sizeof(prec->prio);
    prt->papFldDes[ioRecordTPRO]->size = sizeof(prec->tpro);
    prt->papFldDes[ioRecordBKPT]->size = sizeof(prec->bkpt);
    prt->papFldDes[ioRecordUDF]->size = sizeof(prec->udf);
    prt->papFldDes[ioRecordUDFS]->size = sizeof(prec->udfs);
    prt->papFldDes[ioRecordTIME]->size = sizeof(prec->time);
    prt->papFldDes[ioRecordFLNK]->size = sizeof(prec->flnk);
    prt->papFldDes[ioRecordVAL]->size = sizeof(prec->val);
    prt->papFldDes[ioRecordINPUT]->size = sizeof(prec->input);
    prt->papFldDes[ioRecordOUTPUT]->size = sizeof(prec->output);
    prt->papFldDes[ioRecordNAME]->offset = (unsigned short)((char *)&prec->name - (char *)prec);
    prt->papFldDes[ioRecordDESC]->offset = (unsigned short)((char *)&prec->desc - (char *)prec);
    prt->papFldDes[ioRecordASG]->offset = (unsigned short)((char *)&prec->asg - (char *)prec);
    prt->papFldDes[ioRecordSCAN]->offset = (unsigned short)((char *)&prec->scan - (char *)prec);
    prt->papFldDes[ioRecordPINI]->offset = (unsigned short)((char *)&prec->pini - (char *)prec);
    prt->papFldDes[ioRecordPHAS]->offset = (unsigned short)((char *)&prec->phas - (char *)prec);
    prt->papFldDes[ioRecordEVNT]->offset = (unsigned short)((char *)&prec->evnt - (char *)prec);
    prt->papFldDes[ioRecordTSE]->offset = (unsigned short)((char *)&prec->tse - (char *)prec);
    prt->papFldDes[ioRecordTSEL]->offset = (unsigned short)((char *)&prec->tsel - (char *)prec);
    prt->papFldDes[ioRecordDTYP]->offset = (unsigned short)((char *)&prec->dtyp - (char *)prec);
    prt->papFldDes[ioRecordDISV]->offset = (unsigned short)((char *)&prec->disv - (char *)prec);
    prt->papFldDes[ioRecordDISA]->offset = (unsigned short)((char *)&prec->disa - (char *)prec);
    prt->papFldDes[ioRecordSDIS]->offset = (unsigned short)((char *)&prec->sdis - (char *)prec);
    prt->papFldDes[ioRecordMLOK]->offset = (unsigned short)((char *)&prec->mlok - (char *)prec);
    prt->papFldDes[ioRecordMLIS]->offset = (unsigned short)((char *)&prec->mlis - (char *)prec);
    prt->papFldDes[ioRecordBKLNK]->offset = (unsigned short)((char *)&prec->bklnk - (char *)prec);
    prt->papFldDes[ioRecordDISP]->offset = (unsigned short)((char *)&prec->disp - (char *)prec);
    prt->papFldDes[ioRecordPROC]->offset = (unsigned short)((char *)&prec->proc - (char *)prec);
    prt->papFldDes[ioRecordSTAT]->offset = (unsigned short)((char *)&prec->stat - (char *)prec);
    prt->papFldDes[ioRecordSEVR]->offset = (unsigned short)((char *)&prec->sevr - (char *)prec);
    prt->papFldDes[ioRecordNSTA]->offset = (unsigned short)((char *)&prec->nsta - (char *)prec);
    prt->papFldDes[ioRecordNSEV]->offset = (unsigned short)((char *)&prec->nsev - (char *)prec);
    prt->papFldDes[ioRecordACKS]->offset = (unsigned short)((char *)&prec->acks - (char *)prec);
    prt->papFldDes[ioRecordACKT]->offset = (unsigned short)((char *)&prec->ackt - (char *)prec);
    prt->papFldDes[ioRecordDISS]->offset = (unsigned short)((char *)&prec->diss - (char *)prec);
    prt->papFldDes[ioRecordLCNT]->offset = (unsigned short)((char *)&prec->lcnt - (char *)prec);
    prt->papFldDes[ioRecordPACT]->offset = (unsigned short)((char *)&prec->pact - (char *)prec);
    prt->papFldDes[ioRecordPUTF]->offset = (unsigned short)((char *)&prec->putf - (char *)prec);
    prt->papFldDes[ioRecordRPRO]->offset = (unsigned short)((char *)&prec->rpro - (char *)prec);
    prt->papFldDes[ioRecordASP]->offset = (unsigned short)((char *)&prec->asp - (char *)prec);
    prt->papFldDes[ioRecordPPN]->offset = (unsigned short)((char *)&prec->ppn - (char *)prec);
    prt->papFldDes[ioRecordPPNR]->offset = (unsigned short)((char *)&prec->ppnr - (char *)prec);
    prt->papFldDes[ioRecordSPVT]->offset = (unsigned short)((char *)&prec->spvt - (char *)prec);
    prt->papFldDes[ioRecordRSET]->offset = (unsigned short)((char *)&prec->rset - (char *)prec);
    prt->papFldDes[ioRecordDSET]->offset = (unsigned short)((char *)&prec->dset - (char *)prec);
    prt->papFldDes[ioRecordDPVT]->offset = (unsigned short)((char *)&prec->dpvt - (char *)prec);
    prt->papFldDes[ioRecordRDES]->offset = (unsigned short)((char *)&prec->rdes - (char *)prec);
    prt->papFldDes[ioRecordLSET]->offset = (unsigned short)((char *)&prec->lset - (char *)prec);
    prt->papFldDes[ioRecordPRIO]->offset = (unsigned short)((char *)&prec->prio - (char *)prec);
    prt->papFldDes[ioRecordTPRO]->offset = (unsigned short)((char *)&prec->tpro - (char *)prec);
    prt->papFldDes[ioRecordBKPT]->offset = (unsigned short)((char *)&prec->bkpt - (char *)prec);
    prt->papFldDes[ioRecordUDF]->offset = (unsigned short)((char *)&prec->udf - (char *)prec);
    prt->papFldDes[ioRecordUDFS]->offset = (unsigned short)((char *)&prec->udfs - (char *)prec);
    prt->papFldDes[ioRecordTIME]->offset = (unsigned short)((char *)&prec->time - (char *)prec);
    prt->papFldDes[ioRecordFLNK]->offset = (unsigned short)((char *)&prec->flnk - (char *)prec);
    prt->papFldDes[ioRecordVAL]->offset = (unsigned short)((char *)&prec->val - (char *)prec);
    prt->papFldDes[ioRecordINPUT]->offset = (unsigned short)((char *)&prec->input - (char *)prec);
    prt->papFldDes[ioRecordOUTPUT]->offset = (unsigned short)((char *)&prec->output - (char *)prec);
    prt->rec_size = sizeof(*prec);
    return 0;
}
epicsExportRegistrar(ioRecordSizeOffset);

#ifdef __cplusplus
}
#endif
#endif /* GEN_SIZE_OFFSET */

#endif /* INC_ioRecord_H */
