#include "arrayvalue.h"
#include <string.h>


nBlock_ArrayValue::nBlock_ArrayValue(uint32_t index, nBlocks_OutputType dataType) {
    outputType[0] = dataType;
    _index = index;
}

void nBlock_ArrayValue::triggerInput(nBlocks_Message message) {
    if (message.dataType == OUTPUT_TYPE_ARRAY) {
        if (outputType[0] == OUTPUT_TYPE_INT) {
            uint32_t * int_array = (uint32_t *)(message.pointerValue);
            output[0] = int_array[_index];
            available[0] = 1;
        }
                

        if (outputType[0] == OUTPUT_TYPE_FLOAT) {
            float * float_array = (float *)(message.pointerValue);
            output[0] = PackFloat(float_array[_index]);
            available[0] = 1;
        }
    }

}

