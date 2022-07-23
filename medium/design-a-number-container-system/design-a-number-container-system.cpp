class NumberContainers {
public:
    unordered_map<int,set<int>> m;
    unordered_map<int,int> indexes;
    NumberContainers() {
    }
    
    void change(int index, int number) {
        if (indexes.find(index)==indexes.end()) {
            m[number].insert(index);
            indexes[index]=number;
        } else {
            int temp=indexes[index];
            m[temp].erase(index);
            m[number].insert(index);
            indexes[index]=number;
        }
    }
    
    int find(int number) {
        if (m.find(number)==m.end()) return -1;
        else if (!m[number].size()) return -1;
        else return *begin(m[number]);
    }
};
