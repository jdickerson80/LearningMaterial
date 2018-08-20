#include "FordAutomobile.h"

#include <stdio.h>

FordAutomobile::FordAutomobile( const std::string& model )
	: Automobile( "Ford", model )
{

}

FordAutomobile::~FordAutomobile()
{

}

int FordAutomobile::start()
{
	printf( "ford starting\n" );
	return 0;
}
