# Write your MySQL query statement below
SELECT
ROUND(SUM(CASE WHEN 
 ORDER_DATE = CUSTOMER_PREF_DELIVERY_DATE THEN 1 ELSE 0 END)*100/COUNT(DISTINCT CUSTOMER_ID),2)
AS IMMEDIATE_PERCENTAGE
FROM DELIVERY
WHERE (CUSTOMER_ID,ORDER_DATE) 
IN(SELECT CUSTOMER_ID ,MIN(ORDER_DATE) FROM DELIVERY GROUP BY CUSTOMER_ID);