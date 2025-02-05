-- Day 28 Problem No 60

-- 1731. The Number of Employees Which Report to Each Employee => https://leetcode.com/problems/the-number-of-employees-which-report-to-each-employee/description/?envType=study-plan-v2&envId=top-sql-50

SELECT e1.employee_id, e1.name, COUNT(e2.reports_to) AS reports_count, ROUND(AVG(e2.age)) AS average_age
FROM Employees AS e1
INNER JOIN Employees e2 
ON e2.reports_to = e1.employee_id
GROUP BY e1.employee_id,e1.name
ORDER BY e1.employee_id