#include<bits/stdc++.h>
using namespace std;


int main()
{
	int x , y;
    cin >> x >> y;
    
    // Apne ko 220 chaiye OK
    // Ceil ko 220 chaiye to uska maximum 100 wale yeins chaiye and then 10 wale 
    // x matlab 100 and y matlab 10
    while(1){
        if(x>=2){
            // x greater then 2 rha matlab 200 and 20 chaiye to y=y-2
            x-=2;
            y-=2;
        }
        else if(x){
            // x is 1 to 100 and remaining 120 y se lenge y=y-12
            x-=1;
            y-=12;
        }
        else{
            // x zero tha to y se 22 lenge y-=22
            y-=22;
        }
        // Y negative hua to Hanako Jita
        if(y<0){
            cout<<"Hanako"<<endl;
            return 0;
        }
        // Repeate the same procedure but in reverse order q ki Hanako first 10 collect kartay then 100
        if(y>=22){
            y-=22;
        }
        else if(y>=12){
            x-=1;
            y-=12;
        }
        else{
            x-=2;
            y-=2;
        }
        if(x<0 || y<0){
            cout << "Ciel" <<endl;
            return 0;
        }
    }
}

