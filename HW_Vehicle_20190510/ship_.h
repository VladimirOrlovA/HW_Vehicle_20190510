#pragma once
#include"waterVehicle_.h"

class ship : public waterVehicle
{
	int	cabins;
public:
	ship(engineType engine, gearBoxType gearBox, int maxSpeed, int cntPass, string color, driveType drive,
		int	cabins)
		: waterVehicle(engine, gearBox, maxSpeed, cntPass, color, drive) {
		this->cabins = cabins;
	}
	void setÑabins(int cabins) { this->cabins = cabins; }
	int getÑabins() const { this->cabins; }

	void start() const
	{
		cout << "\nVehicle - Boat\n";
		cout << "Engine type ----------\t" << getEngineType() << endl;
		cout << "GearBox type ---------\t" << getGearBoxType() << endl;
		cout << "Max Speed ------------\t" << getMaxSpeed() << endl;
		cout << "Passangeers ----------\t" << getCntPass() << endl;
		cout << "Body color -----------\t" << getColor() << endl;
		cout << "Type of drive --------\t" << getDriveType() << endl;
		cout << "Quantity of cabins ---\t" << cabins << endl;
		cout << "\nThe Ship is started by the " << getEngineType() << " engine.\n\n";
		cout << "\n---------------------------------------------------\n";
	}
};