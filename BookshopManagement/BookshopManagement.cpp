#include <iostream>
#include <mysql.h>
#include <conio.h>

int main()
{
    MYSQL* connection;
    MYSQL_RES* resultSet;
    MYSQL_ROW row;
    
    
    connection = mysql_init(0);
    connection = mysql_real_connect(connection, "localhost", "root", "root", "bookshop", 3306, NULL, 0);

    if (connection)
    {
        std::cout << "connection established" << std::endl;
        _getch();
    }
    else
    {
        std::cout << "uh oh, no connection" << std::endl;
    }
}