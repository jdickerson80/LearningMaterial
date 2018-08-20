
#include "ChevyCamaro.h"
#include "FordMustang.h"
#include "HarleyNightTrain.h"

#include <stdio.h>

#define VehicleArraySize ( 3 )

void deleteArray( VehicleBase* vehicles[], size_t size );

int main()
{
	VehicleBase* vehicleArray[ VehicleArraySize ];

	// uncomment the below statement to show how a single (can be more) pure virtual
	// function automatically make a class abstract
//	vehicleArray[ 0 ] = new VehicleBase();
	vehicleArray[ 0 ] = new ChevyCamaro();
	vehicleArray[ 1 ] = new FordMustang();
	vehicleArray[ 2 ] = new HarleyNightTrain();

	for ( size_t i = 0; i < VehicleArraySize; ++i )
	{
		VehicleBase* vehicle = vehicleArray[ i ];
		printf("%s %s %s: ", vehicle->make().c_str(), vehicle->model().c_str(), vehicle->type().c_str() );
		vehicle->start();
	}

	deleteArray( vehicleArray, VehicleArraySize );
}


void deleteArray( VehicleBase* vehicles[], size_t size )
{
	for ( size_t i = 0; i < size; ++i )
	{
		delete vehicles[ i ];
	}
}
