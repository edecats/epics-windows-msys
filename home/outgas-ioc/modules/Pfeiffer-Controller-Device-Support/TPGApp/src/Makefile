TOP=../..

include $(TOP)/configure/CONFIG
#===========================
# Build the IOC application

PROD_IOC = TPG
# TPG.dbd will be created and installed
DBD += TPG.dbd

# TPG.dbd will be made up from these files:
TPG_DBD += base.dbd
TPG_DBD += tpg.dbd
TPG_DBD += stream.dbd
TPG_DBD += asyn.dbd

# Add all the support libraries needed by this IOC
TPG_LIBS += stream
TPG_LIBS += asyn


TPG_SRCS += TPG_registerRecordDeviceDriver.cpp

TPG_SRCS_DEFAULT += TPGMain.cpp
TPG_SRCS_vxWorks += -nil-

TPG_LIBS += $(EPICS_BASE_IOC_LIBS)

#===========================

include $(TOP)/configure/RULES
