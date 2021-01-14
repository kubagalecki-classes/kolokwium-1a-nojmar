#include "catch.hpp"
#include <string>
using namespace std;
// Zad2
// tutaj definicja klasy Makaron
// BEZ definicji metody gotujMakaron (tylko z deklaracją)
class Makaron{
public:
  virtual double ileMaki(unsigned P) const=0 ;
  static Makaron* gotujMakaron(const string& str);
  virtual ~Makaron() =0;
};

// Zad1
// tutaj definicja klasy Tagliatelle
class Tagliatelle : public Makaron
{ 
  private:
    double L;
    double W;
    double R;
    static const double C;

  public:
    Tagliatelle(double l, double w , double r){
      R = r;
      W = w;
      L = l;
    }
    Tagliatelle(){
      R = 0.5;
      W = 0.5;
      L = 0.5;
    }
    double ileMaki(unsigned P) const{
     return (double)P * L * W * (1. - R) * C;
    }

};
