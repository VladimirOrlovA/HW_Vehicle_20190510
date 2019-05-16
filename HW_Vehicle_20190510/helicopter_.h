#pragma once
#include"airVehicle_.h"

class helicopter : public airVehicle
{
	int	flightAltitude;
public:
	helicopter(engineType engine, gearBoxType gearBox, int maxSpeed, int cntPass, string color, driveType drive,
		int	flightAltitude)
		: airVehicle(engine, gearBox, maxSpeed, cntPass, color, drive) {
		this->flightAltitude = flightAltitude;
	}
	void setFlightAltitude(int flightAltitude) { this->flightAltitude = flightAltitude; }
	int getFlightAltitude() const { this->flightAltitude; }

	void start() const
	{
		cout << "\nVehicle - Helicopter\n";
		cout << "Engine type ----------\t" << getEngineType() << endl;
		cout << "GearBox type ---------\t" << getGearBoxType() << endl;
		cout << "Max Speed ------------\t" << getMaxSpeed() << endl;
		cout << "Passangeers ----------\t" << getCntPass() << endl;
		cout << "Body color -----------\t" << getColor() << endl;
		cout << "Type of drive --------\t" << getDriveType() << endl;
		cout << "Flight altitude ------\t" << flightAltitude << endl;
		cout << "\nThe AirPlane is started by the " << getEngineType() << " engine.\n\n";
		cout << "\n---------------------------------------------------\n";
	}

};