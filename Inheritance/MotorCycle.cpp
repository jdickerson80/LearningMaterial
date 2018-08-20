#include "MotorCycle.h"

#include <stdio.h>

MotorCycle::MotorCycle(const std::string &make, const std::string &model)
	: VehicleBase( make, model, "Motorcycle" )
{

}

MotorCycle::~MotorCycle()
{

}

int MotorCycle::start()
{
	printf( "motorcyle starting\n");
	return 0;
}
