#include<iostream>
#include<string>
using namespace std;
 class Cclass {
   public :
       void setname(string x){
       name=x;
       }  string getname(){
       return name;
       }
 private:
 string name ;

 };
int main(){
Cclass Co;
Co.setname("909090909" );
cout<< Co.getname();
 return 0;
}
