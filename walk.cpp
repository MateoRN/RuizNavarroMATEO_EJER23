#include <iostream>
#include <random>
#include <stdlib.h>
#include <cmath>

int main(){
  int i;
  float pi = 2.0*asin(1.0);
  float theta = 0.0;
  float x = 0.0;
  float y = 0.0;
  
  srand48(8);
    float dist = 0;
        
   while(dist<100){  
    theta = drand48()*2.0*pi;
    x = x + cos(theta);
    y = y + sin(theta);
       dist = sqrt(x*x+y*y);
    std::cout << x << " " << y << std::endl;
  }
  
  return 0;
}

