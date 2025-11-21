def find_maximum_marks():
    num_semesters = int(input("Enter no of semesters: "))
    
    for semester in range(1, num_semesters + 1):
        num_subjects = int(input(f"Enter no of subjects in {semester} semester: "))
        
        max_marks = -1  
        marks = []
        print(f"Marks obtained in semester {semester}:")
        for _ in range(num_subjects):
            mark = int(input())
            
            if mark < 0 or mark > 100:
                print("You have entered invalid mark.")
                return
            
            marks.append(mark)
        
        max_marks = max(marks)
        
        print(f"Maximum mark in {semester} semester: {max_marks}")

find_maximum_marks()
