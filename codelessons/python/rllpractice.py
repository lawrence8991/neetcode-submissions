 # Step 1: Uncomment/define ListNode ourselves, since we're not on LeetCode
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


# Step 2: A helper to build a list from a normal Python list, e.g. [1,2,3]
def build_linked_list(values):
    head = None
    prev = None
    for v in values:
        node = ListNode(v)
        if head is None:
            head = node
        else:
            prev.next = node
        prev = node
    return head


# Step 3: A helper to print a linked list so you can see what's happening
def print_linked_list(head):
    values = []
    curr = head
    while curr:
        values.append(str(curr.val))
        curr = curr.next
    print(" -> ".join(values) + " -> None")


# Step 4: Build a list and check it prints correctly
head = build_linked_list([1, 2, 3, 4, 5])
print_linked_list(head)   # should print: 1 -> 2 -> 3 -> 4 -> 5 -> None

class Solution: 
    def reverseList(self, head):
        prev = None
        curr = head

        while curr: 
            print("visiting node with value:", curr.val)
            next_node = curr.next
            curr.next = prev
            prev = curr
            curr = next_node
            print(next_node.val) 

        return head #placeholdedr

sol = Solution()
result = sol.reverseList(head)
print_linked_list(result) 


