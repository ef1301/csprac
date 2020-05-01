class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> charCount;
        for(char c: s) {
            auto it = charCount.find(c);
            //If we didn't find it
            if(it == charCount.end()) {
                pair<char,int> p(c,1);
                charCount.insert(p);
            } else { //Else we found it
                //pair<char, int>& p = *it;
                //pair<char, int> p = *it; //this would have made a copy as opposed to directly incrementing our second element in the pair
                //p.first++ //would increment the first element, which is char
                //p.second++; //second element in teh pair, which is the int
                it->second++;
            }
        }
        
        for(int i = 0; i < s.size(); i++) {
            auto it = charCount.find(s[i]);
            //pair<char, int> &p = *it;
            if(it->second == 1) {
                return i;
            }
        }
        return -1;
    }
};

// n
// O(n) + O(n-1) + O(n-2) ... O(1) => O(n^2)

//Go through string
//Count the number of itmes each character occurs and throw it into a map
// l->1, e-> 3, c->5
//Iterate through the beginning of the string and check if it occured more than once
    //if so, return teh index
//If we haven't returned anything by the last letter, return -1

//O(n)*O(1) = O(n) //map operation
//O(2n) -> O(n)
