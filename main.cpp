#include <iostream>
using namespace std;


double celsius(double a);

int main (){
  double f = 0;

  while (f<=20){
    double c= celsius(f);

  cout<<"\n"<<f<<"F="<<c<<"C";
  f++;
  }
}
double celsius (double a){
  double c;
  c=(5.0/9.0)*(a-32);
  return 0;
}










