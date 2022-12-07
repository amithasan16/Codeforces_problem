#include <iostream>
#include <string>
#include <cmath>
#include <stdio.h>
using namespace std;
//int c=0,odd=0;
void hanoi(int n,char from ,char to ,char use) {
if(n>0)
{
    hanoi(n-1,from,use,to);
    cout<<"move from "<<from<<" to "<<to<<endl;
    hanoi(n-1,use,to,from);
}
}
int fact(int x)
{
    if(x==1) return 1;
    return fact(x-1)*x;
}