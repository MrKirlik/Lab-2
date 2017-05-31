#include<iostream>
#include<math.h>
using namespace std;
int main () {
    
    double  pr, vr, vel, doh, sum;
    cout<<"summa vklada:"<<endl;
    cin>>vel;
    cout<<"srok vklada:"<<endl;
    cin>>vr;
    cout<<"procentna stavka godovih:"<<endl;
    cin>>pr;
    doh=((pr/100*vel)/365)*vr;
    sum=doh + vel;
    cout<<"dohod:"<<doh<<endl;
    cout<<"summa:"<<sum<<endl;
    
 
 
 return 0;   
}
