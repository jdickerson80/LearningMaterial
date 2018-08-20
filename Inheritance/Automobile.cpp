#include "Automobile.h"

#include <stdio.h>

Automobile::Automobile( const std::string& make, const std::string& model )
	: VehicleBase( make, model, "Automobile" )
{

}

Automobile::~Automobile()
{

}

int Automobile::start()
{
	printf( "auto starting\n" );
	return 0;
}
