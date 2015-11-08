/*
 * Copyright (C) 2014 The CyanogenMod Project
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

#define CAMERA_PARAMETERS_EXTRA_C \
const char CameraParameters::KEY_BURST_COUNT[] = "burst-count"; \
const char CameraParameters::KEY_BURST_SKIP[] = "burst-skip"; \
const char CameraParameters::KEY_HDR_MODE[] = "hdr-mode"; \
const char CameraParameters::KEY_ZSL_BUFFER[] = "zsl-buffer"; \
const char CameraParameters::KEY_ZSL_BUFFER_SKIP[] = "zsl-buffer-skip"; \
const char CameraParameters::KEY_ZSL_BURST_COUNT[] = "zsl-burst-count"; \

#define CAMERA_PARAMETERS_EXTRA_H \
    static const char KEY_BURST_COUNT[]; \
    static const char KEY_BURST_SKIP[]; \
    static const char KEY_HDR_MODE[]; \
    static const char KEY_ZSL_BUFFER[]; \
    static const char KEY_ZSL_BUFFER_SKIP[]; \
    static const char KEY_ZSL_BURST_COUNT[];
