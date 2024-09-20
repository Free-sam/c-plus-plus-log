#include<iostream>
using namespace std;

class sam{                              //oops//
    private: 
     int value1,value2;

    public:
    void setvalue(int data1,int data2);
    int showvalue(void);

};

void sam :: setvalue(int data1,int data2){
    value1 = data1;
    value2 = data2;
}
int sam :: showvalue(void){
    return value1 * value2;
}

int main(){
sam a;              //object createion//
a.setvalue(34,76);
cout<<"the value will be :: "<<a.showvalue();
    return 0;
}