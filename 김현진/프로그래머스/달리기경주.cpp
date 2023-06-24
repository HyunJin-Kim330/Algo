#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int findIndex(vector<string> players, string contants)
{    
    vector<string> playerStr = players;
    
    vector<string>::iterator p = find(playerStr.begin(), playerStr.end(), contants);
    
    return p - playerStr.begin();
}

vector<string> solution(vector<string> players, vector<string> callings) {
    vector<string> answer = players;
    
    for(int i = 0; i < callings.size(); i++) {
        int index = findIndex(answer, callings[i]);
        
        string temp = answer[index];
        answer[index] =  answer[index-1];
        answer[index-1] = temp;
    }
    return answer;
}
