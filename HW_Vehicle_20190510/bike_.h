#pragma once
#include "groundVehicle_.h"


class bike : public groundVehicle
{
	int	cntWheels;
public:

	bike(engineType engine, gearBoxType gearBox, int maxSpeed, int cntPass,	string color, driveType drive, 
		int	cntWheels)
		: groundVehicle(engine, gearBox, maxSpeed, cntPass, color, drive) {
		this->cntWheels = 2;
	/*	setEngineType(physical);
		setMaxSpeed(60);*/
	}
	void setCntWheels(int cntWheels) { this->cntWheels = cntWheels; }
	int getCntWheels(int cntWheels)const { return this->cntWheels; }

	void start()const
	{
		cout << " Vehicle - Bike:\t" << "\n color:\t" << getColor() << "\n type of drive:\t" << getDriveType()
			<< "\n\n is moving on the any road at speed " << getMaxSpeed() << "km/h.\n\n\n";
	}
};

