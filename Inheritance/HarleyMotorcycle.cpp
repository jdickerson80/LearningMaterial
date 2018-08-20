#include "HarleyMotorcycle.h"

#include <stdio.h>

HarleyMotorcycle::HarleyMotorcycle( const std::string& model )
	: MotorCycle( "Harley", model )
{

}

HarleyMotorcycle::~HarleyMotorcycle()
{

}

int HarleyMotorcycle::start()
{
	printf("harley starting\n");
	return 0;
}
