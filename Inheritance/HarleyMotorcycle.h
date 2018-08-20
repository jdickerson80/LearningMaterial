#ifndef HARLEYMOTORCYCLE_H
#define HARLEYMOTORCYCLE_H

#include "MotorCycle.h"

class HarleyMotorcycle : public MotorCycle
{
public:

	HarleyMotorcycle( const std::string& model );

	~HarleyMotorcycle();

	int start();
};

#endif // HARLEYMOTORCYCLE_H
