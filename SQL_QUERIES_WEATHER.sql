SELECT CITY, LENGTH(CITY) FROM STATION
ORDER BY LENGTH(CITY), CITY
LIMIT 1;

SELECT CITY, LENGTH(CITY) FROM STATION
ORDER BY LENGTH(CITY) DESC, CITY
LIMIT 1;


select distinct(city) from station where
city like "a%" or
city like "e%" or
city like "i%" or
city like "o%" or
city like "u%";

select distinct(city) from station where
city like "%A" or
city like "%E" or
city like "%I" or
city like "%O" or
city like "%U";

select distinct(city) from station where
(city like "a%" or
city like "e%" or
city like "i%" or
city like "o%" or
city like "u%") AND (city like "%a" or
city like "%e" or
city like "%i" or
city like "%o" or
city like "%u");
