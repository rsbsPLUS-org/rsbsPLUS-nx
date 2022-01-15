template<typename T>
static T proc_map(T value, 
                              T istart, 
                              T istop, 
                              T ostart, 
                              T ostop) {
    return ostart + (ostop - ostart) * ((value - istart) / (istop - istart));
}