#pragma once
#include"airVehicle_.h"

class plane : public airVehicle
{
	int	rangeOfFlight;
public:
	plane(engineType engine, gearBoxType gearBox, int maxSpeed, int cntPass, string color, driveType drive,
		int	rangeOfFlight)
		: airVehicle(engine, gearBox, maxSpeed, cntPass, color, drive) {
		this->rangeOfFlight = 1500;
	}
	void setRangeOfFligh(int rangeOfFlight) { this->rangeOfFlight = rangeOfFlight; }
	int getRangeOfFlight() const { this->rangeOfFlight; }

	void start() const
	{
		cout << " Vehicle - plane" << ",\n engine:\t" << getEngineType()
			<< "\n type of drive:\t" << getDriveType() << "\n\n is moving under water.\n";
	}

};