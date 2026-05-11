class MyHashSet {
private:
    static const int buckets = 1000;
    vector<vector<int>> ans;

    int hash(int key){
        return key % buckets;
    }

public:
    MyHashSet() {
        ans.resize(buckets);
    }
    
    void add(int key) {
        int h = hash(key);
        for(int x : ans[h]){
            if(x==key){
                return;
            }
        }
        ans[h].push_back(key);
    }
    
    void remove(int key) {
        int h = hash(key);
        for(int i = 0; i < ans[h].size(); i++) {
            if(ans[h][i] == key) {
                ans[h].erase(ans[h].begin() + i);
                return;
            }
        }
    }
    
    bool contains(int key) {
        int h = hash(key);
        for(int i = 0; i<ans[h].size(); i++){
            if(key == ans[h][i]){
                return true;
            }
        }
        return false;
        
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */