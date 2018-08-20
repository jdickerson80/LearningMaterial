#include "ChevyCamaro.h"

#include <stdio.h>

ChevyCamaro::ChevyCamaro()
	: ChevyAutomobile( "Camaro" )
{

}

ChevyCamaro::~ChevyCamaro()
{

}

int ChevyCamaro::start()
{
	printf( "chevy camaro starting\n" );
	return 0;
}
