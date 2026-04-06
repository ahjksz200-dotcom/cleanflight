const timerHardware_t timerHardware[] = {

    // ===== INPUT (nếu cần PWM RX) =====
    DEF_TIM(TIM2, CH1, PA0, TIM_USE_PWM, 0),
    DEF_TIM(TIM2, CH2, PA1, TIM_USE_PWM, 0),

    // ===== OUTPUT MOTOR =====
    DEF_TIM(TIM1, CH1, PA8,  TIM_USE_MOTOR, 0), // OUT1
    DEF_TIM(TIM1, CH4, PA11, TIM_USE_MOTOR, 0), // OUT2
    DEF_TIM(TIM4, CH1, PB6,  TIM_USE_MOTOR, 0), // OUT3
    DEF_TIM(TIM4, CH2, PB7,  TIM_USE_MOTOR, 0), // OUT4

    // ===== SERVO (wing) =====
    DEF_TIM(TIM4, CH3, PB8, TIM_USE_SERVO, 0),
    DEF_TIM(TIM4, CH4, PB9, TIM_USE_SERVO, 0),
};
