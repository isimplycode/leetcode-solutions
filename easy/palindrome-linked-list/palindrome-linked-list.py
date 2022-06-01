class Solution(object):
    def isPalindrome(self, head):
        """
        :type head: ListNode
        :rtype: bool
        """
        arr = []
        while head:
            arr.append(head.val)
            head = head.next
        new_arr = reversed(arr)
        return arr == arr[::-1]
