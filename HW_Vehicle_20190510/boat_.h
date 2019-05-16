#pragma once
#include"waterVehicle_.h"

class boat : public waterVehicle
{
	int	length;
	int displacement;
public:
	boat(engineType engine, gearBoxType gearBox, int maxSpeed, int cntPass, string color, driveType drive,
		int	length, int displacement)
		: waterVehicle(engine, gearBox, maxSpeed, cntPass, color, drive) {
		this->length = length;
		this->displacement = displacement;
	}
	void setLength(int length) { this->length = length; }
	int getLength() { this->length; }
	void setDisplacement(int diam) { this->displacement = displacement; }
	int getDisplacement()const { this->displacement; }

	void start() const
	{
		cout << "\nVehicle - Boat\n";
		cout << "Engine type ----------\t" << getEngineType() << endl;
		cout << "GearBox type ---------\t" << getGearBoxType() << endl;
		cout << "Max Speed ------------\t" << getMaxSpeed() << endl;
		cout << "Passangeers ----------\t" << getCntPass() << endl;
		cout << "Body color -----------\t" << getColor() << endl;
		cout << "Type of drive --------\t" << getDriveType() << endl;
		cout << "Body length ----------\t" << length << endl;
		cout << "Displacement ---------\t" << displacement << endl;
		cout << "\nThe Boat is started by the " << getEngineType() << " engine.\n\n";
		cout << "\n---------------------------------------------------\n";
	}
};