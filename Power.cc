/*
 * Copyright (C) 2016 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#define LOG_TAG "PowerHAL"

#include <log/log.h>

#include <hardware/hardware.h>
#include <hardware/power.h>

#include "Power.h"

namespace android {
namespace hardware {
namespace power {
namespace V1_1 {
namespace renesas {

Power::Power(void) {
}

Power::~Power() {
}

// Methods from ::android::hardware::power::V1_1::IPower follow.
Return<void> Power::setInteractive(bool /*interactive*/) {
    return Void();
}

Return<void> Power::powerHint(PowerHint /*hint*/, int32_t /*data*/) {
    return Void();
}

Return<void> Power::setFeature(Feature /*feature*/, bool /*activate*/) {
    return Void();
}

Return<void> Power::getPlatformLowPowerStats(getPlatformLowPowerStats_cb _hidl_cb) {
    hidl_vec<PowerStatePlatformSleepState> states;

    _hidl_cb(states, Status::SUCCESS);
    return Void();
}

Return<void> Power::powerHintAsync(PowerHint hint, int32_t data) {
    (void) hint;
    (void) data;
    return Void();
}

Return<void> Power::getSubsystemLowPowerStats(getSubsystemLowPowerStats_cb _hidl_cb) {
    Status result{};
    hidl_vec<PowerStateSubsystem> subsystems {};
    _hidl_cb(subsystems, result);
    return Void();
}

} // namespace renesas
} // namespace V1_1
} // namespace power
} // namespace hardware
} // namespace android
