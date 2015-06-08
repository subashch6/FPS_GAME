#include "EntityShader.h"

EntityShader::EntityShader(const char* vertShaderPath, const char* fragShaderPath) : AbstractShader(vertShaderPath, fragShaderPath)
{
	loadUniformLocations();
}
void EntityShader::loadUniformLocations()
{
	locations["move"] = uniformLocation("move");
}

void EntityShader::moveLoader(float i)
{
	loadFloat(locations["move"], i);
}

EntityShader::~EntityShader()
{

}