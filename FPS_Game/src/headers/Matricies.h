#ifndef _MATRICIES_H
#define _MATRICIES_H


#include <glm/gtc/matrix_transform.hpp>
#include <glm/mat4x4.hpp>
#include <glm/vec3.hpp>
#include "Camera.h"

class Matricies
{
public:
	static glm::mat4x4 transformationMatrix(glm::vec3 , float , float , float , glm::vec3 );
	static glm::mat4x4 viewMatrix(Camera);
	static glm::mat4x4 projectionMatrix(Camera);
private:
};

#endif _MATRICIES_H