#ifndef CUBE_HPP
#define CUBE_HPP

#include <meshes/mesh.hpp>

class Cube : public Mesh {
public:
  Cube(const Program& program);

protected:
  // coord(x,y,z)        color(r,g,b)      texture(u,v,w)       normal(nx,ny,nz)
  std::vector<float> m_vertexes {
    // negative-x (left face)
    -0.5f,  0.5f,  0.5f, 1.0f, 0.0f, 0.0f, -1.0f,  1.0f,  1.0f, -1.0f,  0.0f,  0.0f,
    -0.5f,  0.5f, -0.5f, 1.0f, 0.0f, 0.0f, -1.0f,  1.0f, -1.0f, -1.0f,  0.0f,  0.0f,
    -0.5f, -0.5f, -0.5f, 1.0f, 0.0f, 0.0f, -1.0f, -1.0f, -1.0f, -1.0f,  0.0f,  0.0f,
    -0.5f, -0.5f, -0.5f, 1.0f, 0.0f, 0.0f, -1.0f, -1.0f, -1.0f, -1.0f,  0.0f,  0.0f,
    -0.5f, -0.5f,  0.5f, 1.0f, 0.0f, 0.0f, -1.0f, -1.0f,  1.0f, -1.0f,  0.0f,  0.0f,
    -0.5f,  0.5f,  0.5f, 1.0f, 0.0f, 0.0f, -1.0f,  1.0f,  1.0f, -1.0f,  0.0f,  0.0f,

     // positive-x (right face)
     0.5f,  0.5f,  0.5f, 1.0f, 0.0f, 0.0f,  1.0f,  1.0f,  1.0f,  1.0f,  0.0f,  0.0f,
     0.5f,  0.5f, -0.5f, 1.0f, 0.0f, 0.0f,  1.0f,  1.0f, -1.0f,  1.0f,  0.0f,  0.0f,
     0.5f, -0.5f, -0.5f, 1.0f, 0.0f, 0.0f,  1.0f, -1.0f, -1.0f,  1.0f,  0.0f,  0.0f,
     0.5f, -0.5f, -0.5f, 1.0f, 0.0f, 0.0f,  1.0f, -1.0f, -1.0f,  1.0f,  0.0f,  0.0f,
     0.5f, -0.5f,  0.5f, 1.0f, 0.0f, 0.0f,  1.0f, -1.0f,  1.0f,  1.0f,  0.0f,  0.0f,
     0.5f,  0.5f,  0.5f, 1.0f, 0.0f, 0.0f,  1.0f,  1.0f,  1.0f,  1.0f,  0.0f,  0.0f,

     // negative-y (bottom face)
    -0.5f, -0.5f, -0.5f, 0.0f, 1.0f, 0.0f, -1.0f, -1.0f, -1.0f,  0.0f, -1.0f,  0.0f,
     0.5f, -0.5f, -0.5f, 0.0f, 1.0f, 0.0f,  1.0f, -1.0f, -1.0f,  0.0f, -1.0f,  0.0f,
     0.5f, -0.5f,  0.5f, 0.0f, 1.0f, 0.0f,  1.0f, -1.0f,  1.0f,  0.0f, -1.0f,  0.0f,
     0.5f, -0.5f,  0.5f, 0.0f, 1.0f, 0.0f,  1.0f, -1.0f,  1.0f,  0.0f, -1.0f,  0.0f,
    -0.5f, -0.5f,  0.5f, 0.0f, 1.0f, 0.0f, -1.0f, -1.0f,  1.0f,  0.0f, -1.0f,  0.0f,
    -0.5f, -0.5f, -0.5f, 0.0f, 1.0f, 0.0f, -1.0f, -1.0f, -1.0f,  0.0f, -1.0f,  0.0f,

    // positive-y (top face)
    -0.5f,  0.5f, -0.5f, 0.0f, 1.0f, 0.0f, -1.0f,  1.0f, -1.0f,  0.0f,  1.0f,  0.0f,
     0.5f,  0.5f, -0.5f, 0.0f, 1.0f, 0.0f,  1.0f,  1.0f, -1.0f,  0.0f,  1.0f,  0.0f,
     0.5f,  0.5f,  0.5f, 0.0f, 1.0f, 0.0f,  1.0f,  1.0f,  1.0f,  0.0f,  1.0f,  0.0f,
     0.5f,  0.5f,  0.5f, 0.0f, 1.0f, 0.0f,  1.0f,  1.0f,  1.0f,  0.0f,  1.0f,  0.0f,
    -0.5f,  0.5f,  0.5f, 0.0f, 1.0f, 0.0f, -1.0f,  1.0f,  1.0f,  0.0f,  1.0f,  0.0f,
    -0.5f,  0.5f, -0.5f, 0.0f, 1.0f, 0.0f, -1.0f,  1.0f, -1.0f,  0.0f,  1.0f,  0.0f,

    // negative-z (back face)
    -0.5f, -0.5f, -0.5f, 0.0f, 0.0f, 1.0f, -1.0f, -1.0f, -1.0f,  0.0f,  0.0f, -1.0f,
     0.5f, -0.5f, -0.5f, 0.0f, 0.0f, 1.0f,  1.0f, -1.0f, -1.0f,  0.0f,  0.0f, -1.0f,
     0.5f,  0.5f, -0.5f, 0.0f, 0.0f, 1.0f,  1.0f,  1.0f, -1.0f,  0.0f,  0.0f, -1.0f,
     0.5f,  0.5f, -0.5f, 0.0f, 0.0f, 1.0f,  1.0f,  1.0f, -1.0f,  0.0f,  0.0f, -1.0f,
    -0.5f,  0.5f, -0.5f, 0.0f, 0.0f, 1.0f, -1.0f,  1.0f, -1.0f,  0.0f,  0.0f, -1.0f,
    -0.5f, -0.5f, -0.5f, 0.0f, 0.0f, 1.0f, -1.0f, -1.0f, -1.0f,  0.0f,  0.0f, -1.0f,

    // positive-z (front face)
    -0.5f, -0.5f,  0.5f, 0.0f, 0.0f, 1.0f, -1.0f, -1.0f,  1.0f,  0.0f,  0.0f,  1.0f,
     0.5f, -0.5f,  0.5f, 0.0f, 0.0f, 1.0f,  1.0f, -1.0f,  1.0f,  0.0f,  0.0f,  1.0f,
     0.5f,  0.5f,  0.5f, 0.0f, 0.0f, 1.0f,  1.0f,  1.0f,  1.0f,  0.0f,  0.0f,  1.0f,
     0.5f,  0.5f,  0.5f, 0.0f, 0.0f, 1.0f,  1.0f,  1.0f,  1.0f,  0.0f,  0.0f,  1.0f,
    -0.5f,  0.5f,  0.5f, 0.0f, 0.0f, 1.0f, -1.0f,  1.0f,  1.0f,  0.0f,  0.0f,  1.0f,
    -0.5f, -0.5f,  0.5f, 0.0f, 0.0f, 1.0f, -1.0f, -1.0f,  1.0f,  0.0f,  0.0f,  1.0f
  };
  int m_n_vertexes = 6 * 2 * 3;

  void set_attribute() override;
  std::vector<float> get_vertexes() override;
  int get_n_vertexes() override;
};

#endif // CUBE_HPP
