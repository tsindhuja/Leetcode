class MyHashMap {
public:
   vector<pair<int,int>>v[100];
    

    MyHashMap() 
    {
          
    }
    
    void put(int key, int value) 
    {
        int index=key%100;
        if(get(key)==-1)
        {
            v[index].push_back({key,value});
        }
        else
        {
            remove(key);
            put(key,value);
        }
    }
    
    int get(int key) 
    {
        int index=key%100;
        for(auto it:v[index])
        {
            if(it.first==key)
                return it.second;
        }
        return -1;
    }
    
    void remove(int key) 
    {
        int index=key%100;
        for(int i=0;i<v[index].size();i++)
        {
            if(v[index][i].first==key)
            {
                v[index].erase(v[index].begin()+i);
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