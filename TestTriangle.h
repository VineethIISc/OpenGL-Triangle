#ifndef TEST_TRIANGLE_H
#define TEST_TRIANGLE_H

#include "CommonHeader.h"

class TestTriangle
{
public:
	TestTriangle();
	~TestTriangle();

	//debug
	GLuint getVBO();
	GLuint getVAO();

	//rendering purpose
	void loadData();
	void render();

private:
	GLuint VBO, VAO;
	std::vector<Vector3f> vertices;
	int numVertices;
	
	//triangle vertices;
	void init();
};

#endif

