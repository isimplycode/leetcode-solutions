class Solution {
public:
    int maximumScore(int a, int b, int c) {
        int res=0;
        while (true) {
            int emptc=0;
            if (a<1)
                emptc++;
            if (b<1)
                emptc++;
            if (c<1)
                emptc++;
            if (emptc>1) break;
            priority_queue<pair<int,char>> pq;
            pq.push({a,'a'});
            pq.push({b,'b'});
            pq.push({c,'c'});
            char f='d',s='d';
            if (pq.top().first>0) {
                f=pq.top().second;
            }
            pq.pop();
            if (pq.top().first>0) {
                s=pq.top().second;
            }
            if (f!='d') {
                switch(f) {
                    case 'a':
                        a--;
                        break;
                    case 'b':
                        b--;
                        break;
                    case 'c':
                        c--;
                        break;
                }
            }
            if (s!='d') {
                switch(s) {
                    case 'a':
                        a--;
                        break;
                    case 'b':
                        b--;
                        break;
                    case 'c':
                        c--;
                        break;
                }
            }
            res++;
        }
        return res;
    }
};
