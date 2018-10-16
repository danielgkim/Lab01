#include <iostream>
using namespace std;
void makeblock(int rows, int columns);
int main(int argc, char*argv[]){
  int x;
  int y;
  do {
    cout<< "Enter number of rows and columns:"<<endl;
    cin>>x>>y;
    makeblock(x,y);
  }
  while(x>0);
}

void makeblock(int rows,int columns){
  for(int i=1;i<=rows;i++){
    for(int j=1;j<=columns;j++)
    {
      cout <<"X.";
    }
    cout<<endl;
  }
}
