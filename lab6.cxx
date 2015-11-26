#include<iostream>
#include<cmath>

using namespace std;

int main(){

  double t=0,f=1,b=1,a=1;
  const double lambda = -0.1;
  const double dt = 0.1;
  const int N = -log(32)/(lambda*dt);
  cout << t << "\t" << f << "\t" << b << "\t" << a << endl;
  
  for(int i=0;i<=N; i++){
      t += dt;
      f = f + dt*lambda*f;
      b = b + dt*lambda*b/(1-lambda*dt);
      a = exp(lambda*t);
      cout << t << "\t" << f << "\t" << b << "\t" << a << endl;
  }
  
  return(0);
}
