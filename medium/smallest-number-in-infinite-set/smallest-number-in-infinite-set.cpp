class SmallestInfiniteSet {
public:
    set<int, greater<int>> s;
    SmallestInfiniteSet() {
        for (int i=1; i<1001; ++i) {
            s.insert(i);
        }
    }
    int popSmallest() {
        auto it=s.end();
        it--;
        int val=*it;
        s.erase(it);
        return val;
    }
    void addBack(int num) {
        s.insert(num);
    }
};
