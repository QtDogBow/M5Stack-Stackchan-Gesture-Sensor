#ifndef _HEX_LED_H_
#define _HEX_LED_H_

#include <FastLED.h>
#define NUM_LEDS 37
//#define LED_DATA_PIN 9    //PORTB
#define LED_DATA_PIN 2    //CoreS3 PORTA
#define LED_BRIGHTNESS 8

void hex_led_init(void);
void hex_led_ptn_off(void);
void hex_led_ptn_wake(void);
void hex_led_ptn_accept(void);
void hex_led_ptn_notification(void);
void hex_led_ptn_boot(void);
void hex_led_ptn_thinking_start(void);
void hex_led_ptn_thinking_end(void);
//電源OFF時のLED点灯シーケンス
void hex_led_ptn_pow_off_1of5(void);
void hex_led_ptn_pow_off_2of5(void);
void hex_led_ptn_pow_off_3of5(void);
void hex_led_ptn_pow_off_4of5(void);
void hex_led_ptn_pow_off_5of5(void);
void hex_led_ptn_test(void);

//LED点灯パターン
void hex_led_ptn_Np(int patternNum);

//2024.06.23 矢印
void hex_led_ptn_arrowR(void);//右矢印"→"
void hex_led_ptn_arrowL(void);//左矢印"←"
void hex_led_ptn_arrowU(void);//上矢印"↑"
void hex_led_ptn_arrowD(void);//下矢印"↓"
void hex_led_ptn_arrowFWD(void);//前進（近づく）
void hex_led_ptn_arrowBWD(void);//後退（離れる）
void hex_led_ptn_arrowCW(void);//時計周り
void hex_led_ptn_arrowCCW(void);//反時計周り
void hex_led_ptn_arrowWAVE(void);//ウェイブ（左右に手を振る）

void hex_led_ptn_RAIN(void);//雨
void hex_led_ptn_FLOWER(void);//花
void hex_led_ptn_SNAIL(void);//虫
void hex_led_ptn_PLANE(void);//飛行機
void hex_led_ptn_HOT_SPRING(void);//温泉
void hex_led_ptn_SCULL(void);//死
void hex_led_ptn_FISH(void);//魚
void hex_led_ptn_QUESTION(void);//？
void hex_led_ptn_DBL_QUOTATION(void);//驚
void hex_led_ptn_UFO(void);//宇宙船
void hex_led_ptn_ROBOT(void);//ロボット
void hex_led_ptn_SQUID(void);//イカ
void hex_led_ptn_CAFFEE(void);//コーヒー
void hex_led_ptn_MUSHROOM(void);//きのこ
void hex_led_ptn_JPN(void);//日本
void hex_led_ptn_ALIAN(void);//宇宙人

#endif //_HEX_LED_H_