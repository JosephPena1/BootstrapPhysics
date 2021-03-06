#include "Quad.h"

Quad::Quad(glm::vec4 color) : Quad::Quad()
{
	m_color = color;
}

Vertex* Quad::generateVertices(unsigned int& vertexCount, unsigned int& triCount)
{
	Vertex* vertices = nullptr;
	vertexCount = 6;
	triCount = 2;

	//Define the vertices for a quad
	vertices = new Vertex[vertexCount];

	//Triangle 0
	vertices[0].position = { -1.0f, 0.0f, 1.0f, 1.0f };
	vertices[1].position = { 1.0f, 0.0f, 1.0f, 1.0f };
	vertices[2].position = { -1.0f, 0.0f, -1.0f, 1.0f };
	//Triangle 1
	vertices[3].position = { 1.0f, 0.0f, 1.0f, 1.0f };
	vertices[4].position = { -1.0f, 0.0f, -1.0f, 1.0f };
	vertices[5].position = { 1.0f, 0.0f, -1.0f, 1.0f };

	for (int i = 0; i < vertexCount; i++)
		vertices[i].color = m_color;

	vertices[0].color = { -0.9f, 0.0f, 0.0f, 1.0f };
	vertices[2].color = { 1.0f, 0.5f, 0.0f, 1.0f };
	vertices[5].color = { 1.0f, 0.0f, 0.0f, 1.0f };
	vertices[4].color = { 1.0f, 0.5f, 0.0f, 1.0f };

	return vertices;
}
