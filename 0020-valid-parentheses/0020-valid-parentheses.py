class Solution:
    def isValid(self, s: str) -> bool:
        stack = []

        for ch in s:

            # Opening bracket
            if ch in "({[":
                stack.append(ch)

            # Closing bracket
            else:
                if not stack:
                    return False

                if ch == ')' and stack[-1] != '(':
                    return False

                if ch == '}' and stack[-1] != '{':
                    return False

                if ch == ']' and stack[-1] != '[':
                    return False

                stack.pop()

        return len(stack) == 0

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna