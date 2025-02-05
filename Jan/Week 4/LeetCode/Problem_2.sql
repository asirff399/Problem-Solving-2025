-- Day 23 Problem No 49

-- 570. Managers with at Least 5 Direct Reports => https://leetcode.com/problems/managers-with-at-least-5-direct-reports/description/?envType=study-plan-v2&envId=top-sql-50

SELECT name
FROM Employee
WHERE id IN (
    SELECT managerID
    FROM Employee
    GROUP BY managerID
    Having count(*) >= 5
)