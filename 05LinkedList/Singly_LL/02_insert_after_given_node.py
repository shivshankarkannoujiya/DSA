class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


class LinkedList:
    def __init__(self):
        self.head = None

    # Insert at front (helper to build list)
    def insert_at_front(self, new_data):
        new_node = Node(new_data)
        new_node.next = self.head
        self.head = new_node

    def insert_at_given_node(self, prev_node, new_data):
        """Insert new_data after the given node in O(1) time."""
        if prev_node is None:
            print("Given node must be available inside LL")
            return

        new_node = Node(new_data)
        new_node.next = prev_node.next
        prev_node.next = new_node

    # Print linked list
    def print_linkedlist(self):
        temp = self.head
        while temp:
            print(str(temp.data) + " ->", end=" ")
            temp = temp.next
        print("NULL")

    # Find node by value (returns Node reference)
    def find(self, value):
        temp = self.head
        while temp:
            if temp.data == value:
                return temp  # node found
            temp = temp.next

        return None

    # Insert after a given node
    def insert_at_user_given_node(self, prev_node, new_data):
        if prev_node is None:
            print("Node not found in LL")
            return
        new_node = Node(new_data)
        new_node.next = prev_node.next
        prev_node.next = new_node


LL = LinkedList()
LL.insert_at_front(10)
LL.insert_at_front(20)
LL.insert_at_front(30)
LL.insert_at_front(40)

print("Initial Linked List:")
LL.print_linkedlist()

# User input
after_value = int(input("\nInsert AFTER which value: "))
new_value = int(input("Enter new value to insert: "))

prev_node = LL.find(after_value)
LL.insert_at_user_given_node(prev_node, new_value)

print("\nLinked List after insertion:")
LL.print_linkedlist()
# print("After inserting at given node...")
# LL.insert_at_given_node(LL.head.next, 90)
# LL.print_linkedlist()
