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
	/*	setMaxSpeed(150);
		setCntPass(4);*/
		this->cType = sedan;
		this->brandName = "Toyota";
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
		cout << " Vehicle - Car:\t" <<"\n color:\t"<<getColor()<<"\n car type:\t"<< getCarType() 
			<< "\n brand name:\t" << brandName << ",\n engine:\t" << getEngineType()
			<< "\n type of drive:\t" << getDriveType() 
			<< "\n\n is moving along the road at speed "<<getMaxSpeed()<<"km/h.\n\n\n";
	}
};
