def get_max_profit(prices):
    min_price = float("inf")
    max_profit = 0

    for i in range(len(prices)):
        if prices[i] < min_price:
            min_price = prices[i]
        elif prices[i] - min_price > max_profit:
            max_profit = prices[i] - min_price

    return max_profit


# v2
def max_stock_profit(prices):
    max_profit = 0
    min_purchase_price = prices[0]

    for i in range(1, len(prices)):
        max_profit = max(max_profit, prices[i] - min_purchase_price)
        min_purchase_price = min(min_purchase_price, prices[i])

    return max_profit


if __name__ == "__main__":
    prices = [7, 1, 5, 3, 6, 4]
    max_profit = max_stock_profit(prices)
    print(f"Maximum profit of buy and sell the stock is: {max_profit}")


