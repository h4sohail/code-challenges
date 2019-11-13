# https://leetcode.com/problems/reverse-words-in-a-string/

def reverseWords(s):
    string = s.strip()
    return ' '.join(string.split()[::-1])

print(reverseWords('  hello world!  '))