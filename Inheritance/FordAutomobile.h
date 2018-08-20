#ifndef FORDAUTOMOBILE_H
#define FORDAUTOMOBILE_H

#include "Automobile.h"

class FordAutomobile : public Automobile
{
public:

	FordAutomobile( const std::string& model );

	~FordAutomobile();

	int start();
};


#endif // FORDAUTOMOBILE_H
