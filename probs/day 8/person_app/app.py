import sqlite3 

def list_all():
    con = sqlite3.connect("person_db.sqlite3")
    cur = con.cursor()
    sql = "SELECT * FROM people"
    sqlResult  = cur.execute(sql)
    people = sqlResult.fetchall()
    print(people)

def create_person():
    first_name = input('first name:')
    last_name = input('last name:')
    con = sqlite3.connect("person_db.sqlite3")
    cur = con.cursor()
    #sql = '''INSERT INTO people(first_name, last_name)
#VALUES('%s','%s')'''%(first_name,last_name)
    sql = f'''INSERT INTO people(first_name, last_name)
VALUES('{first_name}','{last_name}')'''
    sqlResult  = cur.execute(sql)
    con.commit()
    print('person is created successfully.')

    

msg = '''Choices are
1-create
2-list all
3-edit
4-delete
5-exit app
Your Choice:'''
choice = int(input(msg))
while(choice!=5):
    if choice == 1:
        create_person() 
    elif choice == 2:
        list_all()
    elif choice == 3:
        pass 
    elif choice == 4:
        pass 
    choice = int(input(msg))

print('End of people application.')