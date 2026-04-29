class TimeMap {
public:
    unordered_map<string, vector<pair<int,string>>>mpp;
    TimeMap() {
    
    }
    
    void set(string key, string value, int timestamp) {
        mpp[key].push_back({timestamp,value});
    }
    
    string get(string key, int timestamp) {
        int ans = -1;
        if(mpp.find(key) == mpp.end()){
            return "";
        }
        else{
            int l=0, r=mpp[key].size()-1;
            while(l<=r){
                int mid = l+(r-l)/2;
                if(mpp[key][mid].first > timestamp){
                    r = mid -1;
                }
                else{
                    ans = mid;
                    l = mid+1;
                }
            }
            if (ans == -1) return "";
        }
        return mpp[key][ans].second;
    }
};
