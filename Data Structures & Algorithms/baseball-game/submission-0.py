class Solution:
    def calPoints(self, operations: List[str]) -> int:
        stack = []
         
        for op in operations:
            if op == "+":
                #add a nee score which is sum of prior 2 scores
                stack.append(stack[-1]+stack[-2])
            elif op == "D":
                #add a new score double to prior score
                stack.append(stack[-1]*2)
            elif op == "C":
                #invalidate / remove prior score
                stack.pop()
            else:
                #add the new score 
                stack.append(int(op))
        return sum(stack)