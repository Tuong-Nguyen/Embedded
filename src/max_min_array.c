//
// Created by nctuong on 7/6/2017.
//

void max_min(int *begin, int *end, int **max, int **min) {
    if (begin == end) {
        *max = 0;
        *min = 0;
        return;
    }

    *max = begin;
    *min = begin;
    begin++;
    while (begin != end) {
        if (*begin > **max) {
            *max = begin;
        }
        if (*begin < **min) {
            *min = begin;
        }
        begin++;
    }
}
