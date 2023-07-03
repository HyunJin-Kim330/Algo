#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    sort(people.begin(), people.end());
    int index = 0;

    for(int i = people.size()-1; i >= index; i--)
    {
        if(i == index)
        {
            answer++;
            break;
        }
      
        if((people[i] + people[index]) <= limit)
        {
            index++;
        }
        answer++;
    }    
    return answer;
}
