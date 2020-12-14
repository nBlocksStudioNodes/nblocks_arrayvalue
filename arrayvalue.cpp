#include "arrayvalue.h"
#include <string.h>


nBlock_ArrayValue::nBlock_ArrayValue(uint32_t index, nBlocks_OutputType dataType) {
    outputType[0] = dataType;
    _index = index;
}

void nBlock_ArrayValue::triggerInput(nBlocks_Message message) {
    if (message.dataType == OUTPUT_TYPE_ARRAY) {
        switch (message.dataType) {
            case OUTPUT_TYPE_INT:
                output[0] = message.intValue;
                available[0] = 1;
                break;

            case OUTPUT_TYPE_FLOAT:
                output[0] = PackFloat(message.floatValue);
                available[0] = 1;
                break;
        }
    }

}

