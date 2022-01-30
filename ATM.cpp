#include <iostream>
using namespace std;
int main(){
    int x ;
    double y;
    cin>>x>>y;
    if(x%5==0 && x<=(y-0.5)){
        y = y-(x+0.5);
        printf("%.2lf",y);
    }
    else{
        printf("%.2lf",y);;
    }
    return 0;
}

// int main() {
//     int w;
//     float ac_bl;
//     cin>>w;
//     cin>>ac_bl;
//     if(w%5==0 && w<=ac_bl-0.5){
//         cout<<((ac_bl-w)-(0.5));
//     }
//     else{
//         cout<<ac_bl;
//     }
// 	return 0;
// }

