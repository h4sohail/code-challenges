# https://leetcode.com/problems/student-attendance-record-i/submissions/

def attendance(s):
        A_count = 0
        for char in s:
            if char == 'A':
                A_count += 1
        if 'LLL' in s:
                return False
        else:
            if A_count <= 1:
                return True
            else:
                return False

print(attendance('PPAL'))
print(attendance('LL'))
print(attendance('LLL'))
