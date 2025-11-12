#include<iostream>
using namespace std;
class time{
    public:
int hours;
int minutes;
int seconds;

void inputvalue(int seconds){
     hours=seconds/3600;
    minutes=(seconds%3600)/60;
    seconds=seconds%60;
    cout<< hours<< ":" <<minutes << ":" <<seconds <<endl;

}

void inputvalue2(int hours,int minutes,int seconds){
    seconds=(hours*3600)+(minutes*60)+seconds;
    cout<<seconds;
    
}
};
int main(){
time t1;
int number;
cout<<" input 1 to convert from seconds to HH:MM:SS"<<endl;
cout<<"input 2 to convert from HH:MM:SS to seconds"<<endl;
cin>>number;
int seconds,hours,minutes;
if(number==1){
 cout<<"enter seconds:"<<endl;
 cin>>seconds;
 t1.inputvalue(seconds);
}
else if(number==2){
    cout<<"enter hours: "<<endl;
    cin>>hours;
    cout<<"enter minutes: "<<endl;
    cin>>minutes;
    cout<<"enter seconds: "<<endl;
    cin>>seconds;
    t1.inputvalue2(hours,minutes,seconds);

}
else{
    cout<<"unvalid number !!"<<endl;
}

}