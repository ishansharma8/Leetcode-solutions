class MyCalendar {
public:
    MyCalendar() {
        
    }
    vector<pair<int,int>>books;
    
    bool book(int start, int end) {
        for(pair<int,int>p:books){
            if(!(start>=p.second || end<=p.first))return false;
        }
        books.push_back({start,end});
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */