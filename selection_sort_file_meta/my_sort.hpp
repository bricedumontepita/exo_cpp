// Change me instead
// All occurences of XXX need to be replaced with
// something more meaningful

template <class I, class F>
void my_selection_sort(I begin, I end, F cmp) {
    I indexMin;
    I index;

    for (auto it = begin; it != end; it++) {
        indexMin = it;
        index = it;
        index++;
        for (auto it2 = index; it2 != end; it2++) {
            if (cmp(*it2, *indexMin)) {
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