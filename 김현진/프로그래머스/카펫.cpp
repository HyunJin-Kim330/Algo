#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    
    if(yellow == 1)
    {
        return {3,3};
    }
    
    for(int i = 1; i < yellow; i++)
    {
        if(yellow % i == 0)
        {
            int other = yellow / i;
            int expected = other*2 + (i+2)*2;
            if(expected == brown)
            {
                answer = {other+2, i+2};
                break;
            }
        }
    }
    return answer;
}
