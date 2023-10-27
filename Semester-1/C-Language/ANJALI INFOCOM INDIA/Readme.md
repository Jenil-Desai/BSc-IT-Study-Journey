# Anjali Infocom India Shopping Experience

This code snippet is a program for an online shopping experience. It allows users to select different categories of products, such as smartphones, televisions, laptops, and printers. Users can choose a specific product within each category and enter the quantity they want to purchase. The program calculates the total amount based on the selected products and quantities, applies discounts for certain products, and adds taxes. Finally, it displays the billing details to the user.

## Table of Contents

- [Program Overview](#program-overview)
- [How to Run](#how-to-run)
- [Dependencies](#dependencies)
- [License](#license)

## Program Overview

The program starts by displaying a welcome message and calling the cred() function.
The cred() function prompts the user to enter a password. If the password is correct, the program proceeds to the homepage() function. Otherwise, it allows the user to retry the password or exit the program.
The homepage() function displays the available categories and prompts the user to select one.
Based on the user's selection, the program calls the corresponding function (Smartphone(), Television(), Laptop(), Printer(), or Pass()).
Each category function displays the available products and prompts the user to select one. The program then asks for the quantity of the selected product.
The program calculates the total amount based on the product price and quantity, and updates the total variable.
After each product selection, the program asks the user if they want to buy anything else or proceed to billing.
If the user wants to buy more products, the program returns to the homepage() function. If the user wants to proceed to billing, the program calls the Billing() function.
The Billing() function calculates the discount based on the selected luxe product (if any), adds taxes, and displays the billing details to the user.

## How to Run

To run this program, you need to use Turbo C++ as it is specifically designed to run in this environment. Follow the steps below:

1. Open Turbo C++.
2. Create a new project or file.
3. Copy the program code into the file.
4. Save the file with a ".c" extension.
5. Compile and run the program in Turbo C++.

## Dependencies

- Turbo C++

## License

This program is licensed under the License - see the [LICENSE](LICENSE) file in the program folder for details.
