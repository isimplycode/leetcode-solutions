class Solution:
    def isValid(self, s: str) -> bool:
        dict = { ")":"(", "]": "[", "}": "{" }
        stack = []
        for i in s:
            if i in [ "{", "[", "(" ]:
                stack.append(i)
                continue
            if len(stack) > 0 and stack.pop() == dict[i]:
                continue
            return False
        if stack == []:
            return True
        return False
