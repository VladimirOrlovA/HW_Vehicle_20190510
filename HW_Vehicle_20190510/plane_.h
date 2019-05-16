#pragma once
#include"airVehicle_.h"

class plane : public airVehicle
{
	int	rangeOfFlight;
public:
	plane(engineType engine, gearBoxType gearBox, int maxSpeed, int cntPass, string color, driveType drive,
		int	rangeOfFlight)
		: airVehicle(engine, gearBox, maxSpeed, cntPass, color, drive) {
		this->rangeOfFlight = rangeOfFlight;
	}
	void setRangeOfFligh(int rangeOfFlight) { this->rangeOfFlight = rangeOfFlight; }
	int getRangeOfFlight() const { this->rangeOfFlight; }

	void start() const
	{
		cout << "\nVehicle - AirPlane\n";
		cout << "Engine type ----------\t" << getEngineType() << endl;
		cout << "GearBox type ---------\t" << getGearBoxType() << endl;
		cout << "Max Speed ------------\t" << getMaxSpeed() << endl;
		cout << "Passangeers ----------\t" << getCntPass() << endl;
		cout << "Body color -----------\t" << getColor() << endl;
		cout << "Type of drive --------\t" << getDriveType() << endl;
		cout << "Range of flight ------\t" << rangeOfFlight << endl;
		cout << "\nThe AirPlane is started by the " << getEngineType() << " engine.\n\n";
		cout << "\n---------------------------------------------------\n";
	}

};