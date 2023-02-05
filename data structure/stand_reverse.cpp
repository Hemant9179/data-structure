#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int>v){
    int s=0,e=v.size()-1;

    while(s<=e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}
void print(vector<int>v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{
vector<int>v;

v.push_back(23);
v.push_back(56);
v.push_back(45);
v.push_back(12);
v.push_back(48);
v.push_back(52);


vector<int>ans=reverse(v);

cout<<"Reverse array :";
print(ans);


 return 0;
}