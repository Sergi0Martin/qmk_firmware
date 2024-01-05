RGB_MATRIX_EFFECT(Base)
RGB_MATRIX_EFFECT(Symbols)
RGB_MATRIX_EFFECT(Functions)
RGB_MATRIX_EFFECT(QMK)
#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS

bool Base(effect_params_t* params) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);

    for (uint8_t i = led_min; i < led_max; i++) {
        RGB_MATRIX_TEST_LED_FLAGS();
        rgb_matrix_set_color(i, 0xFF, 0xC1, 0x00);        
    }

    rgb_matrix_set_color(1, 0x00, 0x54, 0xFF);
    rgb_matrix_set_color(2, 0x00, 0x54, 0xFF);
    rgb_matrix_set_color(3, 0xFF, 0x66, 0x00);
    rgb_matrix_set_color(4, 0xFF, 0x00, 0x00);
    rgb_matrix_set_color(5, 0xFF, 0x66, 0x00);
    rgb_matrix_set_color(6, 0x00, 0xFF, 0x18);

    return led_max < DRIVER_LED_TOTAL;
}

bool Symbols(effect_params_t* params) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);
    
    for (uint8_t i = led_min; i < led_max; i++) {
        RGB_MATRIX_TEST_LED_FLAGS();
        rgb_matrix_set_color(i, 0x00, 0x00, 0x00);        
    }

    for (uint8_t i = 1; i < 13; i++) {
        RGB_MATRIX_TEST_LED_FLAGS();
        rgb_matrix_set_color(i, 0xE8, 0xBE, 0x3C);        
    }

    for (uint8_t i = 16; i < 24; i++) {
        RGB_MATRIX_TEST_LED_FLAGS();
        rgb_matrix_set_color(i, 0x12, 0xC2, 0x00);        
    }

    rgb_matrix_set_color(1, 0x00, 0x54, 0xFF);
    rgb_matrix_set_color(2, 0x00, 0x54, 0xFF);
    rgb_matrix_set_color(3, 0xFF, 0x66, 0x00);
    rgb_matrix_set_color(4, 0xFF, 0x00, 0x00);
    rgb_matrix_set_color(5, 0xFF, 0x66, 0x00);
    rgb_matrix_set_color(6, 0x00, 0xFF, 0x18);

    return led_max < DRIVER_LED_TOTAL;
}

bool Functions(effect_params_t* params) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);
    
    for (uint8_t i = led_min; i < led_max; i++) {
        RGB_MATRIX_TEST_LED_FLAGS();
        rgb_matrix_set_color(i, 0x00, 0x00, 0x00);        
    }

    for (uint8_t i = 1; i < 13; i++) {
        RGB_MATRIX_TEST_LED_FLAGS();
        rgb_matrix_set_color(i, 0xE8, 0xBE, 0x3C);        
    }

    for (uint8_t i = 16; i < 24; i++) {
        RGB_MATRIX_TEST_LED_FLAGS();
        rgb_matrix_set_color(i, 0x12, 0xC2, 0x00);        
    }

    rgb_matrix_set_color(1, 0x00, 0x54, 0xFF);
    rgb_matrix_set_color(2, 0x00, 0x54, 0xFF);
    rgb_matrix_set_color(3, 0xFF, 0x66, 0x00);
    rgb_matrix_set_color(4, 0xFF, 0x00, 0x00);
    rgb_matrix_set_color(5, 0xFF, 0x66, 0x00);
    rgb_matrix_set_color(6, 0x00, 0xFF, 0x18);

    return led_max < DRIVER_LED_TOTAL;
}

bool QMK(effect_params_t* params) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);

    for (uint8_t i = led_min; i < led_max; i++) {
        RGB_MATRIX_TEST_LED_FLAGS();
        rgb_matrix_set_color(i, 0x00, 0x00, 0x00);        
    }

    for (uint8_t i = 16; i < 20; i++) {
        RGB_MATRIX_TEST_LED_FLAGS();
        rgb_matrix_set_color(i, 0xCC, 0x00, 0xFF);        
    }

    rgb_matrix_set_color(1, 0x00, 0x54, 0xFF);
    rgb_matrix_set_color(2, 0x00, 0x54, 0xFF);
    rgb_matrix_set_color(3, 0xFF, 0x66, 0x00);
    rgb_matrix_set_color(4, 0xFF, 0x00, 0x00);
    rgb_matrix_set_color(5, 0xFF, 0x66, 0x00);
    rgb_matrix_set_color(6, 0x00, 0xFF, 0x18);

    return led_max < DRIVER_LED_TOTAL;
}

// bool LoL(effect_params_t* params) {
//     RGB_MATRIX_USE_LIMITS(led_min, led_max);

//     for (uint8_t i = led_min; i < led_max; i++) {
//         RGB_MATRIX_TEST_LED_FLAGS();
//         rgb_matrix_set_color(i, 0x00, 0x00, 0x00);        
//     }

//     for (uint8_t i = 16; i < 20; i++) {
//         RGB_MATRIX_TEST_LED_FLAGS();
//         rgb_matrix_set_color(i, 0xCC, 0x00, 0xFF);        
//     }

//     rgb_matrix_set_color(33, 0x00, 0x54, 0xFF);
//     rgb_matrix_set_color(34, 0x00, 0x54, 0xFF);
//     rgb_matrix_set_color(4, 0xFF, 0x66, 0x00);
//     rgb_matrix_set_color(50, 0xFF, 0x00, 0x00);
//     rgb_matrix_set_color(4, 0xFF, 0x66, 0x00);
//     rgb_matrix_set_color(35, 0x00, 0xFF, 0x18);

//     return led_max < DRIVER_LED_TOTAL;
// }

// bool Mtgarena(effect_params_t* params) {
//     RGB_MATRIX_USE_LIMITS(led_min, led_max);

//     for (uint8_t i = led_min; i < led_max; i++) {
//         RGB_MATRIX_TEST_LED_FLAGS();
//         rgb_matrix_set_color(i, 0x00, 0x00, 0x00);
//     }

//     rgb_matrix_set_color(15, 0x8A, 0x00, 0xFF);
//     rgb_matrix_set_color(39, 0xFF, 0xCF, 0x00);
//     rgb_matrix_set_color(44, 0x06, 0x00, 0xFF);
//     rgb_matrix_set_color(59, 0x06, 0x00, 0xFF);
//     rgb_matrix_set_color(28, 0xFF, 0x00, 0x00);
//     rgb_matrix_set_color(61, 0xC6, 0x00, 0xFF);
//     rgb_matrix_set_color(62, 0xFF, 0x00, 0x00);
//     rgb_matrix_set_color(46, 0x12, 0xFF, 0x00);
//     rgb_matrix_set_color(16, 0x00, 0xCC, 0xFF);

//     return led_max < DRIVER_LED_TOTAL;
// }

// bool Valorant(effect_params_t* params) {
//     RGB_MATRIX_USE_LIMITS(led_min, led_max);

//     for (uint8_t i = led_min; i < led_max; i++) {
//         RGB_MATRIX_TEST_LED_FLAGS();
//         rgb_matrix_set_color(i, 0x00, 0x00, 0x00);
//     }

//     rgb_matrix_set_color(17, 0xFF, 0x00, 0x00);
//     rgb_matrix_set_color(31, 0xFF, 0x00, 0x00);
//     rgb_matrix_set_color(32, 0xFF, 0x00, 0x00);
//     rgb_matrix_set_color(33, 0xFF, 0x00, 0x00);
//     rgb_matrix_set_color(59, 0xFF, 0x00, 0x00);
//     rgb_matrix_set_color(44, 0xFF, 0x00, 0x00);
//     rgb_matrix_set_color(62, 0xFF, 0x00, 0x00);
//     rgb_matrix_set_color(19, 0x00, 0xFF, 0x0C);
//     rgb_matrix_set_color(35, 0xF6, 0x00, 0xFF);
//     rgb_matrix_set_color(21, 0xDF, 0x92, 0xE2);
//     rgb_matrix_set_color(34, 0x92, 0xE2, 0xD8);
//     rgb_matrix_set_color(16, 0xFF, 0xC0, 0x00);
//     rgb_matrix_set_color(18, 0xFF, 0xC0, 0x00);
//     rgb_matrix_set_color(48, 0xFF, 0xC0, 0x00);
//     rgb_matrix_set_color(47, 0xFF, 0xC0, 0x00);
//     rgb_matrix_set_color(22, 0xFF, 0x00, 0xF6);
//     rgb_matrix_set_color(46, 0xFF, 0x00, 0xF6);
//     rgb_matrix_set_color(49, 0xFF, 0x00, 0xF6);
//     rgb_matrix_set_color(30, 0xFF, 0xFF, 0xFF);
//     rgb_matrix_set_color(52, 0xFF, 0xFF, 0xFF);

//     for (uint8_t i = 1; i < 5; i++) {
//         RGB_MATRIX_TEST_LED_FLAGS();
//         rgb_matrix_set_color(i, 0xFF, 0x84, 0x00);
//     }

//     return led_max < DRIVER_LED_TOTAL;
// }

// bool Mtgo(effect_params_t* params) {
//     RGB_MATRIX_USE_LIMITS(led_min, led_max);

//     for (uint8_t i = led_min; i < led_max; i++) {
//         RGB_MATRIX_TEST_LED_FLAGS();
//         rgb_matrix_set_color(i, 0x00, 0x00, 0x00);
//     }

//     rgb_matrix_set_color(59, 0x06, 0x00, 0xFF);
//     rgb_matrix_set_color(16, 0x00, 0xCC, 0xFF);
//     rgb_matrix_set_color(46, 0x12, 0xFF, 0x00);
//     rgb_matrix_set_color(1, 0x06, 0x00, 0xFF);
//     rgb_matrix_set_color(2, 0x06, 0x00, 0xFF);
//     rgb_matrix_set_color(3, 0x06, 0x00, 0xFF);
//     rgb_matrix_set_color(4, 0x06, 0x00, 0xFF);
//     rgb_matrix_set_color(5, 0x06, 0x00, 0xFF);
//     rgb_matrix_set_color(6, 0x06, 0x00, 0xFF);
//     rgb_matrix_set_color(7, 0x06, 0x00, 0xFF);
//     rgb_matrix_set_color(8, 0x06, 0x00, 0xFF);
//     rgb_matrix_set_color(17, 0x8A, 0x00, 0xFF);    
//     rgb_matrix_set_color(18, 0xFF, 0xCF, 0x00);
//     rgb_matrix_set_color(0, 0xFF, 0x00, 0x00); 

//     return led_max < DRIVER_LED_TOTAL;
// }

#endif  // RGB_MATRIX_CUSTOM_EFFECT_IMPLS