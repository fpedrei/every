/* Licensed under the Apache License, Version 2.0 */
#pragma once

static inline auto seconds() -> unsigned long {
    const unsigned long MILLIS_PER_SECOND = 1000;
    return millis() / MILLIS_PER_SECOND;
}
static inline auto minutes() -> unsigned long {
    const unsigned long SECONDS_PER_MINUTE = 60;
    return seconds() / SECONDS_PER_MINUTE;
}
static inline auto hours() -> unsigned long {
    const unsigned long MINUTES_PER_HOUR = 60;
    return minutes() / MINUTES_PER_HOUR;
}
template <typename F, typename T>
static void every(unsigned long suspend, const T time, unsigned long *last, const F f) {
    const unsigned long now = time();
    if (now - *last >= suspend) {
        *last = now;
        f();
    }
}
template <typename F, typename T>
static void every(unsigned long suspend, const T time, const F f) {
    static unsigned long last = 0;
    every(suspend, time, &last, f);
}
