# Write your MySQL query statement below
UPDATE Salary
SET sex=(case sex
    WHEN 'm' THEN 'f'
    ELSE 'm'
        END);