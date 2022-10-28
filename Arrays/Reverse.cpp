class Solution {
public:
    int reverse(int x) {
        int r;
        vector<int> v;
        while(x!=0)
        {
            v.push_back(x%10);
            x=x/10;
        }
        int n=0;
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i];
            if(( n > INT_MAX/10 ) || (n < INT_MIN/10))
            {  return 0;}
            n=n*10+v[i];
        }
        return n;
    }
};
