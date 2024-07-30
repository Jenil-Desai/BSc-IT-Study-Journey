def cal_discount(price):
    if price > 100:
        price = price - (price/10)
        return price
    else:
        return price
    
print(cal_discount(200))
print(cal_discount(80))