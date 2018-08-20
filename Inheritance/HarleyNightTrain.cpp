#include "HarleyNightTrain.h"

#include <stdio.h>

HarleyNightTrain::HarleyNightTrain()
	: HarleyMotorcycle( "night train" )
{

}

HarleyNightTrain::~HarleyNightTrain()
{

}

int HarleyNightTrain::start()
{
	printf("harley night train starting\n");
	return 0;
}
