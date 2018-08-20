#include "ChevyAutomobile.h"

#include <stdio.h>

ChevyAutomobile::ChevyAutomobile( const std::string& model )
	: Automobile( "Chevy", model )
{

}

ChevyAutomobile::~ChevyAutomobile()
{

}

int ChevyAutomobile::start()
{
	printf( "chevy starting\n" );
	return 0;
}
