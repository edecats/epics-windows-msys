TOP=../..

include $(TOP)/configure/CONFIG
#----------------------------------------
#  ADD MACRO DEFINITIONS AFTER THIS LINE
#=============================

#=============================
# Build the IOC application

PROD_IOC = outgas
# outgas.dbd will be created and installed
DBD += outgas.dbd

# outgas.dbd will be made up from these files:
outgas_DBD += base.dbd
#outgas_DBD += registrars.dbd

# Include dbd files from all support applications:
outgas_DBD += asyn.dbd
outgas_DBD += stream.dbd

# Add all the support libraries needed by this IOC
outgas_LIBS += asyn
outgas_LIBS += stream

# outgas_registerRecordDeviceDriver.cpp derives from outgas.dbd
outgas_SRCS += outgas_registerRecordDeviceDriver.cpp

# Build the main IOC entry point on workstation OSs.
outgas_SRCS_DEFAULT += outgasMain.cpp
outgas_SRCS_vxWorks += -nil-

# Add support from base/src/vxWorks if needed
#outgas_OBJS_vxWorks += $(EPICS_BASE_BIN)/vxComLibrary

# Finally link to the EPICS Base libraries
outgas_LIBS += $(EPICS_BASE_IOC_LIBS)

#===========================

include $(TOP)/configure/RULES
#----------------------------------------
#  ADD RULES AFTER THIS LINE

