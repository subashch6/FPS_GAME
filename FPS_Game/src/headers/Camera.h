#ifndef _CAMERA_H
#define _CAMERA_H

#include <glm/vec3.hpp>
#include "GLFW/glfw3.h"

class Camera
{
public:
	glm::vec3 position;
	glm::vec3 target;
	glm::vec3 upVec;
	static float FOV;
	static float ASPECT;
	static float NEAR;
	static float FAR;
	Camera(glm::vec3,glm::vec3,glm::vec3);
	~Camera();
	
};

#endif