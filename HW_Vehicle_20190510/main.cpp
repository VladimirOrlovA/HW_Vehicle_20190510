//#pragma once
#include"bike_.h"
#include"car_.h"
#include"train_.h"
#include"boat_.h"
#include"ship_.h"
#include"submarine_.h"
#include"plane_.h"
#include"helicopter_.h"



void main() {

	bike bi(physical, mechanical, 40, 1, "green", wheels, 2);
	bi.start();
	bike bi1(electrical, automatic, 80, 1, "dark grey", wheels, 2);
	bi1.start();
	car ca(electrical, mechanical, 60, 4, "silver", wheels, SUV, "Mitsubishi");
	ca.start();
	train tr(diesel, automatic, 350, 200, "yellow", wheels, 10);
	tr.start();
	boat bo(gasoline, mechanical, 55, 5, "white", screw, 15, 1500);
	bo.start();
	ship sh(diesel, mechanical, 35, 500, "gray", sail, 250);
	sh.start();
	submarine su(electrical, mechanical, 25, 145, "black", turbine, 750);
	su.start();
	plane pl(gasoline, automatic, 700, 2, "blue", propeller, 1500);
	pl.start();
	helicopter he(gasoline, automatic, 320, 2, "green", screw, 2000);
	he.start();

	system("pause");
}
