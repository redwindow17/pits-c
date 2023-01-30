struct term {
    int coefficient;
    int exponent;
    struct term *next;
};

struct polynomial {
    struct term *head;
};

void add_term(struct polynomial *p, int coefficient, int exponent) {
    struct term *new_term = malloc(sizeof(struct term));
    new_term->coefficient = coefficient;
    new_term->exponent = exponent;
    new_term->next = NULL;

    if (p->head == NULL) {
        p->head = new_term;
    } else {
        struct term *current = p->head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = new_term;
    }
}

struct polynomial add_polynomials(struct polynomial p1, struct polynomial p2) {
    struct polynomial result;
    result.head = NULL;

    struct term *current1 = p1.head;
    struct term *current2 = p2.head;
    while (current1 != NULL && current2 != NULL) {
        if (current1->exponent > current2->exponent) {
            add_term(&result, current1->coefficient, current1->exponent);
            current1 = current1->next;
        } else if (current1->exponent < current2->exponent) {
            add_term(&result, current2->coefficient, current2->exponent);
            current2 = current2->next;
        } else {
            add_term(&result, current1->coefficient + current2->coefficient, current1->exponent);
            current1 = current1->next;
            current2 = current2->next;
        }
    }

    while (current1 != NULL) {
        add_term(&result, current1->coefficient, current1->exponent);
        current1 = current1->next;
    }

    while (current2 != NULL) {
        add_term(&result, current2->coefficient, current2->exponent);
        current2 = current2->next;
    }

    return result;
}

