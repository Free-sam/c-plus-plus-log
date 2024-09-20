#include<iostream>
class sam{
    private:
     int i,j;


     public:
     double showvalue(void);
     void setvalue(double a,double b);
     void sum(double x);
};

double sam :: showvalue(void){
    return i+j;
}
void sam :: setvalue(double a,double b){
    i = a;
    j = b;
}
void sam :: sum(double x){
        x = i+j;
}



int main(){
sam s;
s.setvalue(90,12);
s.sum();
s.showvalue();

    return 0;
}