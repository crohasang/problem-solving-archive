#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string name) {
    int answer = 0;
    int name_length = name.length();
    int move = name.length() - 1;
    
    for (int i = 0; i < name.length(); i++) {
        answer += min(name[i] - 'A', 'Z' - name[i] + 1);
        
        int next = i + 1;
        while (next < name.length() && name[next] == 'A' ) {
            next++;
        }
        
        // i까지 갔다가, 되돌아오고, 뒤로 간 길이
        move = min(move, i * 2 + name_length - next);
        
        // n - next까지 갔다가, 되돌아오고, i까지감
        move = min(move, (name_length - next) * 2 + i);
        
    }
    
    answer += move;
    
    return answer;
}