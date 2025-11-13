#include<iostream>
using namespace std;
int main(){
    cout<<"Enter marks : ";
    int n;
    cin>>n;
    // if(n>=91){
    //     cout<<"Excellent";
    // }
    // if(n>=81 && n<91){
    //     cout<<"very good";
    // }
    // if(n>=71 && n<81){
    //     cout<<"good";
    // }
    // if(n>=61 && n<71){
    //     cout<<"can do better";
    // }
    // if(n>=51 && n<61){
    //     cout<<"average";
    // }
    // if(n>=41 && n<51){
    //     cout<<"below average";
    // }
    // if(n<41){
    //     cout<<"Fail";
    // }

//     if(n>=91){
//         cout<<"Excellent";
//     }
//     else{
//         if(n>=81){
//             cout<<"Very good";
//         }
//         else{
//             if(n>=71){
//                 cout<<"good";
//             }
//             else{
//                 if(n>=61){
//                     cout<<"can do better";   // nested
//                 }
//                 else{
//                     if(n>=51){
//                         cout<<"average";
//                     }
//                     else{
//                         if(n>=41){
//                             cout<<"below average";
//                         }
//                         else{
//                             cout<<"fail";
//                         }
//                     }
//                 }
//             }
//         }
     
//     }


if(n>=91){
    cout<<"Excellent";
}
else if(n>=81){
    cout<<"Very good";
}
else if(n>=71){
    cout<<"Good";   //else if
}
else if(n>=61){
    cout<<"can do better";
}
else if(n>=51){
     cout<<"average";
}
else if(n>=41){
    cout<<"below average";
}
else{
    cout<<"fail";
}
}
    
