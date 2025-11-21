def find_vehicle_counts(v, W):

    if W < 2 or W % 2 != 0 or v >= W:
        print("INVALID INPUT")
        return
    
    for FW in range(v + 1):
        TW = v - FW
        if 4 * FW + 2 * TW == W:
            print(f"TW = {TW} FW = {FW}")
            return
    
    print("INVALID INPUT")

v = int(input("Enter the total number of vehicles (v): "))
W = int(input("Enter the total number of wheels (W): "))
find_vehicle_counts(v, W)
