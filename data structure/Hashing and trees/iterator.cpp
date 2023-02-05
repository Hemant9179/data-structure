#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;
int main()
{
  unordered_map<string,int>ourmap;
    ourmap["hemant"]=1; 
    ourmap["hemant1"]=100; 
    ourmap["hemant2"]=200; 
    ourmap["hemant3"]=300; 
    ourmap["hemant4"]=400; 
    ourmap["hemant5"]=500; 


      unordered_map<string,int>::iterator it = ourmap.begin();
     
     while(it!=ourmap.end()){
        cout<<" key "<<it->first<<" value : "<<it->second<<endl;
        it++;
        cout<<endl;
     }


 return 0;
}