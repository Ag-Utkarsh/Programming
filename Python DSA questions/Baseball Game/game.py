class Solution:
    def is_integer(self, str):
        """
            Checks if a string is an integer.
            Args:
                string: The string to check.
            Returns:
                True if the string is an integer, False otherwise.
        """
        try:
            int(str)
            return True
        except ValueError:
            return False
    def calPoints(self, operations):
        records = []
        for op in operations:
            if self.is_integer(op):
                records.append(int(op))
            elif op == "+":
                records.append(records[-1] + records[-2])
            elif op == "C":
                records.pop()
            elif op == "D":
                records.append(2 * records[-1])
            else:
                print("Wrong element in the list")
                return
        if records == []:
            return 0
        else:
            return sum(records)
object = Solution()
print(object.calPoints(["1","C"]))
    