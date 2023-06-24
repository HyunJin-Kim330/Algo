#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    map<string, int> yearningMap;
    
    for(int i = 0; i < name.size(); i++) {
        yearningMap.insert({name[i], yearning[i]});
    }
    
    for(int i = 0; i < photo.size(); i++) 
    {
        int tempResult = 0;
        for(int j = 0; j < photo[i].size(); j++)
        {
            string key = photo[i][j];
            tempResult += yearningMap[key];
        }
        answer.push_back(tempResult);
    }
    
    
    return answer;
}
