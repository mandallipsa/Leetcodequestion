SELECT MAX(NUM) AS NUM
FROM (
    SELECT NUM
    FROM MYNUMBERS
    GROUP BY NUM
    HAVING COUNT(NUM) = 1
)AS NUM1;