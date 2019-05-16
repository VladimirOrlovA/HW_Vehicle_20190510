#pragma once
#include<iostream>
#include<string>
#include<vector>
using namespace std;

enum engineType { gasoline = 1, diesel, gas, electrical, physical };
enum driveType { wheels = 1, caterpillars, propeller, sail, screw, turbine };
enum carType { sedan = 1, SUV, truck };
enum gearBoxType { mechanical = 1, automatic };

class vehicle
{
	engineType engine;
	gearBoxType gearBox;
	int maxSpeed;
	int cntPass;
	string color;
public:
	vehicle(engineType engine, gearBoxType gearBox, int maxSpeed, int cntPass, string color) {
		this->engine = gasoline;
		this->gearBox = mechanical;
		this->maxSpeed = 30;
		this->cntPass = 1;
		this->color = "silver";
	}

	void setEngineType(engineType engine) { this->engine = engine; }
	void setMaxSpeed(int maxSpeed) { this->maxSpeed = maxSpeed; }
	void setCntPass(int cntPass) { this->cntPass = cntPass; }
	void setColor(string color) { this->color = color; }

	int getMaxSpeed() const { return maxSpeed; }
	int getCntPass() const { return cntPass; }
	string getColor() const { return color; }

	string getEngineType() const {
		switch (engine)
		{
		case 1: return "gasoline";
			break;
		case 2: return "diesel";
			break;
		case 3: return "gas";
			break;
		case 4: return "electrical";
			break;
		case 5: return "physical";
			break;
		}
	}
	string getGearBoxType() const {
		switch (gearBox)
		{
		case 1: return "mechanical";
			break;
		case 2: return "automatic";
			break;
		}
	}
	virtual void start() {}
};
