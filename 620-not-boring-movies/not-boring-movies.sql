SELECT ID, MOVIE, DESCRIPTION, RATING  FROM CINEMA
WHERE MOD(ID,2)<>0 AND DESCRIPTION <>'BORING' 
ORDER BY RATING DESC;