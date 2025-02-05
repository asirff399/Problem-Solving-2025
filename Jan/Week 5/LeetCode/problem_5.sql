-- Week 5 -> Day 31 -> Problem 68

-- 1683. Invalid Tweets => https://leetcode.com/problems/invalid-tweets/description/?envType=study-plan-v2&envId=top-sql-50

SELECT tweet_id
FROM Tweets
WHERE CHAR_LENGTH(content) > 15