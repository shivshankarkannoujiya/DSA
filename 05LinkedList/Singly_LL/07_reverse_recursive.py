class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


class LinkedList:
    def __init__(self):
        self.head = None

    def insert_from_end(self, new_data):
        new_node = Node(new_data)

        if self.head is None:
            self.head = new_node
            return

        temp = self.head
        while temp.next:
            temp = temp.next

        temp.next = new_node

    def print_ll(self):
        temp = self.head
        while temp:
            print(str(temp.data) + " ->", end=" ")
            temp = temp.next
        print(None)

    def reverse_ll_recursively(self, curr, prev):

        if curr is None:
            return prev

        fut = curr.next
        curr.next = prev

        return self.reverse_ll_recursively(fut, curr)

    def reverse(self):
        self.head = self.reverse_ll_recursively(self.head, None)


ll = LinkedList()

ll.insert_from_end(10)
ll.insert_from_end(20)
ll.insert_from_end(30)
ll.insert_from_end(40)

ll.print_ll()

# ll.head =  ll.reverse_ll_recursively(ll.head, None)

ll.reverse()

ll.print_ll()
