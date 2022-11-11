#include <iostream>
#include <iomanip>
using std::cout;using std::cin;using std::endl;
int main() {
    std::cout << std::fixed << std::setprecision(2);
    int days;
    cin >> days;
    double velocity_kil_sec = 14.33;
    double velocity_mile_sec = 8.9;
    double initial_distance = 37.33;
    double velocity_per_day_kil = (velocity_kil_sec*60*60*24);
    double velocity_per_day_mile = (velocity_mile_sec*60*60*24);
    double initial_d_kil = (initial_distance*149598000);
    double initial_d_mile = (initial_distance*92955800);
    double light_kil_per_hour = (299792458.*60*60)/1000;
    cout << initial_d_kil+(days*velocity_per_day_kil) << endl;
    cout << initial_d_mile+(days*velocity_per_day_mile) << endl;
    cout << ((initial_d_kil+(days*velocity_per_day_kil))*2)/light_kil_per_hour << endl;

}