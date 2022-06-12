class Solution:
    def strongPasswordCheckerII(self, password: str) -> bool:
        if len(password) < 8:
            return False
        ref = "abcdefghijklmnopqrstuvwxyz"
        lower = 0
        upper = 0
        digit = 0
        special = 0
        spec = "!@#$%^&*()-+"
        for i in range(0,len(password), 1):
            if password[i] in ref:
                lower = 1
            if password[i] in ref.upper():
                upper = 1
            if password[i] in "1234567890":
                digit = 1
            if password[i] in spec:
                special = 1
            if i > 0:
                if password[i] == password[i-1]:
                    return False
        if lower == 1 and upper == 1 and digit == 1 and special == 1:
            return True
        return False
