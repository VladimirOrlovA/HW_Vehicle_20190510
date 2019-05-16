#pragma once
#include "groundVehicle_.h"


class train : public groundVehicle
{
	int	cntRailwayÑarriage;
public:
	train(engineType engine, gearBoxType gearBox, int maxSpeed, int cntPass, string color, driveType drive,
		int	cntRailwayÑarriage)
		: groundVehicle(engine, gearBox, maxSpeed, cntPass, color, drive) {
		this->cntRailwayÑarriage = cntRailwayÑarriage;
	}

	void setCarriage(int carriage) { this->cntRailwayÑarriage = carriage; }
	int getCarriage()const { return cntRailwayÑarriage; }

	void start()const
	{
		cout << "\nVehicle - Train\n";
		cout << "Engine type ----------\t" << getEngineType() << endl;
		cout << "GearBox type ---------\t" << getGearBoxType() << endl;
		cout << "Max Speed ------------\t" << getMaxSpeed() << endl;
		cout << "Passangeers ----------\t" << getCntPass() << endl;
		cout << "Body color -----------\t" << getColor() << endl;
		cout << "Type of drive --------\t" << getDriveType() << endl;
		cout << "Quantity of carriage -\t" << cntRailwayÑarriage << endl;
		cout << "\nThe car is started by the " << getEngineType() << " engine.\n\n";
		cout << "\n---------------------------------------------------\n";
	}
};

