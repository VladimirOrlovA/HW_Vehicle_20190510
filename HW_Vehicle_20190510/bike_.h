#pragma once
#include "groundVehicle_.h"


class bike : public groundVehicle
{
	int	cntWheels;
public:

	bike(engineType engine, gearBoxType gearBox, int maxSpeed, int cntPass, string color, driveType drive,
		int	cntWheels)
		: groundVehicle(engine, gearBox, maxSpeed, cntPass, color, drive) {
		this->cntWheels = cntWheels;
	}
	void setCntWheels(int cntWheels) { this->cntWheels = cntWheels; }
	int getCntWheels()const { return this->cntWheels; }

	void start()const
	{
		cout << "\nVehicle - Bike\n";
		cout << "Engine type ----------\t" << getEngineType() << endl;
		cout << "GearBox type ---------\t" << getGearBoxType() << endl;
		cout << "Max Speed ------------\t" << getMaxSpeed() << endl;
		cout << "Passangeers ----------\t" << getCntPass() << endl;
		cout << "Body color -----------\t" << getColor() << endl;
		cout << "Type of drive --------\t" << getDriveType() << endl;
		cout << "Quantity of wheels:---\t" << getCntWheels() << endl;
		cout << "\nThe bike is started by " << getEngineType() << "\n\n";
		cout << "\n---------------------------------------------------\n";

	}
};

