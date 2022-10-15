public:
    int strStr(string haystack, string needle) {
      int  n=needle.size();
        if(needle==" "){
            return 0;
        }
        int pos=haystack.find(needle);
       if (pos != string::npos){
       return pos;
      
          
        }
        return -1;
    }
};
