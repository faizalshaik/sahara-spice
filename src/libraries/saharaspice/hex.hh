#pragma once

unsigned char packethex[] = {
//
//       IP header
//
    // 0x45, 0x00, 0x00, 0x8a,
    // 0x68, 0x56, 0x00, 0x00,
    // 0x10, 0x11, 0x39, 0x9d,
    // 0x0a, 0x0b, 0x03, 0x03,
    // 0x0a, 0x0b, 0x01, 0x0b,
//
//       UDP Header    
//
//   src_port    dst_port
//    0x0b, 0xbd, 0x0b, 0xbd,
//    length      cksum
//    0x00, 0x76, 0x00, 0x00,
//
//  Sahara Data Header
//
    // type  mode  channel
    0x01,    0x05, 0x00,

    // framecnt
    0x9c, 0x33, 0xe7, 0x6d,

    // payload
    0x0b, 0x00,

    // rsvd fifo
    0x00, 0x00,

    // flags
    0x38,

    // mac errors
    0xf0, 0x02,

    // ip errors
    0x00, 0x00,

    // udp error    
    0x00, 0x00,

    // reserved
    0x88, 0x88, 0x88, 0x88,

    // payload data
    0x12, 0x34, 0x56, 0x78, // offset 0
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78, // offset 10
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78, // offset 20
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78, // offset 30
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78, // offset 40
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78, // offset 50
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78, // offset 60
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78, // offset 70
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78, // offset 80
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78, // offset 90
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78, // offset 100
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78, // offset 110
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78, // offset 120
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78, // offset 130
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78, // offset 140
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78, // offset 150
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78, // offset 160
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78, // offset 170
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78, // offset 180
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78, // offset 190
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78, // offset 200
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78, // offset 210
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78, // offset 220
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78, // offset 230
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78, // offset 240
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78, // offset 250
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78, // offset 260
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78, // offset 270
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78, // offset 280
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78, // offset 290
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78, // offset 300
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78, // offset 310
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78, // offset 320
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78, // offset 330
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78, // offset 340
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78, // offset 350
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
    0x12, 0x34, 0x56, 0x78,
};
