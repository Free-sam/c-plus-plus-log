#include<iostream>
using namespace std;

class om{


    private:
    double lenth,width;
    double area;


    protected:
    int id_value = 77483;


    public:
    double printarea(void);
    double printlenth(void);
    double printwidth(void);
    void takevalues(double l, double w);
};

 class baby : public om{

    public:
 
 void display()
 {
    cout<<"the vlaue will be :: "<<id_value;
 }

 };

double om :: printarea(void){
    return lenth * width;
}
double om :: printlenth(void){
    return lenth;
}
double om :: printwidth(void){
    return width;
}

void om :: takevalues(double l,double w){
    lenth = l;
    width = w;
    cout<<"the taken values are ::"<<l<<" and  "<<w<<endl;
}

int main(){

om q;
baby kp;
q.takevalues(8,9);

cout<<"the area will be :: "<<q.printarea()<<endl;
cout<<"the lenth will be :: "<<q.printlenth()<<endl;
cout<<"the width will be :: "<<q.printwidth()<<endl;
kp.display();

    return 0;
}