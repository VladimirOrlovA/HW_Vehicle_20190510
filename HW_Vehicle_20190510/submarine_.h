#pragma once
#include"waterVehicle_.h"

class submarine : public waterVehicle
{
	int	immersionDepth;
public:
	submarine(engineType engine, gearBoxType gearBox, int maxSpeed, int cntPass, string color, driveType drive,
		int	immersionDepth)
		: waterVehicle(engine, gearBox, maxSpeed, cntPass, color, drive) {
		this->immersionDepth = 720;
	}
	void setImmersionDepth(int immersionDepth) { this->immersionDepth = immersionDepth; }
	int getImmersionDepth() const { this->immersionDepth; }

	void start() const
	{
		cout << " Vehicle - submarine" << ",\n engine:\t" << getEngineType()
			<< "\n type of drive:\t" << getDriveType() << "\n\n is moving under water.\n";
	}
};
