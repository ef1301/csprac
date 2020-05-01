class Solution {
public:
  //Utilizes 2 sets
  /*vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    //you don't need 2 sets but 1 is necessary
    set<int> s1(nums1.begin(), nums1.end());
    set<int> s2(nums2.begin(), nums2.end());
    set<int> output;
    for (auto it = s1.begin(); it != s1.end(); ++it) {
      int val = *it; //The iterator is a pointer to the value inside the set
      //int val = it //it would be the address of the value
      if(s2.find(val) != s2.end()) {
	output.insert(val);
      }
    }
    return vector<int>(output.begin(), output.end());
    }*/
  
  //Runtime: 4ms; Memory: 7.5MB
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        //you don't need 2 sets but 1 is necessary
        set<int> output;   
        if (nums1.size() >= nums2.size()) {
            set<int> s1(nums1.begin(), nums1.end());
            for (int val: nums2) {
                if(s1.find(val) != s1.end()) {
                    output.insert(val);
                }
            }
            return vector<int>(output.begin(), output.end());
        }
        else {
            set<int> s2(nums2.begin(), nums2.end());
            for (int val: nums1) {
                if(s2.find(val) != s2.end()) {
                    output.insert(val);
                }   
            }
            return vector<int>(output.begin(), output.end());
        }
    }

};
