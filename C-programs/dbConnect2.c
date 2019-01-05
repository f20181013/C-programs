#include <stdio.h>                                                                                   
#include <stdlib.h>                                                                                  
#include </usr/include/mysql/mysql.h>                                                                             

int main(void)                                                                                       
{                                                                                                    
  MYSQL *conn;                                                                                       

  if ((conn = mysql_init(NULL)) == NULL)                                                             
  {                                                                                                  
    fprintf(stderr, "Could not init DB\n");                                                 
    return EXIT_FAILURE;                                                                             
  }                                                                                                  
  if (mysql_real_connect(conn, "192.168.1.6", "rohan", "rohan", "employeeschema", 0, NULL, 0) == NULL)             
  {                                                                                                  
    fprintf(stderr, "DB Connection Error\n");                                                        
    return EXIT_FAILURE;                                                                             
  }                                                                                                  
  if (mysql_query(conn, "INSERT INTO test (col1) VALUES ('Rohan')") != 0)                   
  {                                                                                                  
    fprintf(stderr, "Query Failure\n");                                                              
    return EXIT_FAILURE;                                                                             
  }                                                                                                  
  mysql_close(conn);                                                                                 
  return EXIT_SUCCESS;                                                                               
}
