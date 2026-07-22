from asyncio import selector_events
import math
class Allergies:
    Allergens = {
        "eggs":0,
        "peanuts":1,
        "shellfish":2,
        "strawberries":3,
        "tomatoes":4,
        "chocolate":5,
        "pollen":6,
        "cats":7
    }
    allergens_arr = ["eggs","peanuts","shellfish","strawberries","tomatoes","chocolate","pollen","cats"]
    def __init__(self, score):
        self.score = score % 256;

    def allergic_to(self, item):
        score_arr = [0]*8
        item_arr = [0]*8
        score_bin = bin(self.score)[2:]
        item_score = 2**(self.Allergens[item])
        item_bin= bin(item_score)[2:]
        i = -1 
        for it in item_bin[::-1]:
            item_arr[i] = 1 if it == '1' else 0
            i = i - 1
        j = - 1
        for sb in score_bin[::-1]:
            score_arr[j] = 1 if sb == '1' else 0
            j = j - 1
        for a in range(len(item_arr)):
            if item_arr[a] == 1:
                if score_arr[a] == 0:
                    return False
                else:
                    return True
    @property
    def lst(self):
        score_arr = [0]*8
        score_bin = bin(self.score)[2:]
        j = - 1
        for sb in score_bin[::-1]:
            score_arr[j] = 1 if sb == '1' else 0
            j = j - 1
        res = []
        for idx,ele in enumerate(score_arr):
            if ele == 1:
                res.append(self.allergens_arr[-(idx+1)])
        return res

# Allergies(2).lst