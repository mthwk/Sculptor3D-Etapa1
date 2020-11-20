#ifndef SCULPTOR_H
#define SCULPTOR_H

/**
 * @brief O struct Voxel cria uma entidade em três dimensões.
 * @param r é a componente resposável pela cor vermelha
 * @param g é a componente resposável pela cor verde
 * @param b é a componente resposável pela cor blue
 * @param a é a componente resposável pela transparência
 * @param isOn é a componente resposável pela construção ou não do Voxel
 */
struct Voxel {
  float r,g,b; // Colors
  float a;
// Transparency
  bool isOn; // Included or not
};

class Sculptor {
protected:
  Voxel ***v;
  // 3D matrix
  int nx,ny,nz; // Dimensions
  float r,g,b,a; // Current drawing color
public:
  Sculptor(int _nx, int _ny, int _nz); //Foi
  ~Sculptor(); //Foi
  void setColor(float r, float g, float b, float alpha); //Foi
  void putVoxel(int x, int y, int z); // Foi
  void cutVoxel(int x, int y, int z); // Não Foi
  void putBox(int x0, int x1, int y0, int y1, int z0, int z1); //Foi
  void cutBox(int x0, int x1, int y0, int y1, int z0, int z1); //Foi
  void putSphere(int xcenter, int ycenter, int zcenter, int radius); //Foi
  void cutSphere(int xcenter, int ycenter, int zcenter, int radius); //Não Foi
  void putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz); // Foi
  void cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz); //Não Foi
  void writeOFF(char* filename);
};
#endif // SCULPTOR_H
