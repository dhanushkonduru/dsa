PRICE_PER_PIZZA = 100
PRICE_PER_PUFF = 20
PRICE_PER_COOLDRINK = 10

num_pizzas = int(input("Enter the no of pizzas bought: "))
num_puffs = int(input("Enter the no of puffs bought: "))
num_cooldrinks = int(input("Enter the no of cool drinks bought: "))

total_price = (num_pizzas * PRICE_PER_PIZZA) + (num_puffs * PRICE_PER_PUFF) + (num_cooldrinks * PRICE_PER_COOLDRINK)

print("\nBill Details")
print(f"No of pizzas: {num_pizzas}")
print(f"No of puffs: {num_puffs}")
print(f"No of cooldrinks: {num_cooldrinks}")
print(f"Total price = {total_price}")
print("ENJOY THE SHOW!!!")
