#pragma once
#include "vehicle_.h"

class airVehicle : public vehicle
{
	driveType drive;
public:
	airVehicle(engineType engine, gearBoxType gearBox, int maxSpeed, int cntPass, string color, driveType drive)
		: vehicle(engine, gearBox, maxSpeed, cntPass, color)
	{
		this->drive = drive;
	}
	void setDriveType(driveType drive) { this->drive = drive; }
	string getDriveType() const {
		switch (drive)
		{
		case 1: return "wheels";
			break;
		case 2: return "caterpillars";
			break;
		case 3: return "propeller";
			break;
		case 4: return "sail";
			break;
		case 5: return "screw";
			break;
		case 6: return "turbine";
			break;
		}
	}
	void start() { cout << "Moving on the ground and then air"; }
};