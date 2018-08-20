#ifndef AUTOMOBILE_H
#define AUTOMOBILE_H

#include "VehicleBase.h"

class Automobile : public VehicleBase
{
public:

	Automobile( const std::string& make, const std::string& model );

	~Automobile();

	int start();
};

#endif // AUTOMOBILE_H
