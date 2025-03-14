-- Week 6 Day 42 Problem 82

-- 1251. Average Selling Price => https://leetcode.com/problems/average-selling-price/description/?envType=study-plan-v2&envId=top-sql-50

SELECT p.product_id, IFNULL(ROUND(SUM(p.price * u.units) / SUM(u.units),2),0) AS average_price
FROM Prices AS p
LEFT JOIN UnitsSold AS u 
ON p.product_id = u.product_id 
AND u.purchase_date 
BETWEEN p.start_date AND p.end_date
GROUP BY p.product_id