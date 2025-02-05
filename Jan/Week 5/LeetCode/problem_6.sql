-- Week 5 -> Day 31 -> Problem 69

-- 1378. Replace Employee ID With The Unique Identifier => https://leetcode.com/problems/replace-employee-id-with-the-unique-identifier/?envType=study-plan-v2&envId=top-sql-50

SELECT eq.unique_id,e.name
FROM Employees AS e
LEFT JOIN EmployeeUNI AS eq
ON e.id = eq.id 