#!../../bin/windows-x64-mingw/TPG

< envPaths

cd "${TOP}"

## Register all support components
dbLoadDatabase "dbd/TPG.dbd"
TPG_registerRecordDeviceDriver pdbbase

####################
# Variables
####################
epicsEnvSet "STREAM_PROTOCOL_PATH" "${TOP}/protocols/"


####################
# First instance
####################
## Connection and database configuration env. variables
epicsEnvSet("ASYNPORT",  "asyn_tpg")
epicsEnvSet("ADDR", "/dev/ttyUSB0")
epicsEnvSet("DEVICE", "tpg")
epicsEnvSet("SCAN_SLOW", "1 second")
epicsEnvSet("SCAN_FAST", ".1 second")

## Open Asyn port to TPG
drvAsynSerialPortConfigure("$(ASYNPORT)", "$(ADDR)")


## Load record instances
dbLoadRecords ("db/tpg.db", "DEVICE=$(DEVICE), PORT=$(ASYNPORT), SCAN_FAST=$(SCAN_FAST), SCAN_SLOW=$(SCAN_SLOW)")

cd "${TOP}/iocBoot/${IOC}"
iocInit
