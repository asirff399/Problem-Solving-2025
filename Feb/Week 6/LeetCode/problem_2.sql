-- Week 6 Day 38 Problem 81

-- 620. Not Boring Movies => https://leetcode.com/problems/not-boring-movies/description/?envType=study-plan-v2&envId=top-sql-50

SELECT id, movie, description, rating
FROM cinema
WHERE id % 2 != 0 AND description != 'boring'
ORDER BY rating DESC