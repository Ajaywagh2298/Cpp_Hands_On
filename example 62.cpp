/* 62.C++ Program to Calculate Difference Between Two Time Period */
#include <iostream>
using namespace std;
struct TIME
{
    int seconds;
    int minutes;
    int hours;
};
void comTimeDiff(struct TIME, struct TIME,struct TIME *);

int main()
{
    struct TIME t1, t2, difference;
    cout << "Enter start time. ( hours, minutes and seconds) :";
    cin >> t1.hours >> t1.minutes >> t1.seconds;

    cout << "Enter stop time. ( hours, minutes and seconds) :";
    cin >> t2.hours >> t2.minutes >> t2.seconds;

    comTimeDiff(t1, t2, &difference);
    cout << "Time Difference : " <<endl;
    cout << "     [ " << t1.hours << " : "<< t1.minutes << "  : " << t1.seconds <<" ] "<< endl;
    cout << " -   [ " << t2.hours << " : " << t2.minutes << " : " <<t2.seconds<<"  ] \n"<< endl;
    cout << " =   [ " << difference.hours << " : " << difference.minutes << " : " << difference.seconds << " ] "<<endl;
    return 0;
}
void comTimeDiff(struct TIME t1, struct TIME t2, struct TIME *difference){

        if(t2.seconds > t1.seconds)
            {
                --t1.minutes;
                t1.seconds += 60;
            }
        difference->seconds = t1.seconds - t2.seconds;
        if(t2.minutes > t1.minutes)
        {
                --t1.hours;
                t1.minutes += 60;
        }
        difference->minutes = t1.minutes-t2.minutes;
        difference->hours = t1.hours-t2.hours;
}
