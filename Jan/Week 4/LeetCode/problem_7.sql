-- Day 27 Problem No 58

-- 1934. Confirmation Rate => https://leetcode.com/problems/confirmation-rate/description/?envType=study-plan-v2&envId=top-sql-50

SELECT s.user_id, 
COALESCE(
    ROUND(
        SUM(c.action = 'confirmed') / count(c.user_id),2)
        ,0) AS confirmation_rate
FROM Signups AS s
LEFT JOIN Confirmations AS c
ON s.user_id = c.user_id
GROUP BY s.user_id