#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>

class Renderer
{
public:
	void CreateFBO(float width, float height);
	void BindFBO();
	void UnbindFBO();
	void RescaleFBO(float width, float height);

	void CreateVAO(float vertices[]);
	void BindVAO();
	void UnbindVAO();

	void CreateVBO();
	void BindVBO(float vertices[]);
	void UnbindVBO();

	void CreateEBO(unsigned int EBO);
	void BindEBO(unsigned int EBO);
	void UnbindEBO();

	void DestroyVAO(unsigned int VAO);
	void DestroyVBO(unsigned int VBO);
	void DestroyEBO(unsigned int EBO);

public:
	GLuint FBO;
	GLuint RBO;
	GLuint texture_id;
	unsigned int VAO;
	unsigned int VBO;
	unsigned int EBO;
};