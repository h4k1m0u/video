#include <meshes/cube.hpp>

Cube::Cube(const Program& program):
  Mesh(program)
{
  // initialize vbo buffer
  init_buffers();

  // get position attribute from shader
  set_attribute();
}

void Cube::set_attribute() {
  // position attribute (same name as input var in vertex shader)
  GLuint attr_position = m_program.define_attribute("position");
  glVertexAttribPointer(attr_position, 3, GL_FLOAT, GL_FALSE, 12 * sizeof(float), (void *) 0);
  glEnableVertexAttribArray(attr_position);
}

std::vector<float> Cube::get_vertexes() {
  return m_vertexes;
}

int Cube::get_n_vertexes() {
  return m_n_vertexes;
}
