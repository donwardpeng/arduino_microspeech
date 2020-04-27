/* Copyright 2019 The TensorFlow Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
#include "Arduino.h"

#include "micro_features_yes_micro_features_data.h"

/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="speech_commands_test_set_v0.02/yes/f2e59fea_nohash_1.wav" \
 * --output_c_file="yes_micro_features_data.cc" \
 */

const int g_yes_micro_f2e59fea_nohash_1_width = 40;
const int g_yes_micro_f2e59fea_nohash_1_height = 49;
const unsigned char g_yes_micro_f2e59fea_nohash_1_data[] = {
    244, 226, 245, 223, 234, 213, 228, 208, 194, 110, 95,  116, 102, 0,   137,
    161, 183, 173, 137, 116, 133, 157, 151, 156, 128, 110, 128, 0,   68,  78,
    78,  90,  68,  68,  78,  102, 95,  78,  95,  78,  210, 188, 209, 183, 204,
    188, 201, 191, 166, 119, 90,  107, 110, 107, 175, 157, 179, 168, 182, 145,
    152, 164, 171, 165, 136, 143, 122, 68,  0,   78,  90,  90,  110, 90,  102,
    99,  90,  68,  78,  68,  223, 186, 179, 123, 182, 110, 196, 171, 159, 110,
    102, 95,  90,  99,  160, 134, 125, 136, 153, 152, 164, 134, 164, 151, 141,
    136, 99,  90,  90,  90,  78,  78,  102, 119, 102, 90,  110, 90,  68,  51,
    177, 175, 211, 172, 183, 0,   95,  68,  129, 102, 68,  85,  114, 105, 110,
    85,  102, 95,  140, 51,  85,  51,  95,  90,  143, 116, 90,  78,  78,  51,
    107, 85,  68,  0,   68,  51,  90,  51,  68,  0,   164, 117, 193, 120, 156,
    0,   138, 51,  90,  0,   51,  0,   51,  85,  0,   0,   51,  0,   0,   0,
    0,   0,   114, 0,   85,  78,  90,  51,  0,   0,   51,  85,  99,  85,  107,
    68,  90,  85,  78,  0,   51,  0,   110, 0,   68,  0,   0,   0,   51,  0,
    51,  0,   0,   0,   68,  90,  107, 0,   68,  0,   0,   0,   68,  0,   51,
    68,  0,   78,  68,  0,   51,  0,   78,  68,  90,  68,  78,  51,  51,  0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   90,  0,   0,   0,   0,
    0,   51,  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   51,  68,
    0,   0,   78,  0,   78,  0,   78,  0,   51,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   51,  0,   51,  0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   51,  0,   51,
    0,   51,  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   51,
    0,   0,   0,   0,   51,  78,  0,   0,   51,  51,  0,   0,   0,   78,  0,
    213, 170, 192, 180, 196, 188, 173, 131, 173, 116, 137, 105, 159, 127, 0,
    0,   0,   0,   127, 164, 165, 161, 170, 164, 185, 197, 195, 167, 134, 138,
    159, 134, 136, 105, 51,  0,   99,  0,   51,  0,   228, 215, 229, 218, 237,
    215, 228, 210, 237, 222, 239, 211, 208, 211, 234, 218, 220, 209, 225, 219,
    235, 222, 245, 225, 245, 224, 243, 223, 241, 218, 237, 224, 234, 213, 221,
    193, 197, 164, 157, 128, 227, 188, 232, 196, 220, 220, 240, 219, 234, 213,
    234, 211, 231, 218, 233, 213, 239, 215, 228, 207, 229, 206, 224, 208, 226,
    207, 232, 210, 225, 208, 230, 199, 227, 206, 210, 205, 218, 174, 178, 141,
    235, 208, 220, 206, 225, 203, 233, 203, 225, 167, 205, 199, 208, 190, 221,
    204, 223, 207, 225, 188, 225, 197, 215, 188, 199, 183, 225, 195, 224, 200,
    216, 178, 208, 188, 215, 202, 214, 183, 176, 140, 198, 150, 211, 194, 203,
    120, 175, 188, 204, 189, 219, 192, 223, 202, 216, 186, 203, 185, 210, 182,
    214, 183, 204, 170, 204, 125, 184, 187, 206, 185, 198, 182, 210, 161, 202,
    198, 218, 173, 145, 120, 188, 183, 205, 168, 200, 170, 210, 177, 187, 190,
    209, 193, 193, 166, 210, 162, 175, 119, 174, 147, 182, 161, 181, 134, 176,
    143, 187, 165, 186, 149, 185, 141, 192, 181, 202, 123, 170, 143, 144, 78,
    149, 0,   208, 182, 170, 78,  170, 0,   117, 51,  156, 99,  195, 170, 200,
    130, 152, 68,  175, 141, 173, 134, 194, 132, 189, 164, 198, 134, 173, 117,
    171, 149, 183, 181, 185, 99,  153, 117, 125, 0,   166, 0,   173, 117, 144,
    0,   117, 102, 188, 120, 193, 166, 197, 68,  163, 119, 169, 99,  134, 0,
    162, 0,   164, 68,  171, 116, 126, 0,   120, 68,  68,  0,   105, 0,   159,
    95,  150, 51,  90,  85,  0,   0,   131, 0,   105, 0,   145, 51,  170, 51,
    120, 0,   107, 0,   145, 85,  160, 0,   85,  0,   0,   51,  149, 0,   78,
    0,   0,   0,   0,   0,   0,   0,   90,  0,   112, 0,   78,  102, 122, 0,
    0,   0,   0,   0,   105, 0,   0,   0,   0,   0,   0,   0,   0,   0,   112,
    0,   164, 120, 143, 0,   0,   0,   0,   0,   51,  0,   90,  0,   78,  0,
    0,   0,   0,   0,   110, 0,   139, 0,   112, 51,  0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   102, 0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   107,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   78,  0,   51,  0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   51,  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   127, 110, 133, 0,   167, 0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   132, 0,   190,
    194, 202, 0,   197, 187, 161, 0,   0,   0,   0,   0,   0,   0,   0,   0,
    214, 213, 223, 203, 218, 189, 200, 122, 78,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   191, 210, 231, 197, 226, 217, 238, 216, 236, 207,
    199, 0,   0,   0,   0,   0,   107, 122, 155, 160, 214, 215, 236, 202, 235,
    203, 225, 191, 203, 188, 199, 194, 212, 127, 51,  0,   174, 188, 219, 196,
    228, 221, 240, 207, 235, 220, 241, 219, 237, 207, 212, 142, 95,  0,   139,
    78,  162, 177, 197, 183, 211, 199, 235, 208, 238, 215, 227, 207, 211, 201,
    224, 213, 226, 192, 213, 170, 223, 205, 234, 221, 245, 225, 242, 220, 245,
    221, 239, 221, 238, 213, 226, 180, 159, 112, 176, 159, 208, 202, 213, 191,
    205, 191, 225, 197, 238, 219, 224, 201, 227, 200, 221, 201, 225, 203, 212,
    195, 229, 210, 228, 210, 239, 216, 226, 212, 233, 205, 225, 200, 229, 207,
    222, 151, 147, 119, 179, 185, 230, 218, 223, 192, 202, 136, 205, 177, 223,
    204, 228, 215, 232, 209, 221, 189, 221, 205, 209, 200, 226, 209, 229, 205,
    235, 192, 209, 198, 228, 190, 206, 185, 207, 187, 214, 175, 177, 184, 220,
    195, 214, 207, 230, 184, 205, 159, 208, 184, 189, 169, 224, 213, 219, 199,
    229, 203, 216, 205, 222, 204, 224, 206, 231, 208, 231, 176, 197, 184, 216,
    193, 211, 139, 212, 195, 231, 164, 166, 195, 217, 182, 208, 190, 217, 179,
    205, 68,  182, 119, 195, 168, 182, 136, 204, 179, 193, 158, 182, 140, 188,
    154, 197, 169, 190, 99,  184, 0,   125, 0,   131, 0,   99,  68,  179, 85,
    190, 184, 213, 203, 223, 202, 212, 190, 209, 138, 178, 0,   159, 51,  128,
    51,  105, 0,   139, 51,  179, 125, 185, 114, 171, 128, 175, 132, 181, 174,
    155, 0,   0,   0,   90,  0,   125, 0,   176, 188, 227, 217, 244, 215, 234,
    221, 239, 192, 224, 210, 0,   0,   134, 0,   51,  0,   105, 0,   105, 0,
    143, 90,  192, 119, 175, 147, 141, 51,  184, 110, 85,  0,   0,   0,   0,
    0,   0,   0,   151, 139, 201, 203, 232, 203, 226, 208, 236, 206, 230, 212,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   169, 0,   119,
    0,   78,  0,   0,   0,   0,   0,   0,   0,   0,   0,   68,  0,   0,   133,
    200, 180, 220, 197, 228, 201, 221, 184, 213, 193, 110, 0,   0,   0,   0,
    0,   0,   0,   0,   0,   78,  0,   164, 0,   0,   0,   0,   0,   107, 0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   150, 164, 202, 182, 224,
    197, 211, 179, 212, 193, 134, 0,   0,   0,   0,   0,   0,   0,   0,   0,
    85,  0,   150, 0,   85,  0,   95,  0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   102, 90,  193, 160, 203, 164, 200, 178, 205, 174,
    116, 0,   0,   0,   0,   0,   0,   0,   0,   0,   120, 114, 123, 0,   114,
    0,   145, 68,  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    102, 68,  199, 170, 195, 180, 208, 176, 200, 164, 0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   110, 0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   142, 102, 172, 110, 186,
    167, 185, 147, 189, 154, 0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   177, 0,   158, 136, 197, 155, 189, 166,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    85,  0,   155, 90,  175, 117, 175, 138, 202, 165, 0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   51,  0,   139,
    0,   120, 68,  51,  123, 0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   119, 0,   78,  0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
};
