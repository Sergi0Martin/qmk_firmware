RGB_MATRIX_EFFECT(Base)
RGB_MATRIX_EFFECT(Symbols)
RGB_MATRIX_EFFECT(Functions)
RGB_MATRIX_EFFECT(Qmk)

#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS

bool Base(effect_params_t* params) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);

    rgb_matrix_decrease_val();
    rgb_matrix_decrease_val();
    rgb_matrix_decrease_val();
    rgb_matrix_decrease_val();
    rgb_matrix_decrease_val();

    rgb_matrix_set_color_all(0x00, 0xFF, 0xFF); // Azul cian     

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
    
    rgb_matrix_increase_val();  

    rgb_matrix_set_color_all(0xF4, 0x02, 0xFF); // Morado    

    for (uint8_t i = led_min; i < 54; i++) {
        RGB_MATRIX_TEST_LED_FLAGS();
        rgb_matrix_set_color(i, 0xF4, 0x02, 0xFF);        
    }

    rgb_matrix_set_color(6, 0xEE, 0xFF, 0x00);
    rgb_matrix_set_color(13, 0xEE, 0xFF, 0x00);
    rgb_matrix_set_color(14, 0xEE, 0xFF, 0x00);

    rgb_matrix_set_color(33, 0xEE, 0xFF, 0x00);
    rgb_matrix_set_color(40, 0xEE, 0xFF, 0x00);
    rgb_matrix_set_color(41, 0xEE, 0xFF, 0x00);

    return led_max < RGB_MATRIX_LED_COUNT;
}

bool Functions(effect_params_t* params) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);
    
    rgb_matrix_set_color_all(0xEE, 0xFF, 0x00); // Amarillo

    return led_max < RGB_MATRIX_LED_COUNT;
}

bool Qmk(effect_params_t* params) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);

    rgb_matrix_set_color_all(0xFF, 0x04, 0x08); // Rojo  

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