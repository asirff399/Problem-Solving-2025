-- Day 30 Problem No 65

-- 595. Big Countries => https://leetcode.com/problems/big-countries/description/?envType=study-plan-v2&envId=top-sql-50

SELECT name,population,area
FROM World
WHERE population >= 25000000 OR area >= 3000000