  /// \file CaloHitModule.h
/*
 *
 * CaloHitModule.h header template automatically generated by a class generator
 * Creation date : sam. nov. 1 2014
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

#ifndef CALOHITMODULE_H
#define CALOHITMODULE_H

#include "dqm4hep/DQMAnalysisModule.h"

namespace dqm4hep
{

class DQMMonitorElement;

/** CaloHitModule class
 */ 
class CaloHitModule : public DQMAnalysisModule
{
public:
	CaloHitModule();
	~CaloHitModule();

	StatusCode initModule();
	StatusCode readSettings(const TiXmlHandle xmlHandle);
	StatusCode processEvent(DQMEvent *pEvent);
	StatusCode startOfCycle();
	StatusCode endOfCycle();
	StatusCode startOfRun(DQMRun *pRun);
	StatusCode endOfRun(DQMRun *pRun);
	StatusCode endModule();

protected:
	DQMMonitorElementPtr                        m_pHitsEnergyElement;
	DQMMonitorElementPtr                        m_pNHitElement;
	DQMMonitorElementPtr                        m_pXZProfileElement;
	DQMMonitorElementPtr                        m_pYZProfileElement;
	DQMMonitorElementPtr                        m_pXYProfileElement;
	DQMMonitorElementPtr                        m_pLayerProfileElement;
	DQMMonitorElementPtr                        m_pTimeElement;
	DQMMonitorElementPtr                        m_pLastXZProfileElement;
	DQMMonitorElementPtr                        m_pLastYZProfileElement;
	DQMMonitorElementPtr                        m_pLastXYProfileElement;

	bool                                        m_dumpEvent;
};

} 

#endif  //  CALOHITMODULE_H
