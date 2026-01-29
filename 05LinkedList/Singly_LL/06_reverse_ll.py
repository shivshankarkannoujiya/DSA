class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


class LinkedList:
    def __init__(self):
        self.head = None

    def insert_at_last(self, new_data):
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

    # only ll values
    def reverse_linked_list(self):

        data = []
        temp = self.head

        # step 1: PUT DATA INTO ARRAY
        while temp:
            data.append(temp.data)
            temp = temp.next

        # PUT DATA FROM ARRAY TO LL: START FROM LAST INDEX OF ARRAY
        temp = self.head
        lastIndex = len(data) - 1

        while temp:
            temp.data = data[lastIndex]
            lastIndex -= 1
            temp = temp.next

    def reverse_node(self):
        curr = self.head
        prev = None
        ftr = None

        while curr:
            ftr = curr.next
            curr.next = prev
            prev = curr
            curr = ftr
            
        # loop ended head ko point krwa denge
        self.head = prev


ll = LinkedList()

ll.insert_at_last(10)
ll.insert_at_last(20)
ll.insert_at_last(30)
ll.insert_at_last(40)

ll.print_ll()

# Printing after Reversing values
# ll.reverse_linked_list()
ll.reverse_node()

ll.print_ll()
