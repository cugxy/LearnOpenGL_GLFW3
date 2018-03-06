#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include <iostream>

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

void trans()
{
	glm::vec4 vec(1.0f, 0.0f, 0.0f, 1.0f);
	glm::mat4 tran;
	tran = glm::translate(tran, glm::vec3(1.0f, 1.0f, 0.0f));
	vec = tran * vec;
	std::cout << vec.x << vec.y << vec.z << std::endl;
}

int main()
{
	trans();
	return 0;
}