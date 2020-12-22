#ifndef __NB_ARRAYVALUE
#define __NB_ARRAYVALUE

#include "nworkbench.h"

enum nBlock_ArrayValue_ArrayType {
    ARRAY_TYPE_INT,
    ARRAY_TYPE_FLOAT,
    ARRAY_TYPE_CHAR
};
    

class nBlock_ArrayValue: public nBlockSimpleNode<1> {
public:
    nBlock_ArrayValue(uint32_t index, nBlock_ArrayValue_ArrayType dataType = ARRAY_TYPE_INT);
    void triggerInput(nBlocks_Message message);
private:
    uint32_t _index;
    uint32_t _array_type;
};

#endif
