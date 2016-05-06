#######################################################
# cmake file for building DQM4ILC examples
# @author Eté Rémi , IPNL
# modifuied by A. Irles DESY
# Copyright (c) CNRS / IPNL
#######################################################


ADD_SHARED_LIBRARY( CaloHitModule CaloHitModule/CaloHitModule.cc )
ADD_SHARED_LIBRARY( AHCALRawModuleChannel AHCALRawModule/AHCALRawModuleChannel.cc )
#ADD_SHARED_LIBRARY( AHCALRawModuleGlobal AHCALRawModule/AHCALRawModuleGlobal.cc )
ADD_SHARED_LIBRARY( AHCALRawModuleT0 AHCALRawModule/T0/AHCALRawModuleT0.cc )

TARGET_LINK_LIBRARIES( CaloHitModule ${PROJECT_NAME} )
TARGET_LINK_LIBRARIES( AHCALRawModuleChannel ${PROJECT_NAME} )
#TARGET_LINK_LIBRARIES( AHCALRawModuleGlobal ${PROJECT_NAME} )
TARGET_LINK_LIBRARIES( AHCALRawModuleT0 ${PROJECT_NAME} )

INSTALL( 
	TARGETS CaloHitModule AHCALRawModuleChannel AHCALRawModuleT0 #AHCALRawModuleGlobal
	LIBRARY DESTINATION  lib 
)


