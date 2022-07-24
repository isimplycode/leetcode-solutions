class FoodRatings {
public:
    unordered_map<string,string> types;
    unordered_map<string,int> rt;
    unordered_map<string,set<pair<int,string>>> m;
    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
        for (int i=0; i<size(foods); ++i) {
            m[cuisines[i]].insert({-ratings[i],foods[i]});
            types[foods[i]]=cuisines[i];
            rt[foods[i]]=ratings[i];
        }
    }
    
    void changeRating(string food, int newRating) {
        string cuisine=types[food];
        m[cuisine].erase(m[cuisine].find({-rt[food],food}));
        m[cuisine].insert({-newRating,food});
        rt[food]=newRating;
    }
    
    string highestRated(string cuisine) {
        auto it=m[cuisine].begin();
        return it->second;
    }
};
