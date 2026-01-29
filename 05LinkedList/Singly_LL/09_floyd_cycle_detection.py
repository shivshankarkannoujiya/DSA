class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


class LinkedList:
    def __init__(self):
        self.head = None

    def detect_cycle(self):
        slow = self.head
        fast = self.head

        while fast is not None and fast.next is not None:
            slow = slow.next
            fast = fast.next.next

            if slow == fast:
                return True

        return False


ll = LinkedList()

a = Node(1)
b = Node(2)
c = Node(3)
d = Node(4)

ll.head = a

a.next = b
b.next = c
c.next = d
# d.next = None
d.next = b  # cycle created

print(ll.detect_cycle())
