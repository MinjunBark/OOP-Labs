#include <iostream>
using namespace std;

class Time{
    public:
    int hours, minutes, seconds;

    Time(){

    }

    Time(int tempHour, int tempMinute, int tempSecond){
        hours = tempHour;
        minutes = tempMinute;
        seconds = tempSecond;
    }
    
    Time operator+(Time add){
        Time tempTime(0,0,0);
        int holdvalues;

        tempTime.hours = hours + add.hours;
        tempTime.minutes = minutes + add.minutes;
        tempTime.seconds = seconds + add.seconds;

        if(tempTime.minutes > 60){
            tempTime.minutes = tempTime.minutes % 60; //08
            tempTime.hours = tempTime.hours + 1 ;

        }
        if(tempTime.seconds > 60){
            tempTime.seconds = tempTime.seconds % 60;
            tempTime.minutes = tempTime.minutes + 1;
        }


        return tempTime;
    }

    void print(){
        cout << hours << " hours, " << minutes << " minutes, " << seconds << " seconds"; 
        cout << endl;
    }

};