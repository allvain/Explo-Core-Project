#include<bits/stdc++.h>
using namespace std;

float temp_sat(float a,float b,float c ,float p){
float temp;
temp=b/(a-2.303*log(p))-c;
return temp;
}

float pressure_sat_benzene(float temp){
float pressure=exp(14.1603-2948.78/(temp-44.5633));
return pressure;
}
float pressure_sat_toluene(float temp){
float pressure=exp(14.2515-3242.38/(temp-47.1806));
return pressure;
}


float iterated_temp(float prev_temp){
float p1=pressure_sat_benzene(prev_temp);
float p2=pressure_sat_toluene(prev_temp);

float P1=101.325/(.4+(.6*p2/p1));
float P2=101.325/(.6+(.4*p1/p2));

float T1=temp_sat(14.1603,2948.78,-44.5633,P1);
float T2=temp_sat(14.2515,3242.38,-47.1806,P2);

float T_updated=T1*.4+T2*.6;
return T_updated;

}

int main(){
    
float T1=temp_sat(14.1603,2948.78,-44.5633,101.325);
float T2=temp_sat(14.2515,3242.38,-47.1806,101.325);
float T_assume=T1*.4+T2*.6;
float a=T_assume;
float b=iterated_temp(T_assume);

while(fabs(a-b)>.001){
 int temp=b;
 b=iterated_temp(a);
 a=temp;
 }

cout<<b<<endl;
return 0;
}