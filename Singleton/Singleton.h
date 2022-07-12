#define INITIAL_VALUE 0

class Singleton
{
private:
    static Singleton *instance_;
    int value_;
    Singleton(int value);
public:

/**
 * @brief Destroy the Singleton object
 * It is public so this way we can use unique_ptr
 */
    ~Singleton();
/**
 * @brief Get the Instance object
 * 
 * @param value 
 * @return Singleton* 
 */
    static Singleton *getInstance(int value);

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