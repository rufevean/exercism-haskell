class Luhn:
    def __init__(self, card_num):
        self.flag = False
        self.card_num = card_num
        pass

    def valid(self):
        card_num = self.card_num.replace(" ","")
        flag = self.flag
        arr_num = list(card_num)
        length = len(arr_num)
        if length <=1:
            return False
        for i in range(length-1,-1,-1):
            if not arr_num[i].isdigit():
                return False
            if flag:
                arr_num[i] = int(arr_num[i]) * 2
                if arr_num[i] > 9:
                    arr_num[i] = arr_num[i]-9
            else:
                arr_num[i] = int(arr_num[i])
            flag = not flag
        add = sum(arr_num)
        if not (add % 10):
            return True
        return False
            
