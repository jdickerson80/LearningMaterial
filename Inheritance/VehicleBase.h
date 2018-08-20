#ifndef VEHICLEBASE_H
#define VEHICLEBASE_H

#include <string>

class VehicleBase
{
private:

	const std::string _make;
	const std::string _model;
	const std::string _type;

public:

	VehicleBase( const std::string& make, const std::string& model, const std::string& type )
		: _make( make )
		, _model( model )
		, _type( type )
	{}

	virtual ~VehicleBase() {}

	const std::string make() const
	{
		return _make;
	}

	const std::string model() const
	{
		return _model;
	}

	const std::string type() const
	{
		return _type;
	}

	/**
	 * @brief start
	 * @note pure virtual!!!!
	 * @return
	 */
	virtual int start() = 0;
};

#endif // VEHICLEBASE_H
