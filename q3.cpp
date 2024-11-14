#include <iostream>
#include <string>
using namespace std;
int main(){
    string binary;
    cout<<"enter a binary number "<<endl;
    cin>>binary;
    int n=binary.length();
    if(n%4!=0){
        int extra=4-(4%3);
        n=n+extra;
        for(int i=0;i<extra;i++){ 
        string zero="0";
        binary=zero + binary;
        }
    }
    

string hexadecimal="";
int j=0;
while(j<n){
    string s="";
    for(int i=0+j;i<4+j;i++){
        s+=binary.at(i);
    }
    if(s=="0000"){
        hexadecimal=hexadecimal+"0";
    }else if(s=="0001"){
        hexadecimal=hexadecimal+"1";
    }else if (s=="0010"){
        hexadecimal=hexadecimal+"2";
    }else if(s=="0011"){
        hexadecimal=hexadecimal+"3";
    }else if(s=="0100"){
        hexadecimal=hexadecimal+"4";
    }else if(s=="0101"){
        hexadecimal=hexadecimal+"5";
    }else if(s=="0110"){
        hexadecimal=hexadecimal+"6";
    }else if(s=="0111"){
        hexadecimal=hexadecimal+"7";
    }else if(s=="1000"){
        hexadecimal=hexadecimal+"8";
    }else if(s=="1001"){
        hexadecimal=hexadecimal+"9";
    }else if(s=="1010"){
        hexadecimal=hexadecimal+"A";
    }else if(s=="1011"){
        hexadecimal=hexadecimal+"B";
    }else if(s=="1100"){
        hexadecimal=hexadecimal="C";
    }else if(s=="1101"){
        hexadecimal=hexadecimal+"D";
    }else if(s=="1110"){
        hexadecimal=hexadecimal+"E";
    }else if (s=="1111"){
        hexadecimal=hexadecimal+"F";
    }
    j=j+4;
}
cout<<hexadecimal;
return 0;
}