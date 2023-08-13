/* Write your PL/SQL query statement below */

-- Select  p.product_name, s.year,  s.price 
-- from Sales s , Product p where s.product_id = p.product_id;
SELECT P.product_name ,S.year  ,S.price FROM Sales  S LEFT JOIN Product P ON S.product_id =P.product_id 