# Problem: Convert Date to Binary

class Solution:
    def convertDateToBinary(self, date: str) -> str:
        date_list = date.split("-")
        date_list = [int(n) for n in date_list]
        binary_date = [bin(n).replace("0b", "") for n in date_list]
        return '-'.join(binary_date)
