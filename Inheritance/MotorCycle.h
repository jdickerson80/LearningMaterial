#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H

#include "VehicleBase.h"

class MotorCycle : public VehicleBase
{
public:

	MotorCycle( const std::string& make, const std::string& model );

	~MotorCycle();

	int start();
};


#endif // MOTORCYCLE_H
