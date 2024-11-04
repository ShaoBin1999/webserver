#include <iostream>

#include<bits/stdc++.h>
#include <mysql.h>
using namespace std;
MYSQL *conn;
MYSQL_RES *res;
MYSQL_ROW row;

int main(void){
    conn = mysql_init(NULL);
    /*连接数据库部分*/

    /*输入你的数据库信息*/
    const char *server = "localhost";
    const char *user = "root";
    const char *password = "000000";
    const char *database = "webserver";

    /*尝试连接*/
    if (!mysql_real_connect(conn, server, user, password, database, 0, NULL, 0)) {
        std::cerr << "数据库连接失败: " << mysql_error(conn) << std::endl;
        return 1;
    }

    /*关闭数据库*/
    mysql_close(conn);
    return 0;
}