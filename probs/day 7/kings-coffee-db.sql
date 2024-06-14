CREATE DATABASE queens_coffee_db;

USE queens_coffee_db;

//items: id, name, price, item_size, description
//sale_bills: id, bill_no, date, bill_amount
//sale_items: id, bill_id, item_id, price
//users: id, username, password
CREATE TABLE users(
    id INTEGER primary key auto_increment, 
    username VARCHAR(255) not null, 
    password VARCHAR(50) not null
);  
SELECT * FROM users;
DESC users;
INSERT INTO users (username, password) 
            VALUES('tapan','3456');
INSERT INTO users (username, password) 
            VALUES('swathi','7654');
INSERT INTO users (username, password) 
            VALUES('joshton','1234');            