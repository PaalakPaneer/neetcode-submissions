class MyHashMap {

private:
    static const int buckets = 1000;
    vector<vector<pair<int,int>>> ans;

    int hash(int key){
        return key % buckets;
    }

public:
    MyHashMap() {
        ans.resize(buckets);
    }
    
    void put(int key, int value) {
        int h = hash(key);
        for(auto &x : ans[h]){
            if(x.first == key){
                x.second = value;
                return;
            }
        }
        ans[h].push_back({key,value});
    }
    
    int get(int key) {
        int h = hash(key);
        for(auto &x : ans[h]){
            if(x.first == key){
                return x.second;
            }
        }
        return -1;
    }
    
    void remove(int key) {
        int h = hash(key);
        for(int i = 0; i < ans[h].size(); i++){
            if(ans[h][i].first == key){
                ans[h].erase(ans[h].begin() + i);
                return;
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */