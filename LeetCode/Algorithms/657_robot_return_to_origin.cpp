class Solution {
public:
    bool judgeCircle(string moves) {
      int l, r, u, d, side, front;
      l = r = u = d = side = front = 0;
        
      for(unsigned int i = 0; i < moves.size(); i++) {
        if(moves[i] == 'U') { u++; }
        else if(moves[i] == 'D') { d++; }
        else if(moves[i] == 'L') { l++; }
        else if(moves[i] == 'R') { r++; }
      }
      
      side = abs(l-r);
      front = abs(u - d);
      
      if(side != 0 || front != 0) return false;
      else return true;
        
    }
};
