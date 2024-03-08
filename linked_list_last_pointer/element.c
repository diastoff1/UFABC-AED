#include "element.h"

#include <stdio.h>

void element_print(Element element) {
    printf("%d", element);
}

int element_compare(Element element1, Element elementdois) {
    return element1 - elementdois;
}