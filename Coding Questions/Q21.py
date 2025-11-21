def calculate_painting_cost():
    interior_cost_per_sqft = 18
    exterior_cost_per_sqft = 12

    num_interior_walls = int(input("Enter the number of interior walls: "))
    num_exterior_walls = int(input("Enter the number of exterior walls: "))

    total_interior_area = 0
    total_exterior_area = 0

    if num_interior_walls > 0:
        print("Enter the surface areas of the interior walls in square feet:")
        for i in range(num_interior_walls):
            area = float(input())
            total_interior_area += area
            
    if num_exterior_walls > 0:
        print("Enter the surface areas of the exterior walls in square feet:")
        for i in range(num_exterior_walls):
            area = float(input())
            total_exterior_area += area

    total_cost = (total_interior_area * interior_cost_per_sqft) + (total_exterior_area * exterior_cost_per_sqft)

    print(f"Total estimated Cost: {total_cost:.1f} INR")

calculate_painting_cost()
