#include <iostream>
using namespace std;

int main(){
    double m[7], a[7], n[7], e[7];
    double timeTotal[4] = {0}; //各時段總合
    double dayTotal[7]; //每日總合

    for(int i = 0; i < 7; i++)
        cin >> m[i] >> a[i] >> n[i] >> e[i];
    
    for(int i = 0; i < 7; i++)
        timeTotal[0] += m[i];
    for(int i = 0; i < 7; i++)
        timeTotal[1] += a[i];
    for(int i = 0; i < 7; i++)
        timeTotal[2] += n[i];
    for(int i = 0; i < 7; i++)
        timeTotal[3] += e[i];
    for(int i = 0; i < 7; i++)
        dayTotal[i] = m[i] + a[i] + n[i] + e[i]; 
    
    double dayMax = 0;
    for(int i = 0; i < 6; i++){
        if(dayTotal[i] > dayMax){
            dayMax = dayTotal[i];
        }
    }
    for(int i = 0; i < 7; i++){
        if(dayMax == dayTotal[i]){
            cout << i + 1 << endl;
        }
    }

    double timeMax = 0;
    for(int i = 0; i < 3; i++){
        if(timeTotal[i] > timeMax){
            timeMax = timeTotal[i];
        }
    }
    if(timeMax == timeTotal[0])
        cout << "morning";
    if(timeMax == timeTotal[1])
        cout << "afternoon";
    if(timeMax == timeTotal[2])
        cout << "night";
    if(timeMax == timeTotal[3])
        cout << "early morning";
}
