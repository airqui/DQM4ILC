 /// \file AHCALRawModuleGlobal.h
/*
 *
 *-------------------------------------------------------------
 * AHCALRawModuleChannel.cc source template automatically modified from 
 * CaloHitModule  generated by a class generator
 * by A. Irles, DESY, 23 March 2016
 *--------------------------------------------------------------
 *
 * This file is part of DQM4HEP libraries.
 * 
 * DQM4HEP is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * based upon these libraries are permitted. Any copy of these libraries
 * must include this copyright notice.
 * 
 * DQM4HEP is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with DQM4HEP.  If not, see <http://www.gnu.org/licenses/>.
 * 
 * @author Remi Ete
 * @copyright CNRS , IPNL
 */

#ifndef Testbeam_H
#define Testbeam_H

#include "dqm4hep/DQMAnalysisModule.h"

namespace dqm4hep
{

class DQMMonitorElement;

/** Testbeam class
 */ 
class Testbeam : public DQMAnalysisModule
{
public:
	Testbeam();
	~Testbeam();

	StatusCode initModule();
	StatusCode readSettings(const TiXmlHandle xmlHandle);
	StatusCode processEvent(DQMEvent *pEvent);
	StatusCode startOfCycle();
	StatusCode endOfCycle();
	StatusCode startOfRun(DQMRun *pRun);
	StatusCode endOfRun(DQMRun *pRun);
	StatusCode endModule();

protected:

	// Temperature
        DQMMonitorElementPtr                        m_pTempAverage_1;
        DQMMonitorElementPtr                        m_pTempAverage_2;
        DQMMonitorElementPtr                        m_pTempAverage_3;
        DQMMonitorElementPtr                        m_pTempDIF_1;
        DQMMonitorElementPtr                        m_pTempDIF_2;
        DQMMonitorElementPtr                        m_pTempDIF_3;
        DQMMonitorElementPtr                        m_pTempPWR_1;
        DQMMonitorElementPtr                        m_pTempPWR_2;
        DQMMonitorElementPtr                        m_pTempPWR_3;
	// ADC hitmaps
        DQMMonitorElementPtr                        m_pADC_300;
        DQMMonitorElementPtr                        m_pADC_500;
	// 4 channels info, Layer1
        DQMMonitorElementPtr                        m_pADC_Layer1_1;
        DQMMonitorElementPtr                        m_pADC_Layer1_2;
        DQMMonitorElementPtr                        m_pADC_Layer1_3;
        DQMMonitorElementPtr                        m_pADC_Layer1_4;
        DQMMonitorElementPtr                        m_pTDC_Layer1_1;
        DQMMonitorElementPtr                        m_pTDC_Layer1_2;
        DQMMonitorElementPtr                        m_pTDC_Layer1_3;
        DQMMonitorElementPtr                        m_pTDC_Layer1_4;
	// 4 channels info, Layer2
        DQMMonitorElementPtr                        m_pADC_Layer2_1;
        DQMMonitorElementPtr                        m_pADC_Layer2_2;
        DQMMonitorElementPtr                        m_pADC_Layer2_3;
        DQMMonitorElementPtr                        m_pADC_Layer2_4;
        DQMMonitorElementPtr                        m_pTDC_Layer2_1;
        DQMMonitorElementPtr                        m_pTDC_Layer2_2;
        DQMMonitorElementPtr                        m_pTDC_Layer2_3;
        DQMMonitorElementPtr                        m_pTDC_Layer2_4;
	// 4 channels info, Layer3
        DQMMonitorElementPtr                        m_pADC_Layer3_1;
        DQMMonitorElementPtr                        m_pADC_Layer3_2;
        DQMMonitorElementPtr                        m_pADC_Layer3_3;
        DQMMonitorElementPtr                        m_pADC_Layer3_4;
        DQMMonitorElementPtr                        m_pTDC_Layer3_1;
        DQMMonitorElementPtr                        m_pTDC_Layer3_2;
        DQMMonitorElementPtr                        m_pTDC_Layer3_3;
        DQMMonitorElementPtr                        m_pTDC_Layer3_4;
 
	bool                                        m_dumpEvent;

	int                                       m_ChipIDLayer1;
	int                                       m_ChipIDLayer2;
	int                                       m_ChipIDLayer3;
        int                                       m_ChannelNum1;
        int                                       m_ChannelNum2;
        int                                       m_ChannelNum3;
        int                                       m_ChannelNum4;

        int                                       m_memcell;






}; 

} 

#endif  //  Testbeam_H
