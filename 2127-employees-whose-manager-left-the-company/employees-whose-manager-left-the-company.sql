# Write your MySQL query statement below
SELECT EMPLOYEE_ID FROM EMPLOYEES WHERE SALARY<30000 
AND MANAGER_ID NOT IN (SELECT EMPLOYEE_ID FROM EMPLOYEES) 
ORDER BY EMPLOYEE_ID;