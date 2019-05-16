#pragma once
#include "groundVehicle_.h"


class train : public groundVehicle
{
	int	cntRailwayÑarriage;
public:
	train(engineType engine, gearBoxType gearBox, int maxSpeed, int cntPass, string color, driveType drive, 
		int	cntRailwayÑarriage)
		: groundVehicle(engine, gearBox, maxSpeed, cntPass, color, drive) {
		setEngineType(diesel);
		setMaxSpeed(350);
		setCntPass(2);
		setColor("blue");
		this->cntRailwayÑarriage = 10;
	}

	void setCarriage(int carriage) { this->cntRailwayÑarriage = carriage; }
	int getCarriage()const { return cntRailwayÑarriage; }

	void start()const
	{
		cout << " Vehicle - Train:\t" << ",\n engine:\t" << getEngineType()
			<< "\n type of drive:\t" << getDriveType() << "\n\n is moving on rails.\n";
	}
};

