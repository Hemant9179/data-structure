#include <iostream>
#include <map>
#include <unordered_map>
#include<string.h>
using namespace std;

int main()
{
  unordered_map<string, int> s;
  // insert data

  pair<string, int> p("Hemant", 1);
  s.insert(p);

  pair<string, int> p1("Chaurasiya", 2);
  s.insert(p1);
  //   2
  s["Kumar"] = 5;

  //   print
  cout << s.at("Hemant") << endl;
  cout << s.at("Chaurasiya") << endl;
  cout << s["Kumar"] << endl;
  cout << s["unknown"] << endl;
  cout<<" size "<<s.size()<<endl;

  if(s.count("unknown")>0){
    cout<<" unknown is present  "<<endl;
  }
  // erase
  s.erase("unknown");
  cout<<" size "<<s.size()<<endl;
  if(s.count("unknown")>0){
    cout<<" unknown is present  "<<endl;
  }
  return 0;
}