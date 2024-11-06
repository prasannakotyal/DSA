class Solution:
    def romanToInt(self,s: str) -> int:
        map = {
            'I': 1,
            'V': 5,
            'X': 10,
            'L': 50,
            'C': 100,
            'D': 500,
            'M': 1000
        }
        
        res = map[s[-1]]
        
        for i in range(len(s) - 2, -1, -1):
            if map[s[i]] < map[s[i + 1]]:
                res -= map[s[i]]
            else:
                res += map[s[i]]
        
        return res
