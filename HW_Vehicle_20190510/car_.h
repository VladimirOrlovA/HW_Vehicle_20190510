#pragma once
#include "groundVehicle_.h"

class car : public groundVehicle
{
	carType cType;
	string brandName;
public:
	car(engineType engine, gearBoxType gearBox, int maxSpeed, int cntPass, string color, driveType drive,
		carType cType, string brandName)
		: groundVehicle(engine, gearBox, maxSpeed, cntPass, color, drive)
	{
		this->cType = cType;
		this->brandName = brandName;
	}

	void setCarType(carType cType) { this->cType = cType; }
	void setBrandName(carType brandName) { this->brandName = brandName; }

	string getCarType() const {
		switch (cType)
		{
		case sedan: return "sedan";
			break;
		case SUV: return "SUV";
			break;
		case truck: return "truck";
			break;
		}
	}

	string getBrandName() const { return brandName; }

	void start()const
	{
		cout << "\nVehicle - Car\n";
		cout << "Engine type ----------\t" << getEngineType() << endl;
		cout << "GearBox type ---------\t" << getGearBoxType() << endl;
		cout << "Max Speed ------------\t" << getMaxSpeed() << endl;
		cout << "Passangeers ----------\t" << getCntPass() << endl;
		cout << "Body color -----------\t" << getColor() << endl;
		cout << "Type of drive --------\t" << getDriveType() << endl;
		cout << "Car type:-------------\t" << getCarType() << endl;
		cout << "Car brend:------------\t" << getBrandName() << endl;
		cout << "\nThe car is started by the " << getEngineType() << " engine.\n\n";
		cout << "\n---------------------------------------------------\n";
	}
};
