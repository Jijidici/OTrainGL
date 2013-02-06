#include <iostream>
#include <cstdlib>
#include <GL/glew.h>
#include <GL/glfw.h>
#include <glm/glm.hpp>

static const size_t WINDOW_WIDTH = 800;
static const size_t WINDOW_HEIGHT = 600;
static const size_t BYTES_BY_SAMPLE = 32;

int main(int argc, char* argv){
	//Initialize the GLFW
	if(!glfwInit()){
		std::cout<<"[!]-> ERROR while initializing GLFW."<<std::endl;
		return EXIT_FAILURE;
	}
	
	//setting the GLFW config states
	glfwOpenWindowHint(GLFW_FSAA_SAMPLES, 4); //Anti-aliasing
	glfwOpenWindowHint(GLFW_OPENGL_VERSION_MAJOR, 3);
	glfwOpenWindowHint(GLFW_OPENGL_VERSION_MINOR, 3);
	glfwOpenWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE); //inhibit opengl 2
	
	//Open a window and intialize its OpenGL context
	if(!glfwOpenWindow(WINDOW_WIDTH, WINDOW_HEIGHT, 0, 0, 0, 0, BYTES_BY_SAMPLE, 0, GLFW_WINDOW)){
		std::cout<<"[!]-> ERROR while opening a GLFW window."<<std::endl;
		glfwTerminate();
		return EXIT_FAILURE;
	}
	
	return EXIT_SUCCESS;
}

