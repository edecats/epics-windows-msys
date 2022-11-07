TOP=../..

include $(TOP)/configure/CONFIG
#===========================
# Build the IOC application

PROD_IOC = RGA
# rga.dbd will be created and installed
DBD += rga.dbd

# RGA.dbd will be made up from these files:
RGA_DBD += base.dbd
RGA_DBD += rga.dbd
RGA_DBD += stream.dbd
RGA_DBD += asyn.dbd

# Add all the support libraries needed by this IOC
RGA_LIBS += stream
RGA_LIBS += asyn


RGA_SRCS += RGA_registerRecordDeviceDriver.cpp

RGA_SRCS_DEFAULT += RGAMain.cpp
RGA_SRCS_vxWorks += -nil-

RGA_LIBS += $(EPICS_BASE_IOC_LIBS)

#===========================

include $(TOP)/configure/RULES
