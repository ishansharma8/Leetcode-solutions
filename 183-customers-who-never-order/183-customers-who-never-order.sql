
SELECT name as Customers
from Customers left join Orders on Customers.id=Orders.customerId
WHERE CustomerId IS NULL


