#ifndef _ENTITY_H
#define _ENTITY_H

#include "glm/vec3.hpp"
#include <glm/mat4x4.hpp>
#include "Matricies.h"

class Entity
{
public:
	Entity(glm::vec3, float, float, float, glm::vec3);
	~Entity();
	glm::vec3 getPosition();
	float getRotationX();
	float getRotationY();
	float getRotationZ();
	glm::vec3 getScale();
	glm::mat4x4 getTransform();
private:
	glm::vec3 position;
	float rotx;
	float roty;
	float rotz;
	glm::vec3 scale;
	glm::mat4x4 transform;

};
#endif _ENTITY_H 
