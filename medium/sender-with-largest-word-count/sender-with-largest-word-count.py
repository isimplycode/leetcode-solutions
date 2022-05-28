#solved in contest
class Solution:
    def largestWordCount(self, messages: List[str], senders: List[str]) -> str:
        hashmap = {}
        for i in range(0, len(messages), 1):
            x = messages[i].split(" ")
            if senders[i] in hashmap:
                hashmap[senders[i]] += len(x)
            else:
                hashmap[senders[i]] = len(x)
        maxval = 0
        person = ""
        for i in hashmap:
            if hashmap[i] > maxval:
                person = i
                maxval = hashmap[i]
            elif hashmap[i] == maxval:
                if i > person:
                    person = i
        return person
