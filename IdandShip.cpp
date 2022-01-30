#include <iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    for( int i=0;i<T;i++){
        char c;
        cin>>c;
        if(c == 'B' or c =='b'){
            cout<<"BattleShip";
        }
        else if(c == 'C' or c =='c'){
            cout<<"Cruiser";
        }
        else if(c == 'D' or c =='d'){
            cout<<"Destroyer";
        }
        else if(c == 'F' or c =='f'){
            cout<<"Frigate";
        }
        
    }
    return 0;
}