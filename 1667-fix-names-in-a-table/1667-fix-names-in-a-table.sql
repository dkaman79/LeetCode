# Write your MySQL query statement below
SELECT user_id, CONCAT_WS('',UCASE(SUBSTR(name, 1, 1)),LCASE(SUBSTR(name, 2))) as name
FROM Users

ORDER BY user_id