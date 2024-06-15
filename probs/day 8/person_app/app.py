import sqlite3 

def list_all():
    con = sqlite3.connect("person_db.sqlite3")
    cur = con.cursor()
    sql = "SELECT * FROM people"
    sqlResult  = cur.execute(sql)
    people = sqlResult.fetchall()
    print(people)

list_all()