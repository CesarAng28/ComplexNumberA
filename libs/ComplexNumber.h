#include <stdio.h>
#include <stdlib.h>

typedef enum error{
    FAILED, 
    SUCCESS,
}ERROR_CODE;


typedef struct _complex_number ComplexNumber; // Incomplete Data Structure 


ComplexNumber* newComplexNumber(float real, float imag);

// Setter Interfaces

ERROR_CODE setReal(ComplexNumber* number, float real);

ERROR_CODE setImag(ComplexNumber* number, float imag);

// Getter Interfaces

float getReal(ComplexNumber* number);

float getImag(ComplexNumber* number);

ERROR_CODE complexNumberSum(ComplexNumber* operand1, ComplexNumber* operand2, ComplexNumber* result);

ERROR_CODE printComplexNumber(ComplexNumber* to_print);

//Doxygen