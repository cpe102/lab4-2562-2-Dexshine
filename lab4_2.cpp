#include<iostream>

using namespace std;

double findDistance(double u,double a,double t)
{
  double s = (u*t) + (0.5*a*t*t);
  return s;
}

int main(){

  double u,a,t;
  cin >> u;
  cin >> a;
  cin >> t;
  cout << findDistance(u,a,t);



  return 0;
}
