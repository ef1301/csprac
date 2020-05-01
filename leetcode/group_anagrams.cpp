class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagrams;
        vector<vector<string>> output;
        //Map setup
        for(string word: strs) {
            string key = word;
            sort(key.begin(), key.end());
            
            auto it = anagrams.find(key);
            // If didn't find the key
            if (it == anagrams.end()) {
                vector<string> words;
                words.push_back(word);
                std::pair<string, vector<string>> entry(key, words);
                anagrams.insert(entry);
            } else { // key was found
                (it->second).push_back(word);
            }
        }
        
        //Going through our map and putting the values into the output vector
        for (auto it = anagrams.begin(); it != anagrams.end(); ++it) {
            output.push_back(it->second);
        }
        
        return output;
    }
};

// ['eat', 'tea', 'ate']
// eat -> aet
// tea -> aet
// ate -> aet
// aet -> ['eat', 'tea', 'ate']

// Interate through strs
// For each string, create a key by sorting the letters
    // Add string to map using the key we created
// For each value in our map, append it to our result and return
