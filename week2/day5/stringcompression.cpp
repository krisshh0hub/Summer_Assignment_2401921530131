class Solution {
public:
    int compress(vector<char>& chars) {

        int n = chars.size();
        int index = 0;
        int i = 0;

        while (i < n) {

            int j = i;

            while (j < n && chars[j] == chars[i])
                j++;

            int count = j - i;

            chars[index++] = chars[i];

            if (count > 1) {

                string cnt = to_string(count);

                for (char c : cnt)
                    chars[index++] = c;
            }

            i = j;
        }

        return index;
    }
};
