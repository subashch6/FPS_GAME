#ifndef _ABSTRACTSHADER_H
#define _ABSTRACTSHADER_H

#include <string>
#include "GL/glew.h"
#include <fstream>


class AbstractShader
{
public:
	std::string LoadFileToString(const char*);
	GLuint loadShader(const char*, const char*);
	GLuint program;
	AbstractShader(const char*, const char*);
	~AbstractShader();
	GLuint getProgram();
	GLint uniformLocation(const char*);
	void loadFloat(GLint,float);
	virtual void loadUniformLocations() = 0;
};


#endif _ABSTRACTSHADER_H