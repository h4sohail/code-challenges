# https://leetcode.com/problems/backspace-string-compare/submissions/

def backspaceCompare(S, T):
    stack_1 = []
    
    if S[0] == '#':
        S = S[1::]
    if T[0] == '#':
        T = T[1::]
        
    for char in S:
        if char != '#':
            stack_1.append(char)
        if char == '#' and len(stack_1) != 0:
            stack_1.pop()

    stack_2 = []
    for char in T:
        if char != '#':
            stack_2.append(char)
        if char == '#' and len(stack_2) != 0:
            stack_2.pop()
    
    
    if stack_1 == stack_2:
        return True
    else:
        return False

S = "ab##"
T = "c#d#"

print(backspaceCompare(S, T))