
#ifndef MAIN_H // include guard
#define MAIN_H


/* Singleton ------------------------------------------*/
#define VALOR_INICIAL 5
#define VALOR_CLONADO 7

/**
 * @brief Função de testes para o Design Pattern Singleton
 */
void TestSingleton();

/**
 * @brief Função de testes para o Design Pattern Builder [+ Composite]
 */
void TestBuilder();

/**
 * @brief Função de testes para o Design Pattern Prototype
 */
void TestPrototype();

/**
 * @brief Função de testes para o Design Pattern Factory Method
 * 
 */
void TestFactoryMethod();
/*-----------------------------------------------------*/





/* main -----------------------------------------------*/
/**
 * @brief Main function
 * 
 * @param argc 
 * @param argv 
 * @return int 
 */
int main(int argc, char const *argv[]);


#endif