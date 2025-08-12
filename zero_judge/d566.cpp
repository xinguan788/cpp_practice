#include<iostream>
#include<string>
#include<map>
#include<vector>
using namespace std;
struct person{
    bool AC = false;
    bool noAC = false;
};
int main(){
    string name, condition;
    int n;
    while(cin >> n){
        map<string, person> people;
        vector<pair<string, person>> peopleList;
        for(int i = 0; i < n; i++){
            cin >> name >> condition;
            peopleList.push_back({name, {condition == "AC", condition != "AC"}});
        }
        for(int i = n - 1; i >= 0; i--){
            if(peopleList[i].second.AC){
                people[peopleList[i].first].AC = true;
            }else{
                if(!people[peopleList[i].first].AC){
                    people[peopleList[i].first].noAC = true;
                }
            }
        }
        int acCount = 0, noAcCount = 0;
        for(auto &p : people){
            if(p.second.AC){
                acCount++;
                if(p.second.noAC){
                    noAcCount++;
                }
            }
        }
        cout << (acCount - noAcCount) * 100 / acCount << "%\n";
        
    }
}