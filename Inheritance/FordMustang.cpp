#include "FordMustang.h"

#include <stdio.h>

FordMustang::FordMustang()
	: FordAutomobile( "Camaro" )
{

}

FordMustang::~FordMustang()
{

}

int FordMustang::start()
{
	printf( "ford mustang starting\n" );
	return 0;
}
