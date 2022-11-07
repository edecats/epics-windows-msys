#!../../bin/linux-x86_64/outgas

#- You may have to change outgas to something else
#- everywhere it appears in this file

< envPaths

## Register all support components
dbLoadDatabase "${TOP}/dbd/outgas.dbd"
outgas_registerRecordDeviceDriver pdbbase

############################################################
# Stream configuration
############################################################
epicsEnvSet("STREAM_PROTOCOL_PATH", "${RGA}/protocols")

############################################################
# Spellman ICA devices
############################################################

############################################################
# Spellman ICA - GUN1
############################################################
epicsEnvSet("DEVICE", "GUN1")
epicsEnvSet("ADDR", "192.168.1.199:50001")
epicsEnvSet("PORT", "$(DEVICE)_P")
epicsEnvSet("SCAN_SLOW", "10 second")
epicsEnvSet("SCAN_FAST", "1 second")
< RGA.cmd

############################################################
# Stream configuration
############################################################
epicsEnvSet("STREAM_PROTOCOL_PATH", "${TPG}/protocols")

############################################################
# Pfeiffer devices
############################################################

############################################################
# Pfeiffer Controller 
############################################################
#epicsEnvSet("DEVICE", "GUN1")
#epicsEnvSet("ADDR", "192.168.1.199:50001")
#epicsEnvSet("PORT", "$(DEVICE)_P")
#epicsEnvSet("SCAN_SLOW", "10 second")
#epicsEnvSet("SCAN_FAST", "1 second")
#< TPG.cmd

#asynSetTraceMask($(PORT), -1, 0x5) ## ASYN_TRACE_ERROR (0x0001) | ASYN_TRACEIO_FILTER (0x0004) 
#asynSetTraceInfoMask($(PORT), -1, 0x7) ## ASYN_TRACEINFO_TIME | ASYN_TRACEINFO_PORT | ASYN_TRACEINFO_SOURCE

iocInit
