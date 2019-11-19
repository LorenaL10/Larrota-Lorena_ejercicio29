#include<iostream>
#include <math.h> 
#include<cmath>
#include <fstream>

using namespace std;

int solucion(int Nx, int Nt, string filename);

int main(){
   solucion(30, 500, "evolve_a.dat");
    return 0;
}

int solucion(int Nx, int Nt, string filename){
    float D=1.0;
    float s=1.0;
    float phi1=0;
    float phi2=0;
    float delta_t=1.0/Nt;
    float delta_x=2.0/Nx;
    double x_vieja[Nx];
   double x_nueva[Nx];
    float t=0.0;
    
    ofstream outfile;
    outfile.open(filename);
    
  for(int i=0;i<Nx;i++){
       x_vieja[i]=0.0;
      if (i==0 || i==(Nx-1)){
      x_nueva[i]=0.0;
          }
      else {
         x_nueva[i] = x_vieja[i] + (((D*delta_t)/(delta_x*delta_x))*(x_vieja[i+1]+(-2*x_vieja[i])+x_vieja[i-1]));
      }
      outfile << x_nueva[i] << " " << t<< endl;
      t += delta_t;
   
    }
    outfile.close();
    return 0; 
}