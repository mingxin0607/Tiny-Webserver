#include "server/webserver.h"

int main() {
    WebServer webserver(
        1316, 3, 60000, 6,                  
        3306, "root", "root", "webserver",  /* Mysql setting */
        12, false, true, 1, 1024);          
    webserver.Start();
    return 0;
}