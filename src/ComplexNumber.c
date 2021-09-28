#include <stdio.h>
#include <stdlib.h>

#include "../libs/ComplexNumber.h"


struct _complex_number{
    float real;
    float imag;
}; // Complete Data Structure


ComplexNumber* newComplexNumber(float real, float imag){
    ComplexNumber* new_number = NULL;

    new_number = malloc(sizeof(ComplexNumber));
    new_number->real = real;
    new_number->imag = imag;
    return new_number;
}

ERROR_CODE setReal(ComplexNumber* number, float real){
    if(number)number->real = real;
    return SUCCESS;
}


ERROR_CODE setImag(ComplexNumber* number, float imag){
    if(number)number->imag = imag;
    return SUCCESS;
}


float getReal(ComplexNumber* number){
    return number->real;
}


float getImag(ComplexNumber* number){
    return number->imag;
}

ERROR_CODE printComplexNumber(ComplexNumber* to_print){
    printf("Complex Number = %f + i %f", getReal(to_print), getImag(to_print));
    return SUCCESS;
}


ERROR_CODE complexNumberSum(ComplexNumber* operand1, ComplexNumber* operand2, ComplexNumber* result){
    if(!result)return FAILED;
    result->real = operand1->real +operand2->real;
    result->imag = operand1->imag +operand2->imag;
    return SUCCESS;
}