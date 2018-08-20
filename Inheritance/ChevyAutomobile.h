#ifndef CHEVYAUTOMOBILE_H
#define CHEVYAUTOMOBILE_H

#include "Automobile.h"

class ChevyAutomobile : public Automobile
{
public:

	ChevyAutomobile( const std::string& model );

	~ChevyAutomobile();

	int start();
};

#endif // CHEVYAUTOMOBILE_H
