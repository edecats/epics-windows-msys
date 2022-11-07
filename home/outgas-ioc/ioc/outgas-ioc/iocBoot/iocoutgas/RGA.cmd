## Open Asyn port to ICA
drvAsynIPPortConfigure ("$(PORT)", "$(ADDR)")

## Load record instances
dbLoadRecords ("$(RGA)/db/rga.db", "DEVICE=$(DEVICE), PORT=$(PORT), SCAN_FAST=$(SCAN_FAST), SCAN_SLOW=$(SCAN_SLOW)")

