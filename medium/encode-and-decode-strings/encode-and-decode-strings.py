class Solution:
    """
    @param: strs: a list of strings
    @return: encodes a list of strings to a single string.
    """
    def encode(self, strs):
        string = ""
        for i in strs:
            if string == "":
                string += i
            else:
                string += "..." + i
        return string

    """
    @param: str: A string
    @return: dcodes a single string to a list of strings
    """
    def decode(self, str):
        x = str.split('...')
        return x
