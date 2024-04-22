#include<iostream>

using namespace std;

bool checkNumber(string str);

int main(){
    while(true){
        string in;
        int inputVar;
        cout<<"enter number between 5 and 10 : ";
        cin>>in;

        if(!checkNumber(in)){
            cout<<"Please Enter a valid number. !! Try again \n";
            continue;
        }

        inputVar =stoi(in);

        if(inputVar<5 || inputVar>10){
            cout<<"you entered "<<inputVar<<" Number must be between 5 and 10 \n";
            continue;
        }
        cout<<"Your inputVar value ("<<inputVar<<") has been accepted \n";
        break;
    }

    return 0;
}

bool checkNumber(string str){
    for(char a:str){
        if(isdigit(a)==0){
            return false;
        }
    }
    return true;
}