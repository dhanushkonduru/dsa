def find_minimum_discount_items():
    n = int(input("Enter no of items: "))
    if n <= 0 or n > 20:
        print("Invalid Range")
        return
    min_discount = float('inf')
    items_with_min_discount = []

    for _ in range(n):
        line = input("Enter item name, price, discount percentage (comma separated): ").strip()
        item_name, price, discount_percentage = line.split(',')
        price = int(price)
        discount_percentage = int(discount_percentage)
        
        discount = (price * discount_percentage) / 100
  
        if discount < min_discount:
            min_discount = discount
            items_with_min_discount = [item_name]
        elif discount == min_discount:
            items_with_min_discount.append(item_name)

    for item in items_with_min_discount:
        print(item)

find_minimum_discount_items()
