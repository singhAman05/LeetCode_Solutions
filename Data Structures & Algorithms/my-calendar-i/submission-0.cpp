class MyCalendar {
public:
    unordered_map<int,int> mp;
    MyCalendar() {
        
    }
    
    bool book(int startTime, int endTime) {
        for(auto it : mp){
            int st = it.first;
            int et = it.second;
            cout<<st<<" "<<et;
            if((st<=startTime && et>startTime) || (startTime<=st && st<endTime)) return 0;
        }
        mp[startTime] = endTime;
        return 1;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(startTime,endTime);
 */