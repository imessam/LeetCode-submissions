class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        
        stack = []
        total = 0
        
        def evaluate(digits,token):
            first,second = int(digits[-1]),int(digits[-2])
            
            if token == "+":
                return first+second
            elif token == "-":
                return first - second
            elif token == "*":
                return first * second
            return int(first / second)
        
        for token in tokens:
            if token in ["+","-","*","/"]:
                digits = []
                for _ in range(2):
                    digits.append(stack.pop())
                stack.append(str(evaluate(digits,token)))
            else:
                stack.append(token)
        return stack[0]