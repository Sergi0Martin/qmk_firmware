RGB_MATRIX_EFFECT(Base)
RGB_MATRIX_EFFECT(Symbols)
RGB_MATRIX_EFFECT(Functions)
RGB_MATRIX_EFFECT(QMK)

// void set_bottom_row_color(uint8_t r, uint8_t g, uint8_t b){
//     rgb_matrix_set_color(6, r, g, b); 
//     rgb_matrix_set_color(13, r, g, b); 
//     rgb_matrix_set_color(14, r, g, b); 

//     rgb_matrix_set_color(33, r, g, b); 
//     rgb_matrix_set_color(40, r, g, b); 
//     rgb_matrix_set_color(41, r, g, b); 
// }

#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS

bool Base(effect_params_t* params) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);

    for (uint8_t i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
        RGB_MATRIX_TEST_LED_FLAGS();
        rgb_matrix_set_color(i, 0x00, 0xFF, 0xFF); // Azul cian     
    }

    rgb_matrix_set_color(6, 0xF4, 0x02, 0xFF); 
    rgb_matrix_set_color(13, 0xF4, 0x02, 0xFF);
    rgb_matrix_set_color(14, 0xF4, 0x02, 0xFF);

    rgb_matrix_set_color(33, 0xF4, 0x02, 0xFF);
    rgb_matrix_set_color(40, 0xF4, 0x02, 0xFF);
    rgb_matrix_set_color(41, 0xF4, 0x02, 0xFF);

    return led_max < RGB_MATRIX_LED_COUNT;
}

bool Symbols(effect_params_t* params) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);
    
    for (uint8_t i = led_min; i < RGB_MATRIX_LED_COUNT; i++) {
        RGB_MATRIX_TEST_LED_FLAGS();
        rgb_matrix_set_color(i, 0xF4, 0x02, 0xFF); // Morado       
    }

    rgb_matrix_set_color(6, 0x00, 0xFF, 0xFF);
    rgb_matrix_set_color(13, 0x00, 0xFF, 0xFF);
    rgb_matrix_set_color(14, 0x00, 0xFF, 0xFF);

    rgb_matrix_set_color(33, 0x00, 0xFF, 0xFF);
    rgb_matrix_set_color(40, 0x00, 0xFF, 0xFF);
    rgb_matrix_set_color(41, 0x00, 0xFF, 0xFF);

    return led_max < RGB_MATRIX_LED_COUNT;
}

bool Functions(effect_params_t* params) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);
    
    for (uint8_t i = led_min; i < RGB_MATRIX_LED_COUNT; i++) {
        RGB_MATRIX_TEST_LED_FLAGS();
        rgb_matrix_set_color(i, 0xEE, 0xFF, 0x00);  // amarillo      
    }

    // set_bottom_row_color(0xFF, 0x02, 0x02)
    rgb_matrix_set_color(6, 0xFF, 0x02, 0x02);
    rgb_matrix_set_color(13, 0xFF, 0x02, 0x02);
    rgb_matrix_set_color(14, 0xFF, 0x02, 0x02);

    rgb_matrix_set_color(33, 0xFF, 0x02, 0x02);
    rgb_matrix_set_color(40, 0xFF, 0x02, 0x02);
    rgb_matrix_set_color(41, 0xFF, 0x02, 0x02);

    return led_max < RGB_MATRIX_LED_COUNT;
}

bool QMK(effect_params_t* params) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);
    
    for (uint8_t i = led_min; i < RGB_MATRIX_LED_COUNT; i++) {
        RGB_MATRIX_TEST_LED_FLAGS();
        rgb_matrix_set_color(i, 0xFF, 0x02, 0x02); // rojo      
    }

    return led_max < RGB_MATRIX_LED_COUNT;
}

#endif  // RGB_MATRIX_CUSTOM_EFFECT_IMPLS