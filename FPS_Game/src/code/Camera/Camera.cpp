#include "Camera.h"


float Camera::FOV = 60.0f;
float Camera::ASPECT = 4.0f / 3.0f;
float Camera::NEAR = .1f;
float Camera::FAR = 100.0f;

Camera::Camera(glm::vec3 pos, glm::vec3 tar, glm::vec3 up)
{
	position = pos;
	target = tar;
	upVec = up;
}


Camera::~Camera()
{

}