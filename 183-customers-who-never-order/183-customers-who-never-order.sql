# Write your MySQL query statement below

# select Name as Customers from Customers 
# where id not in (select CustomerId from Orders);

SELECT name as Customers
from Customers left join Orders on Customers.id=Orders.customerId
WHERE CustomerId IS NULL


