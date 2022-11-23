
template <class I>
void my_selection_sort(I begin, I end) {
    I indexMin;
    I index;

    for (auto it = begin; it != end; it++) {
        indexMin = it;
        index = it;
        index++;
        for (auto it2 = index; it2 != end; it2++) {
            if (*it2 < *indexMin) {
                indexMin = it2;
            }
        }

        if (indexMin != it) {
            auto tmp = *indexMin;
            *indexMin = *it;
            *it = tmp;
            
        }
    }
}