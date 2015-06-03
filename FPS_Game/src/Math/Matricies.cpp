#include "Matricies.h"


glm::mat4x4 Matricies::transformationMatrix(glm::vec3 pos, float rx, float ry, float rz, glm::vec3 scale)
{
	glm::mat4x4 mat;
	mat = glm::translate(mat, pos);
	mat = glm::rotate(mat, glm::radians(rx), glm::vec3(1, 0, 0));
	mat = glm::rotate(mat, glm::radians(ry), glm::vec3(0, 1, 0));
	mat = glm::rotate(mat, glm::radians(rz), glm::vec3(0, 0, 1));
	mat = glm::scale(mat, scale);
	return mat;
}

glm::mat4x4 Matricies::viewMatrix(Camera camera)
{
	return  glm::lookAt(camera.position,camera.target,camera.upVec);
}
glm::mat4x4 Matricies::projectionMatrix(Camera camera)
{
	return glm::perspective(camera.FOV,camera.ASPECT,camera.NEAR,camera.FAR);
}
