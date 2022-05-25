class Node:
    def __init__(self, value, next_):
        self.val = value
        self.next = next_

class MyLinkedList:

    def __init__(self):
        self.head = None

    def get(self, index: int) -> int:
    	if not self.head: return -1
    	root = self.head
    	while root and index:
    		root = root.next
    		index -= 1
    	return root.val if root else -1

    def addAtHead(self, val: int) -> None:
        new = Node(val, None)
        if self.head == None:
            self.head = new
        else:
            new.next = self.head
            self.head = new

    def addAtTail(self, val: int) -> None:
        new = Node(val, None)
        if self.head == None:
            self.head = new
        else:
            curr = self.head
            prev = curr
            while curr != None:
                prev = curr
                curr = curr.next
            prev.next = new

    def addAtIndex(self, index: int, val: int) -> None:
        if index == 0:
            if self.head:
                new = Node(val, self.head)
                self.head = new
            else:
                self.head = Node(val, None)
        else:
            if self.head == None:
                return
            curr = self.head
            prev = curr
            while curr != None and index > 0:
                prev = curr
                curr = curr.next
                index -= 1
            if curr == None:
                if index > 0:
                    return
                prev.next = Node(val, None)
            else:
                prev.next = Node(val, curr)

    def deleteAtIndex(self, index: int) -> None:
        if self.head == None:
            return
        else:
            if index == 0:
                self.head = self.head.next
            else:
                curr = self.head
                prev = curr
                while curr != None and index > 0:
                    prev = curr
                    curr = curr.next
                    index -= 1
                if curr == None:
                    prev.next = None
                else:
                    prev.next = curr.next

