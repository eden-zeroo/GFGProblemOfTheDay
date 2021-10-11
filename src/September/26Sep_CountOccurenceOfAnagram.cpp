class Solution{
public:
    bool equal(vector<int> &A, vector<int> &B)
    {
        for(int i = 0 ; i < 26; i++)
        {
            if(A[i] != B[i])
                return false;
        }
        return true;
    }
	int search(string pat, string txt) {
	    // code here
	    vector<int> freq1(26), freq2(26);
	    int n = txt.size(), m = pat.size(), res = 0;
	    for(int i = 0; i < m; i++)
	    {
	        freq1[pat[i] - 'a']++;
	        freq2[txt[i] - 'a']++;
	    }
	    for(int i = m; i < n; i++)
	    {
	        if(equal(freq1, freq2))
	            res++;
	        freq2[txt[i] - 'a']++;
	        freq2[txt[i - m] - 'a']--;
	    }
	    if(equal(freq1, freq2))
	        res++;
	    return res;
	}

};