#define INITIAL_VALUE 0

class Singleton
{
private:
    static Singleton *instance_;
    int value_;
    Singleton(int value);
    ~Singleton();
public:
/**
 * @brief Get the Instance object
 * 
 * @param value 
 * @return Singleton* 
 */
    static Singleton *GetInstance(int value);

/**
 * @brief Get the Value object
 * 
 * @return int 
 */
    int getValue();

/**
 * @brief Test print just to check the instance
 * 
 */
    void printTest();
};