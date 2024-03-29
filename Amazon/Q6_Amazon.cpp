vector<int> max_of_subarrays(int *arr, int n, int k)
   {
    vector<int> v;
       multiset<int,greater<int>> s;
       for(int i=0;i<n;i++){
           s.insert(arr[i]);
           if(s.size()>k){
               s.erase(s.find(arr[i-k]));
           }
           if(s.size()==k){
               v.push_back(*s.begin());
           }
       }
       return v;
   }
