/*========================================
 
 Tutorial by @TheCherno:
 https:www.youtube.com/playlist?list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb

 Example for classes: log messages (error/warning/info)
 https:www.youtube.com/watch?v=3dHBFBw13E0
 
========================================*/


/*==============================
 Shortcut: print on terminal
==============================*/
#include <iostream>
using namespace std;

#define print(x) cout << x << endl




/*====================
 
 Class: log messages
 
====================*/
class Log_class
{


/*==============================
    Public declarations
==============================*/
public:
    
    
    /*==============================
        user_choice > secured_choice
    ==============================*/
    void set_choice(int user_choice)
    {
        secured_choice = user_choice;
    }
    
    
    /*====================
        message levels
    ====================*/
    const int errors = 0;
    const int warnings = 1;
    const int infos = 2;
    
    
    /*====================
        printing methods
    ====================*/
    void error( const char* message )
    {
        if ( secured_choice >= errors )
        cout << "[ERROR]:" << message << endl;
    }
    void warning( const char* message )
    {
        if ( secured_choice >= warnings )
        cout << "[WARNING]:" << message << endl;
    }
    void info( const char* message )
    {
        if ( secured_choice >= infos )
        cout << "[INFO]:" << message << endl;
    }

        
/*====================
    Internal variable:
====================*/
private: int secured_choice = infos;


/*==============================
    END-OF-CLASS: Log messages
==============================*/
};




/*====================
    Main function
 ====================*/
int main()
{


    print("==========");
    print("Welcome");
    print("==========");
    

    Log_class log_object;
    log_object.set_choice(log_object.warnings);
    

    log_object.error("some error");
    log_object.warning("some warning");
    log_object.info("some info");
    
    
    print("==========");
    print("Finished");
    print("==========");
}
