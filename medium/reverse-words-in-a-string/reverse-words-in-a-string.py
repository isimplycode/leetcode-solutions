class Solution:
    def reverseWords(self, s: str) -> str:
        words=s.split(" ")
        reversedwords=[]
        for i in range(len(words)-1,-1,-1):
            if (words[i]!=""): 
                reversedwords.append(words[i])
        return " ".join(reversedwords)
