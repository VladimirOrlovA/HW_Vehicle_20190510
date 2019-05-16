#pragma once
#include "vehicle_.h"

class waterVehicle : public vehicle
{
	driveType drive;
public:
	waterVehicle(engineType engine, gearBoxType gearBox, int maxSpeed, int cntPass, string color, driveType drive)
		: vehicle(engine, gearBox, maxSpeed, cntPass, color)
	{
		this->drive = sail;
	}
	void setDriveType(driveType drive) { this->drive = drive; }
	driveType getDriveType(driveType drive) const { return this->drive; }
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
	void start() { cout << "Moving on the water"; }
};
