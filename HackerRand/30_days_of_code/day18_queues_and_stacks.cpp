class Solution {
public:
  vector<char> queue_, stack;
  int i = 0, j = 0;
  
  void pushCharacter(char ch) {
    stack.resize(stack.size()+1);
    stack[i] = ch;
    i++;
  }

  void enqueueCharacter(char ch) {
    queue_.resize(queue_.size()+1);
    queue_[j] = ch;
    j++;
  }

  char popCharacter() {
    char s = stack[stack.size()-1];
    stack.erase(stack.begin() + stack.size()-1);
    return s;
  }

  char dequeueCharacter() {
    char q = queue_[0];
    queue_.erase(queue_.begin() + 0);
    return q;
  }
};

/* this has passed but its wrong because just compare the first and the last
class Solution {
    public:
        string stack = "", queue = "";

        void pushCharacter(char ch) {
            stack += ch;
        }

        void enqueueCharacter(char ch) {
            queue += ch;   
        }

        char popCharacter() {
            return stack[stack.size()-1]; 
        }

        char dequeueCharacter() {
            return queue[0];
        }
};
*/
