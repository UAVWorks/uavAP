//
// Created by seedship on 1/30/21.
//

#ifndef UAVAP_PITCHSTATESPACECONTROLLER_H
#define UAVAP_PITCHSTATESPACECONTROLLER_H

#include <cpsCore/cps_object>
#include <cpsCore/Aggregation/IAggregatableObject.h>
#include <uavAP/FlightControl/Controller/PIDController/IPIDController.h>
#include <cpsCore/Utilities/IPC/IPC.h>
#include <uavAP/FlightControl/SensingActuationIO/ISensingActuationIO.h>
#include <uavAP/Core/DataHandling/DataHandling.h>
#include "uavAP/Core/SensorData.h"


#include "uavAP/FlightControl/Controller/StateSpaceController/PitchStateSpaceParams.h"
#include "uavAP/FlightControl/Controller/StateSpaceController/PitchStateSpaceCascade.h"

//class PitchStateSpaceController: public IPIDController, public AggregatableObject<IPC, IScheduler,
//		ISensingActuationIO, DataHandling, DataPresentation>, public ConfigurableObject<PlaceholderParams>, public IRunnableObject
class PitchStateSpaceController: public ConfigurableObject<PitchStateSpaceParams>, public AggregatableObject<>,
								 public IPIDController, public IRunnableObject
{
public:
	PitchStateSpaceController();

	void
	setControllerTarget(const ControllerTarget& target) override;

	bool
	run(RunStage stage) override;

	ControllerOutput
	getControllerOutput() override;

	bool
	configure(const Configuration& config) override;

	static constexpr TypeId typeId = "statespace_pitch";


private:
	std::unique_ptr<PitchStateSpaceCascade> cascade_;

};


#endif //UAVAP_PITCHSTATESPACECONTROLLER_H