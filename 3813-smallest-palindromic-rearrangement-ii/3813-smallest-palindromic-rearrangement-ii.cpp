class Solution {
public:
    string smallestPalindrome(string s, int k) {
        const long long MAXV = 1000001LL; // cap since k <= 10^6

        vector<int> count(26, 0);
        for (char c : s) count[c - 'a']++;

        int oddCount = 0;
        for (int i = 0; i < 26; i++)
            if (count[i] % 2 == 1) oddCount++;
        if (oddCount > 1) return "";

        vector<int> halfCount(26, 0);
        char midLetter = 0;
        for (int i = 0; i < 26; i++) {
            halfCount[i] = count[i] / 2;
            if (count[i] % 2 == 1) midLetter = 'a' + i;
        }

        long long totalPerm = countArrangements(halfCount, MAXV);
        if ((long long)k > totalPerm) return "";

        string leftHalf = generateLeftHalf(halfCount, (long long)k, MAXV);

        string result = leftHalf;
        if (midLetter != 0) result += midLetter;
        string rev = leftHalf;
        reverse(rev.begin(), rev.end());
        result += rev;
        return result;
    }

private:
    long long nCk(long long n, long long k, long long MAXV) {
        if (k < 0 || k > n) return 0;
        k = min(k, n - k);
        long long res = 1;
        for (long long i = 1; i <= k; i++) {
            res = res * (n - i + 1) / i;
            if (res >= MAXV) return MAXV;
        }
        return res;
    }

    long long countArrangements(vector<int>& count, long long MAXV) {
        long long total = 0;
        for (int c : count) total += c;
        long long res = 1;
        for (int freq : count) {
            res *= nCk(total, freq, MAXV);
            if (res >= MAXV) return MAXV;
            total -= freq;
        }
        return res;
    }

    string generateLeftHalf(vector<int>& halfCount, long long k, long long MAXV) {
        int halfLen = 0;
        for (int c : halfCount) halfLen += c;

        string left;
        left.reserve(halfLen);

        for (int pos = 0; pos < halfLen; pos++) {
            for (int i = 0; i < 26; i++) {
                if (halfCount[i] == 0) continue;
                halfCount[i]--;
                long long arrangements = countArrangements(halfCount, MAXV);
                if (arrangements >= k) {
                    left.push_back('a' + i);
                    break;
                } else {
                    k -= arrangements;
                    halfCount[i]++;
                }
            }
        }
        return left;
    }
};