#!../../bin/windows-x64-mingw/RGA

< envPaths

cd "${TOP}"

## Register all support components
dbLoadDatabase "dbd/RGA.dbd"
RGA_registerRecordDeviceDriver pdbbase

####################
# Variables
####################
epicsEnvSet "STREAM_PROTOCOL_PATH" "${TOP}/protocols/"


####################
# First instance
####################
## Connection and database configuration env. variables
epicsEnvSet("ASYNPORT",  "asyn_rga")
epicsEnvSet("ADDR", "COM3")
epicsEnvSet("DEVICE", "rga")
epicsEnvSet("SCAN_SLOW", "10 second")
epicsEnvSet("SCAN_FAST", "1 second")

## Open Asyn port to RGA
drvAsynSerialPortConfigure ("$(ASYNPORT)", "$(ADDR)")
asynSetOption("$(ASYNPORT)",0, "baud", 28800)

#asynSetTraceMask("$(ASYNPORT)", 0, 255)
## Load record instances
dbLoadRecords ("db/rga.db", "DEVICE=$(DEVICE), PORT=$(ASYNPORT), SCAN_FAST=$(SCAN_FAST), SCAN_SLOW=$(SCAN_SLOW)")

cd "${TOP}/iocBoot/${IOC}"
iocInit
