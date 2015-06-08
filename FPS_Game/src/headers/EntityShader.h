#ifndef _ENTITYSHADER_H
#define _ENTITYSHADER_H

#include "AbstractShader.h"
#include <map>

class EntityShader : public AbstractShader
{
private:
	std::map<std::string, GLint> locations;

public:
	EntityShader(const char*, const char*);
	~EntityShader();
	void loadUniformLocations();
	void moveLoader(float);
};


#endif _ENTITYSHADER_H 
