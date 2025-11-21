def calculate_ticket_cost():
    num_tickets = int(input("Enter the no of ticket: "))

    if num_tickets < 5 or num_tickets > 40:
        print("Minimum of 5 and Maximum of 40 Tickets")
        return

    refreshment = input("Do you want refreshment (y/n): ").strip().lower()
    coupon_code = input("Do you have coupon code (y/n): ").strip().lower()
    circle = input("Enter the circle (k/q): ").strip().lower()

    if circle not in ('k', 'q'):
        print("Invalid Input")
        return

    ticket_price = 75 if circle == 'k' else 150
    total_cost = num_tickets * ticket_price

    if num_tickets > 20:
        total_cost *= 0.9

    if coupon_code == 'y':
        total_cost *= 0.98

    if refreshment == 'y':
        total_cost += num_tickets * 50

    print(f"Ticket cost: {total_cost:.2f}")


calculate_ticket_cost()
