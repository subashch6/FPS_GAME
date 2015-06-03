#include "Entity.h"

Entity::Entity(glm::vec3 positionVector, float rotationx, float rotationy, float rotationz, glm::vec3 entitydialtion)
{
	position = positionVector;
	rotx = rotationx;
	roty = rotationy;
	rotz = rotationz;
	scale = entitydialtion;
	transform = Matricies::transformationMatrix(position, rotationx, rotationy, rotationz, scale);
}

Entity::~Entity()
{

}

glm::mat4x4 Entity::getTransform()
{
	return transform;
}

glm::vec3 Entity::getPosition()
{
	return position;
}

float Entity::getRotationX()
{
	return rotx;
}

float Entity::getRotationY()
{
	return roty;
}


float Entity::getRotationZ()
{
	return rotz;
}
glm::vec3 Entity::getScale()
{
	return scale;
}