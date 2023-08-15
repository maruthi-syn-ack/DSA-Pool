class Solution {
public:
    string defangIPaddr(string address) {
        string res ="";
        for (auto i : address)
        {
            if (i == '.')
            {
            string c = "[.]";
            res+=c;
            }
            else
            {

            char c =i;
            res+=c;
            }
        }
        return res ;
    }
};