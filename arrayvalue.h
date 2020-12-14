#ifndef __NB_ARRAYVALUE
#define __NB_ARRAYVALUE

#include "nworkbench.h"

class nBlock_ArrayValue: public nBlockSimpleNode<1> {
public:
    nBlock_ArrayValue(uint32_t index, nBlocks_OutputType dataType = OUTPUT_TYPE_INT);
    void triggerInput(nBlocks_Message message);
private:
    uint32_t _index;
};

#endif
