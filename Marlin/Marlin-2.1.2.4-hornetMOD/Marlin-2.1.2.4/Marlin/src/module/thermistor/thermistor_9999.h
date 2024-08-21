#pragma once

#define REVERSE_TEMP_SENSOR_RANGE_9999 1

// pt100 with e3d amplifier board at 3.3V on an Artillery Ruby using default pins (signal to + and 0V to -)
constexpr temp_entry_t temptable_9999[] PROGMEM = {
    {OV(0), 0},
    {OV(249), 1},
    {OV(257), 10},
    {OV(265), 20},
    {OV(274), 30},
    {OV(282), 40},
    {OV(291), 50},
    {OV(299), 60},
    {OV(307), 70},
    {OV(315), 80},
    {OV(323), 90},
    {OV(332), 100},
    {OV(340), 110},
    {OV(348), 120},
    {OV(356), 130},
    {OV(364), 140},
    {OV(372), 150},
    {OV(380), 160},
    {OV(388), 170},
    {OV(395), 180},
    {OV(403), 190},
    {OV(411), 200},
    {OV(419), 210},
    {OV(426), 220},
    {OV(434), 230},
    {OV(442), 240},
    {OV(449), 250},
    {OV(457), 260},
    {OV(464), 270},
    {OV(472), 280},
    {OV(479), 290},
    {OV(487), 300},
    {OV(494), 310},
    {OV(501), 320},
    {OV(509), 330},
    {OV(516), 340},
    {OV(523), 350},
    {OV(530), 360}
    // {OV(537), 370}, // not safe over 360 because the amplifier board is connected to 3.3V
    // {OV(544), 380},
    // {OV(552), 390},
    // {OV(559), 400},
    // {OV(627), 500},
    // {OV(693), 600},
    // {OV(755), 700},
    // {OV(814), 800}
};