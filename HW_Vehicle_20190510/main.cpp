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

	bike bi(physical,mechanical,40,1,"green",sail, 2);
	car ca(gasoline, mechanical, 60, 4, "silver", wheels, SUV, "Mitsubishi");
	train tr(gasoline, automatic, 350, 200, "yellow", wheels, 10);
	boat bo(gasoline, mechanical, 55, 5, "white", screw, 15, 1500);
	ship sh(diesel, mechanical, 35, 500, "gray", sail, 250);
	submarine su(diesel, automatic, 25, 145, "black", screw, 750);
	plane pl(gasoline, automatic, 700, 2, "blue", propeller, 1500);
	helicopter he(gasoline, automatic, 320, 2, "green", screw, 2000);

	bi.start();
	ca.start();


	system("pause");
}

// set -  get - констр с параметрами 