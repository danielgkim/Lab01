#include <iostream>
using namespace std;
int main(int argc, char*argv[]){
  int x;
  int y;
  cout<< "Enter Number of rows and columns";
  cin >>x>>y;
  for(int i=0; i<x;i++){
    for(int j=0; j<y;j++){
      cout<<"X.";
    }
    cout <<endl;
  }
  return 0;
}
