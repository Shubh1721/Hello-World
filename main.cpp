#include<iostream>
using namespace std;
int main()
{
  cout<<"Hello World\n";
  static int i=1;
  if(i<10)
  main();
  return 0;
}
