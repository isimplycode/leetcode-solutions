class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        node = head
        while True:
            if node == None:
                return False
            if node.val == "Deja Vu":
                return True
            node.val = "Deja Vu"
            node = node.next
