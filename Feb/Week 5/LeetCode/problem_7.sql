-- Week 5 -> Day 32 -> Problem 71

-- 1068. Product Sales Analysis I => https://leetcode.com/problems/product-sales-analysis-i/description/?envType=study-plan-v2&envId=top-sql-50

SELECT p.product_name, s.year, s.price
FROM Sales AS s 
LEFT JOIN Product AS p ON s.product_id = p.product_id