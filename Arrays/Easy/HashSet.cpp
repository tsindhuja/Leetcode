class MyHashSet {
public:
    vector<int> v;
    MyHashSet() {
        
    }
    
    void add(int key) {
        bool flag = true;
        for(int i=0; i<v.size(); i++){
            if(v[i] == key){
                flag = false;
                break;
            }
        }
        if(flag)
            v.push_back(key);
    }
    
    void remove(int key) {
        for(int i=0; i<v.size(); i++){
            if(key == v[i]){
                v.erase(v.begin()+i);
            }
        }
    }
    
    bool contains(int key) {
        for(int i=0; i<v.size(); i++){
            if(key == v[i]){
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