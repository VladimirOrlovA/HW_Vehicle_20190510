#pragma once
#include"airVehicle_.h"

class helicopter : public airVehicle
{
	int	flightAltitude;
public:
	helicopter(engineType engine, gearBoxType gearBox, int maxSpeed, int cntPass, string color, driveType drive,
		int	flightAltitude)
		: airVehicle(engine, gearBox, maxSpeed, cntPass, color, drive) {
		this->flightAltitude = 1500;
	}
	void setFlightAltitude(int flightAltitude) { this->flightAltitude = flightAltitude; }
	int getFlightAltitude() const { this->flightAltitude; }

	void start() const
	{
		cout << " Vehicle - plane" << ",\n engine:\t" << getEngineType()
			<< "\n type of drive:\t" << getDriveType() << "\n\n is moving under water.\n";
	}

};