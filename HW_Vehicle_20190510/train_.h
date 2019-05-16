#pragma once
#include "groundVehicle_.h"


class train : public groundVehicle
{
	int	cntRailway�arriage;
public:
	train(engineType engine, gearBoxType gearBox, int maxSpeed, int cntPass, string color, driveType drive, 
		int	cntRailway�arriage)
		: groundVehicle(engine, gearBox, maxSpeed, cntPass, color, drive) {
		setEngineType(diesel);
		setMaxSpeed(350);
		setCntPass(2);
		setColor("blue");
		this->cntRailway�arriage = 10;
	}

	void setCarriage(int carriage) { this->cntRailway�arriage = carriage; }
	int getCarriage()const { return cntRailway�arriage; }

	void start()const
	{
		cout << " Vehicle - Train:\t" << ",\n engine:\t" << getEngineType()
			<< "\n type of drive:\t" << getDriveType() << "\n\n is moving on rails.\n";
	}
};

