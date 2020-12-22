# nblocks_arrayvalue

ArrayValue receives an array as input, and extracts and returns one of the values as either integer or float.

 *  First parameter is the index in the array to read the value from.
 *  Second parameter is the data type inside the array, and is one of: 
     *  ARRAY_TYPE_INT
     *  ARRAY_TYPE_FLOAT
     *  ARRAY_TYPE_CHAR

The output type for the node will be set automatically based on the data type inside the array.
ARRAY_TYPE_INT and ARRAY_TYPE_CHAR will cause the output to be OUTPUT_TYPE_INT, while
ARRAY_TYPE_FLOAT will cause the output to be OUTPUT_TYPE_FLOAT.