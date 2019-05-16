#pragma once
#include"waterVehicle_.h"

class submarine : public waterVehicle
{
	int	immersionDepth;
public:
	submarine(engineType engine, gearBoxType gearBox, int maxSpeed, int cntPass, string color, driveType drive,
		int	immersionDepth)
		: waterVehicle(engine, gearBox, maxSpeed, cntPass, color, drive) {
		this->immersionDepth = immersionDepth;
	}
	void setImmersionDepth(int immersionDepth) { this->immersionDepth = immersionDepth; }
	int getImmersionDepth() const { this->immersionDepth; }

	void start() const
	{
		cout << "\nVehicle - Submarine\n";
		cout << "Engine type ----------\t" << getEngineType() << endl;
		cout << "GearBox type ---------\t" << getGearBoxType() << endl;
		cout << "Max Speed ------------\t" << getMaxSpeed() << endl;
		cout << "Passangeers ----------\t" << getCntPass() << endl;
		cout << "Body color -----------\t" << getColor() << endl;
		cout << "Type of drive --------\t" << getDriveType() << endl;
		cout << "Immersion Depth ------\t" << immersionDepth << endl;
		cout << "\nThe Submarine is started by the " << getEngineType() << " engine.\n\n";
		cout << "\n---------------------------------------------------\n";
	}
};
