/* Write your PL/SQL query statement below */
Select eu.unique_id as unique_id ,e.name as name 
from Employees e left join EmployeeUNI eu on e.id = eu.id
