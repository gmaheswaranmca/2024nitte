-- all actors
SELECT * FROM actor;

-- actors whose first_name starts with 'A'
SELECT * FROM actor WHERE first_name LIKE 'A%';

-- actors whose first_name ends with 'A'
SELECT * FROM actor WHERE first_name LIKE '%A';

-- actors whose first_name contains with 'LI'
SELECT * FROM actor WHERE first_name LIKE '%LI%';

-- all films
select * from film;

-- files of duration 3
SELECT * FROM film WHERE rental_duration=3;

-- list distinct rental_duration 
SELECT rental_duration FROM film;
SELECT DISTINCT rental_duration FROM film;
SELECT DISTINCT rental_duration FROM film
ORDER BY rental_duration;

-- list all films whose duration is either 3 or 5
SELECT * FROM film WHERE rental_duration IN (3,5);

-- list all distinct ratings
SELECT DISTINCT rating FROM film;

-- list film whose ratings are PG or G or R
SELECT * FROM film WHERE rating IN('PG','G','R')

-- list distint length
SELECT DISTINCT length from film order by length;

-- list films whose length is around 1 hour 
SELECT * FROM film WHERE length <= 60;

-- list films whose features of Trailers or Deleted Scenes
SELECT * FROM film 
WHERE special_features LIKE '%Trailers%'
	OR special_features LIKE '%Deleted Scenes%';
    
-- sort the films based on rental_rate ascending
SELECT * FROM film ORDER BY rental_rate;

-- sort the films based on rental_rate descending
SELECT * FROM film ORDER BY rental_rate DESC;

-- count the films of the rating 'G'
SELECT count(*) FROM film WHERE rating='G';

-- count number of films 
SELECT count(*) FROM film;

-- find total value
SELECT sum(replacement_cost) FROM film;

-- find averge value
SELECT avg(replacement_cost) FROM film;

-- find min cost, max cost 
SELECT min(replacement_cost), max(replacement_cost)
FROM film;

-- aggregation functions: count, sum, avg, min, max 

-- display customers' first_name, city_name, country_name 
	-- display customers' first_name, address_id
    SELECT first_name, address_id 
    FROM customer;
	-- display customers' first_name, address_id, 
		-- postal_code 
	/* SELECT customer.first_name, 
		customer.address_id, 
        address.postal_code 
    FROM customer CROSS JOIN address; */
    
    SELECT customer.first_name, 
		customer.address_id, 
        address.postal_code 
    FROM customer INNER JOIN address
		ON (customer.address_id=address.address_id);
    
SELECT count(*) FROM customer; -- 599 
SELECT count(*) FROM address; -- 603 

	--  display customers' first_name, city_name, country_name 
SELECT customer.first_name, city.city as city_name, 
	country.country  as country_name
FROM 
  customer  
  INNER JOIN address ON (customer.address_id=address.address_id)
  INNER JOIN city ON (address.city_id=city.city_id)
  INNER JOIN country 	ON (city.country_id=country.country_id)