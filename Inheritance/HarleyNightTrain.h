#ifndef HARLEYNIGHTTRAIN_H
#define HARLEYNIGHTTRAIN_H

#include "HarleyMotorcycle.h"

class HarleyNightTrain : public HarleyMotorcycle
{
public:
	HarleyNightTrain();

	~HarleyNightTrain();

	int start();
};

#endif // HARLEYNIGHTTRAIN_H
