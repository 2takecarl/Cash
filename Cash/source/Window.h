#include <imgui.h>
#include <imgui_impl_glfw.h>
#include <imgui_impl_opengl3.h>

#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#include "Renderer.h"
#include "Shader.h"
#include "Camera.h"

class Window
{
public:
	int Init();
	void Update();
	void Close();

public:
	int width = 1600;
	int height = 900;
	GLFWwindow* window;
	ImGuiIO io;
private:
	Renderer m_Renderer;
};