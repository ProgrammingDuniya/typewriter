#include<iostream>
#include<conio.h>
#include<windows.h>

using namespace std;
int main(){
    int i ;
    string str = "hit like button if you like this video";
    for (i=0 ; str[i] != '\0' ; i++){
        cout<<str[i];
        Sleep(100);
    }
    return 0;
}