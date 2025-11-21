def check_course_availability():
    n = int(input("Enter no of courses: "))
    if n <= 0 or n > 20:
        print("Invalid Range")
        return

    print("Enter course names:")
    course_names = []
    for _ in range(n):
        course_name = input()
        course_names.append(course_name)
    
    course_to_search = input("Enter the course to be searched: ")

    if course_to_search in course_names:
        print(f"{course_to_search} course is available")
    else:
        print(f"{course_to_search} course is not available")

check_course_availability()
