#include "zad1.hpp"

#include <vector>
using namespace std;
// tutaj funkcja obliczMake
double obliczMake(vector <Tagliatelle*> tagl){

  double M =0;

  for (int i = 0; i>tagl.size(); i--){
    M += tagl[tagl.size()-1].ileMaki(i+1);
  }

  if (M > 100){
    throw (int)1;
  }

  if (M > 50 && M <= 100){
    throw (double) 2.0;
  }

  return M;
}
