#pragma once
#include"waterVehicle_.h"

class ship : public waterVehicle
{
	int	cabins;
public:
	ship(engineType engine, gearBoxType gearBox, int maxSpeed, int cntPass, string color, driveType drive, 
		int	cabins)
		: waterVehicle(engine, gearBox, maxSpeed, cntPass, color, drive) {
		this->cabins = 10;
	}
	void setÑabins(int cabins) { this->cabins = cabins; }
	int getÑabins() const { this->cabins; }

	void start() const
	{
		cout << " Vehicle - ship" << ",\n engine:\t" << getEngineType()
			<< "\n type of drive:\t" << getDriveType() << "\n\n is moving in the water.\n";
	}
};