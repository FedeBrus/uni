-- Display french customers

SELECT *
FROM customers c 
WHERE c.Country = "France";

-- Display the number of products supplied by each supplier

SELECT s.SupplierID, COUNT(*)
FROM suppliers s LEFT OUTER JOIN products p ON s.SupplierID = p.SupplierID 
GROUP BY s.SupplierID;

-- Display the total value of the categories of products in our warehouse

SELECT c.CategoryID, SUM(p.UnitPrice * p.UnitsInStock)
FROM categories c LEFT OUTER JOIN products p ON c.CategoryID = p.CategoryID 
GROUP BY c.CategoryID;

-- Display the employees resident in USA

SELECT *
FROM employees e
WHERE e.Country = "USA";

-- Display the number of orders ordered by each customer

SELECT c.CustomerID, COUNT(*)
FROM customers c LEFT OUTER JOIN orders o ON c.CustomerID = o.CustomerID
GROUP BY c.CustomerID;

-- Display the total value of orders made by the different customers

SELECT c.CustomerID, ROUND(SUM((od.UnitPrice - od.Discount) * od.Quantity), 2)
FROM (customers c LEFT OUTER JOIN orders o ON c.CustomerID = o.CustomerID) JOIN `order details` od ON o.OrderID = od.OrderID
GROUP BY c.CustomerID;

-- Display the number of orders made by each employee

SELECT e.EmployeeID, COUNT(*)
FROM employees e LEFT OUTER JOIN orders o ON e.EmployeeID = o.EmployeeID 
GROUP BY e.EmployeeID;

-- Display italian products

SELECT p.ProductID 
FROM products p JOIN suppliers s ON p.SupplierID = s.SupplierID 
WHERE s.Country = "Italy";

-- Display the total income from french orders

SELECT ROUND(SUM((od.UnitPrice - od.Discount) * od.Quantity), 2)
FROM (customers c JOIN orders o ON c.CustomerID = o.CustomerID) JOIN `order details` od ON o.OrderID = od.OrderID 
WHERE c.Country = "France";

-- Display those employees that made more than 3 orders

SELECT e.EmployeeID, COUNT(*) AS OrdersMade
FROM employees e JOIN orders o ON e.EmployeeID = o.EmployeeID 
GROUP BY e.EmployeeID 
HAVING OrdersMade > 3;

-- Display the order with the highest value

SELECT MAX(ROUND((od.UnitPrice - od.Discount) * od.Quantity, 2)) AS OrderTotal
FROM orders o JOIN `order details` od ON o.OrderID = od.OrderID;

-- Display products that have more than 20 units

SELECT *
FROM products p 
WHERE p.UnitsInStock + p.UnitsOnOrder > 20

-- Display customers living in the same country of the employees that followed their order

SELECT DISTINCT c.CustomerID
FROM customers c JOIN orders o ON c.CustomerID = o.CustomerID JOIN employees e ON o.EmployeeID = e.EmployeeID
WHERE c.Country = e.Country;

-- Display beverages ordered more than 5 times

SELECT p.ProductID, COUNT(*)
FROM categories c JOIN products p ON c.CategoryID = p.CategoryID JOIN `order details` od ON p.ProductID = od.ProductID 
WHERE c.CategoryName = "Beverages"
GROUP BY p.ProductID
HAVING COUNT(*) > 5;

-- Display the value of orders made in the 3rd quarter of 1995

SELECT o.OrderID
FROM orders o
WHERE QUARTER(o.OrderDate) = 3;
