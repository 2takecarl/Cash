#include <imgui.h>
#include <imgui_impl_glfw.h>
#include <imgui_impl_opengl3.h>

#include <glad/glad.h>
#include <GLFW/glfw3.h>

class Window
{
public:
	void Init();
	void Update();
	void Close();

public:
	int width = 1280;
	int height = 720;
	GLFWwindow* window;
};