class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        hash = {}
        returnarr = []
        for i in strs:
            if "".join(sorted(i)) in hash:
                returnarr[hash["".join(sorted(i))]].append(i)
            else:
                hash["".join(sorted(i))] = len(hash)
                returnarr.append([])
                returnarr[hash["".join(sorted(i))]].append(i)
        return returnarr
