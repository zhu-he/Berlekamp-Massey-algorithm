#include "BerlekampMassey.cpp"

int main() {
    int arr[12] = {2, 24, 96, 416, 1536, 5504, 18944, 64000, 212992, 702464, 2301952, 7512064};
    BerlekampMassey::init();
    for (int i = 0; i < 12; ++i) {
        BerlekampMassey::update(arr[i]);
    }
    printf("Formule: ");
    BerlekampMassey::output();
    printf("Code: \n");
    BerlekampMassey::output_code_for();
    return 0;
}
