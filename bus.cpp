#include <iostream>
using namespace std;

int main(){
    int n; //行經站牌數量
    cin >> n;
    int hr[n+1]; //時
    int min[n+1]; //分
    int travelTime; //公車到下一站所需時間
    cin >> hr[0] >> min[0];
    for(int i = 1; i < n + 1; i++){
        cin >> travelTime;
        hr[i] = hr[i - 1];
        min[i] = min[i - 1] + travelTime;
        if(min[i] > 59){
            min[i] -= 60;
            hr[i]++;
        }
        if(hr[i] > 23){
            hr[i] -= 24;
        }
    }
    for(int i = 1; i < n + 1; i++){
        if(hr[i] < 10){
            cout << "0";
        }
        cout << hr[i] << ":";
        if(min[i] < 10){
            cout << "0";
        }
        cout << min[i] << endl;
    }
}
