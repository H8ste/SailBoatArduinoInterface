#ifndef SENSOR_H
#define SENSOR_H

#include <config.h>

class Sensor{
	public:
		Sensor(){}
		
		virtual void init() = 0;
		virtual void updateMeasures() = 0;		
		unsigned int getRawValue(){return value;}
	protected:
		unsigned int value;
};

#endif