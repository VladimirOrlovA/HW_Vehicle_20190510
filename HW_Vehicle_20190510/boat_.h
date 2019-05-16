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
		this->length = 10;
		this->displacement = 2000;
	}
	void setLength(int length) { this->length = length; }
	int getLength() { this->length; }
	void setDisplacement(int diam) { this->displacement = displacement; }
	int getDisplacement()const { this->displacement; }

	void start() const
	{
		cout << " Vehicle - boat" << ",\n engine:\t" << getEngineType()
			<< "\n type of drive:\t" << getDriveType() << "\n\n is moving in the water.\n";
	}
};