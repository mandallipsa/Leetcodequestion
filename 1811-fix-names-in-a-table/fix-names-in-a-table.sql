# Write your MySQL query statement below
SELECT USER_ID,
CONCAT(UPPER(LEFT(NAME,1)),LOWER(SUBSTRING(NAME,2,LENGTH(NAME))))AS NAME
FROM USERS
ORDER BY USER_ID;