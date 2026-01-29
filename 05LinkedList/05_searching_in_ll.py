class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


class LinkedList:
    def __init__(self):
        self.head = None

    def insert_at_end(self, new_data):
        new_node = Node(new_data)

        # Empty ll
        if self.head is None:
            self.head = new_node
            return

        temp = self.head
        while temp.next:
            temp = temp.next
        temp.next = new_node

    def print_linked_list(self):
        temp = self.head
        while temp:
            print(str(temp.data) + " ->", end=" ")
            temp = temp.next
        print(None)

    def search_in_ll(self, target):
        temp = self.head

        while temp:
            if temp.data == target:
                return True
            temp = temp.next

        return False


ll = LinkedList()

ll.insert_at_end(10)
ll.insert_at_end(20)
ll.insert_at_end(30)
ll.insert_at_end(40)

ll.print_linked_list()

isPresent = ll.search_in_ll(40)

print("Target value present") if isPresent else print("Target value not present")
