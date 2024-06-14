CREATE DATABASE queens_coffee_db;

USE queens_coffee_db;

-- items: id, name, price, item_size, description
-- sale_bills: id, bill_no, date, bill_amount
-- sale_items: id, bill_id, item_id, price
-- users: id, username, password
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

-- -------------------------------------
/* items: id, name, price, item_size, description
             ('coffee', 20.0, 'small', 'small coffee - premium filter'),
             ('tea', 15.0,    'small', 'small tea'),
             ('coffee', 40.0, 'large', 'large coffee - premium filter'),
             ('snacks', 18.0, 'small', 'small snacks')
*/
-- -------------------------------------
DESC items;
SELECT * FROM items;
CREATE TABLE items (
    id INTEGER primary key auto_increment,
    name VARCHAR(512) not null,
    price FLOAT not null DEFAULT(0.0),
    item_size VARCHAR(50) not null,
    description VARCHAR(1024) not null
);
INSERT INTO items(name, price, item_size, description)
    values ('coffee', 20.0, 'small', 'small coffee - premium filter'),
             ('tea', 15.0,    'small', 'small tea'),
             ('coffee', 40.0, 'large', 'large coffee - premium filter'),
             ('snacks', 18.0, 'small', 'small snacks');

UPDATE items 
SET price = 25.0
WHERE name='tea' and item_size='small'; 
--  we cannot update the row using non-keys

UPDATE items 
SET price = 25.0
WHERE id=2; -- -small tea price update

SELECT * FROM items;

-- display all coffee
SELECT * FROM items WHERE name='coffee';

-- display all tea
SELECT * FROM items WHERE name='tea';

-- display product items whose price <= 20
SELECT * FROM items WHERE price<=20;

-- < <= > >= != =    IN LIKE BETWEEN
-- display items whose description contains word 'premium'
SELECT * FROM items WHERE description like '%premium%';

-- display items whose prices are 18 OR 40 
SELECT * FROM items WHERE price=18 OR price=40;

SELECT * FROM items WHERE price IN (18,40);
-- display items whose item size is small
SELECT * FROM items WHERE item_size='small'













