#include<iostream>
#include<cmath>
using namespace std;
int main(){
  int n;
  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(3);
  while(n>=0){
    cout<<"Enter the value of the parameter 'n' in the Leibniz formula (or -1 t\
o quit):";
    cin>>n;
    double y;
    for(int i=0; i<n+1; i++)
    {
      y+=((pow(-1.0,i))/static_cast<double>(2*i+1));

    }
    y=y*4;
  if(n==0)
    {
    cout<<"The approximate value of pi using "<<n+1<<" term is: "<<y<<endl;
        }
      if(n==-1)
        {
          exit(0);
        }
      else
        {
          cout<<"The approximate value of pi using "<<n+1<<" terms is: "<<y<<endl;
        }
      y=0;
      }
      return 0;
}
