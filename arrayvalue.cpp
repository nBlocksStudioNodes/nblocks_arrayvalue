#include "arrayvalue.h"
#include <string.h>


nBlock_ArrayValue::nBlock_ArrayValue(uint32_t index, nBlock_ArrayValue_ArrayType dataType) {
    _array_type = dataType;
    _index = index;

    outputType[0] = (dataType == ARRAY_TYPE_FLOAT)? OUTPUT_TYPE_FLOAT : OUTPUT_TYPE_INT;
}

void nBlock_ArrayValue::triggerInput(nBlocks_Message message) {
    if (message.dataType == OUTPUT_TYPE_ARRAY) {
        
        if (_array_type == ARRAY_TYPE_INT) {
            uint32_t * int_array = (uint32_t *)(message.pointerValue);
            output[0] = int_array[_index];
            available[0] = 1;
        }
                

        if (_array_type == ARRAY_TYPE_FLOAT) {
            float * float_array = (float *)(message.pointerValue);
            output[0] = PackFloat(float_array[_index]);
            available[0] = 1;
        }
        
        if (_array_type == ARRAY_TYPE_CHAR) {
            char * char_array = (char *)(message.pointerValue);
            output[0] = char_array[_index];
            available[0] = 1;
        }
        
    }

}

