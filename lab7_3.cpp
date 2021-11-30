#include<iostream>

using namespace std;

int adiff(int x,int y){
  int z;

  while( x > 360)
  {
    x = x -360;
  }
  while( x < -360)
  {
    x = x+360;
  }
  while( y > 360)
  {
    y = y -360;
  }
  while( y < -360)
  {
    y = y+360;
  }
  if(x<= 0)
  {
    x = x + 360;
  }
  if(y<=0)
  {
    y = y + 360;
  }
  if(x > y){
    z = x - y;
  }
  else
  {
    z = y - x;
  }
  if(z == 360){
    z = 0;
  }

  if ( z > 180)
  {
    z = 360 - z;
  }

  return z;

}

int main(){
  cout << adiff(180,270);
  cout << adiff(210,45);
  cout << adiff(0,360);
  cout << adiff(10,350);
  cout << adiff(95,260);
  cout << adiff(90,-90);
  cout << adiff(1000,280);
  cout << adiff(60,244);
}
