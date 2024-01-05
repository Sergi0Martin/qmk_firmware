RGB_MATRIX_EFFECT(Base)
RGB_MATRIX_EFFECT(Symbols)
RGB_MATRIX_EFFECT(Functions)
RGB_MATRIX_EFFECT(QMK)

#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS

bool Base(effect_params_t* params) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);

    for (uint8_t i = 0; i < 54; i++) {
        RGB_MATRIX_TEST_LED_FLAGS();
        rgb_matrix_set_color(i, 0x00, 0xFF, 0xFF); // Azul cian     
    }

    rgb_matrix_set_color(6, 0xF4, 0x02, 0xFF); // Morado
    rgb_matrix_set_color(13, 0xF4, 0x02, 0xFF);
    rgb_matrix_set_color(14, 0xF4, 0x02, 0xFF);

    rgb_matrix_set_color(33, 0xF4, 0x02, 0xFF);
    rgb_matrix_set_color(40, 0xF4, 0x02, 0xFF);
    rgb_matrix_set_color(41, 0xF4, 0x02, 0xFF);

    return led_max < RGB_MATRIX_LED_COUNT;
}

bool Symbols(effect_params_t* params) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);
    
    for (uint8_t i = led_min; i < led_max; i++) {
        RGB_MATRIX_TEST_LED_FLAGS();
        rgb_matrix_set_color(i, 0xF4, 0x02, 0xFF);        
    }

    // for (uint8_t i = 1; i < 42; i++) {
    //     RGB_MATRIX_TEST_LED_FLAGS();
    //     rgb_matrix_set_color(i, 0xE8, 0xBE, 0x3C);        
    // }

    // for (uint8_t i = 16; i < 24; i++) {
    //     RGB_MATRIX_TEST_LED_FLAGS();
    //     rgb_matrix_set_color(i, 0x12, 0xC2, 0x00);        
    // }

    // rgb_matrix_set_color(1, 0x00, 0x54, 0xFF);
    // rgb_matrix_set_color(2, 0x00, 0x54, 0xFF);
    // rgb_matrix_set_color(3, 0xFF, 0x66, 0x00);
    // rgb_matrix_set_color(4, 0xFF, 0x00, 0x00);
    // rgb_matrix_set_color(5, 0xFF, 0x66, 0x00);
    // rgb_matrix_set_color(6, 0x00, 0xFF, 0x18);

    return led_max < RGB_MATRIX_LED_COUNT;
}

bool Functions(effect_params_t* params) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);
    
    for (uint8_t i = led_min; i < led_max; i++) {
        RGB_MATRIX_TEST_LED_FLAGS();
        rgb_matrix_set_color(i, 0xEC, 0xFF, 0x00);        
    }

    // for (uint8_t i = led_min; i < led_max; i++) {
    //     RGB_MATRIX_TEST_LED_FLAGS();
    //     rgb_matrix_set_color(i, 0x00, 0x00, 0x00);        
    // }

    // for (uint8_t i = 1; i < 13; i++) {
    //     RGB_MATRIX_TEST_LED_FLAGS();
    //     rgb_matrix_set_color(i, 0xE8, 0xBE, 0x3C);        
    // }

    // for (uint8_t i = 16; i < 24; i++) {
    //     RGB_MATRIX_TEST_LED_FLAGS();
    //     rgb_matrix_set_color(i, 0x12, 0xC2, 0x00);        
    // }

    // rgb_matrix_set_color(1, 0x00, 0x54, 0xFF);
    // rgb_matrix_set_color(2, 0x00, 0x54, 0xFF);
    // rgb_matrix_set_color(3, 0xFF, 0x66, 0x00);
    // rgb_matrix_set_color(4, 0xFF, 0x00, 0x00);
    // rgb_matrix_set_color(5, 0xFF, 0x66, 0x00);
    // rgb_matrix_set_color(6, 0x00, 0xFF, 0x18);

    return led_max < RGB_MATRIX_LED_COUNT;
}

bool QMK(effect_params_t* params) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);
    
    for (uint8_t i = led_min; i < led_max; i++) {
        RGB_MATRIX_TEST_LED_FLAGS();
        rgb_matrix_set_color(i, 0xFF, 0x04, 0x08);        
    }
    // for (uint8_t i = led_min; i < led_max; i++) {
    //     RGB_MATRIX_TEST_LED_FLAGS();
    //     rgb_matrix_set_color(i, 0x00, 0x00, 0x00);        
    // }

    // for (uint8_t i = 16; i < 20; i++) {
    //     RGB_MATRIX_TEST_LED_FLAGS();
    //     rgb_matrix_set_color(i, 0xCC, 0x00, 0xFF);        
    // }

    // rgb_matrix_set_color(1, 0x00, 0x54, 0xFF);
    // rgb_matrix_set_color(2, 0x00, 0x54, 0xFF);
    // rgb_matrix_set_color(3, 0xFF, 0x66, 0x00);
    // rgb_matrix_set_color(4, 0xFF, 0x00, 0x00);
    // rgb_matrix_set_color(5, 0xFF, 0x66, 0x00);
    // rgb_matrix_set_color(6, 0x00, 0xFF, 0x18);

    return led_max < RGB_MATRIX_LED_COUNT;
}

#endif  // RGB_MATRIX_CUSTOM_EFFECT_IMPLS