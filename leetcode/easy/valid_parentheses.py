# https://leetcode.com/problems/valid-parentheses

def valid_paren(s):
        #edge case
        if len(s) % 2 != 0:
            return False
        
        pairs = [('(', ')'), ('[', ']'), ('{', '}')]
        stack = []
        
        for paren in s:
            if paren == '(' or paren == '[' or paren == '{':
                stack.append(paren)
            else:
                if len(stack) == 0:
                    return False
                elif (stack.pop(), paren) not in pairs:
                    return False
            
        return len(stack) == 0

print(valid_paren('(){{[]}}'))
print(valid_paren('(){{[}}'))  