#include<iostream>
using namespace std;



class sam{

private :
int value1,value2;
int i,sum,n = 5;


public:
void getvalue(int v1,int v2);
int showvalue(void);
int sumcount(void);


};

 void sam :: getvalue(int valt,int valu){
    value1 = valt;
    value2 = valu;
}

int sam :: showvalue(void){
    return value1 + value2;
}

int sam :: sumcount(void){
    sum = 0;
    for(i=0;i<=n;i++)
    {
        sum += i;
    
    }
      return sum;
}

int main(){

sam s;
s.getvalue(21,34);
cout<<"the result :: "<<s.showvalue()<<endl;
cout<<"the total sum  between 0 to 5 will be :: "<<s.sumcount();

    return 0;
}


