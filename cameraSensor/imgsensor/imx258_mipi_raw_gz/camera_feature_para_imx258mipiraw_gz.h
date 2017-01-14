// wanfei@wind-mobi.com 20161027 begin
#ifndef __FEATURE_TUNING_PARA_H__
#define __FEATURE_TUNING_PARA_H__

{
    2104,1560,0,

    0.016169, 0.000000, 0.000000, 0.000000, 1611.320912, 0.013795,
    0.016169, 0.000000, 0.000000, 0.000000, 1611.320912, 0.013795,
    0.016169, 0.000000, 0.000000, 0.000000, 1611.320912, 0.013795,

    // pre, cap, normal_video
    0.016169, 0.016169, 0.016169, 0.0,
    0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0,

    //Rerserved1
    0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0,

    //Rerserved2
    0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0,


},
{
    max_frame_number            :   4,
    bss_clip_th                 :   8,
    memc_bad_mv_range           :   32,
    memc_bad_mv_rate_th         :   48,
    //
    mfll_iso_th                 :   5000,//400,
    //
    ais_exp_th                  :   1000000,//33000,
    ais_advanced_tuning_en      :   1,
    ais_advanced_max_iso        :   2410,
    ais_advanced_max_exposure   :   66000,
    //
    reserved                    :   {
                                    33000,
                                    1200,   //ais_iso_th0, default=1200, must < ais_advanced_max_iso    
                                    },  
},
{
    { // iso 100, single
    10   , 64   , 32   , 28   , 24   ,20   , 1    , 64   , 128  , 192  ,
    0    , 0    , 16   , 5    , 300  ,0    , 0     ,0    , 0    , 0    ,
        0  , 55552 , 56905 , 46189 , 0   , 0   , 0    , 0   , 0   , 0   ,
    0    , 0    , 0    , 0    , 256  ,0    , 0    , 0    , 0    , -4   ,
        -4 , -4    , -4    , 0     , 0   , 0   , 0    , 0   , 0   , 0   ,
    0    , 0    , 0    , 32   , 96   ,16   , 24   , 5    , 37   , 255  ,
    64   , 0    , 64   , 0    , 224  ,0    , 64   , 16   , 25   , 0    ,
    0    , 0    , 1    , 1    , 1    ,1    , 1    , 1    , 64   , 64   ,
    },
    { // iso 200, single
    10   , 64   , 32   , 28   , 24   ,20   , 1    , 64   , 128  , 192  ,
    0    , 0    , 16   , 5    , 300  ,0    , 0     ,0    , 0    , 0    ,
        0  , 55552 , 56905 , 46189 , 0   , 0   , 0    , 0   , 0   , 0   ,
    0    , 0    , 0    , 0    , 256  ,0    , 0    , 0    , 0    , -4   ,
        -4 , -4    , -4    , 0     , 0   , 0   , 0    , 0   , 0   , 0   ,
    0    , 0    , 0    , 32   , 96   ,16   , 24   , 5    , 37   , 255  ,
    64   , 0    , 64   , 0    , 224  ,0    , 64   , 16   , 25   , 0    ,
    0    , 0    , 1    , 1    , 1    ,1    , 1    , 1    , 64   , 64   ,
    },
    { // iso 400, single
    22   , 64   , 32   , 28   , 24   ,20   , 1    , 64   , 128  , 192  ,
    0    , 0    , 16   , 5    , 300  ,0    , 0     ,0    , 0    , 0    ,
        0  , 55552 , 56905 , 46189 , 0   , 0   , 0    , 0   , 0   , 0   ,
    0    , 0    , 0    , 0    , 256  ,0    , 0    , 0    , 0    , -4   ,
        -4 , -4    , -4    , 0     , 0   , 0   , 0    , 0   , 0   , 0   ,
    0    , 0    , 0    , 32   , 96   ,16   , 24   , 5    , 37   , 255  ,
    64   , 0    , 64   , 0    , 224  ,0    , 64   , 16   , 25   , 0    ,
    0    , 0    , 1    , 1    , 1    ,1    , 1    , 1    , 64   , 64   ,
    },
    { // iso 800, single
    22   , 64   , 32   , 28   , 24   ,20   , 1    , 64   , 128  , 192  ,
    0    , 0    , 16   , 5    , 300  ,0    , 0     ,0    , 0    , 0    ,
        0  , 55552 , 56905 , 46189 , 0   , 0   , 0    , 0   , 0   , 0   ,
    0    , 0    , 0    , 0    , 256  ,0    , 0    , 0    , 0    , -4   ,
        -4 , -4    , -4    , 0     , 0   , 0   , 0    , 0   , 0   , 0   ,
    0    , 0    , 0    , 32   , 96   ,16   , 24   , 5    , 37   , 255  ,
    64   , 0    , 64   , 0    , 224  ,0    , 64   , 16   , 25   , 0    ,
    0    , 0    , 1    , 1    , 1    ,1    , 1    , 1    , 64   , 64   ,
    },
    { // iso 1200, single
    22   , 64   , 32   , 28   , 24   ,20   , 1    , 64   , 128  , 192  ,
    0    , 0    , 16   , 5    , 300  ,0    , 0     ,0    , 0    , 0    ,
        0  , 55552 , 56905 , 46189 , 0   , 0   , 0    , 0   , 0   , 0   ,
    0    , 0    , 0    , 0    , 256  ,0    , 0    , 0    , 0    , -4   ,
        -4 , -4    , -4    , 0     , 0   , 0   , 0    , 0   , 0   , 0   ,
    0    , 0    , 0    , 32   , 96   ,16   , 24   , 5    , 37   , 255  ,
    64   , 0    , 64   , 0    , 224  ,0    , 64   , 16   , 25   , 0    ,
    0    , 0    , 1    , 1    , 1    ,1    , 1    , 1    , 64   , 64   ,
    },
    { // iso 1600, single
    24   , 64   , 32   , 28   , 24   ,20   , 1    , 64   , 128  , 192  ,
    0    , 0    , 16   , 5    , 300  ,0    , 0     ,0    , 0    , 0    ,
        0  , 55552 , 56905 , 46189 , 0   , 0   , 0    , 0   , 0   , 0   ,
    0    , 0    , 0    , 0    , 256  ,0    , 0    , 0    , 0    , -4   ,
        -4 , -4    , -4    , 0     , 0   , 0   , 0    , 0   , 0   , 0   ,
    0    , 0    , 0    , 32   , 96   ,16   , 24   , 5    , 37   , 255  ,
    64   , 0    , 64   , 0    , 224  ,0    , 64   , 16   , 25   , 0    ,
    0    , 0    , 1    , 1    , 1    ,1    , 1    , 1    , 64   , 64   ,
    },
    { // iso 2000, single
    26   , 64   , 32   , 28   , 24   ,20   , 1    , 64   , 128  , 192  ,
    0    , 0    , 16   , 5    , 300  ,0    , 0     ,0    , 0    , 0    ,
        0  , 55552 , 56905 , 46189 , 0   , 0   , 0    , 0   , 0   , 0   ,
    0    , 0    , 0    , 0    , 256  ,0    , 0    , 0    , 0    , -4   ,
        -4 , -4    , -4    , 0     , 0   , 0   , 0    , 0   , 0   , 0   ,
    0    , 0    , 0    , 32   , 96   ,16   , 24   , 5    , 37   , 255  ,
    64   , 0    , 64   , 0    , 224  ,0    , 64   , 16   , 25   , 0    ,
    0    , 0    , 1    , 1    , 1    ,1    , 1    , 1    , 64   , 64   ,
    },
    { // iso 2400, single
    30   , 64   , 32   , 28   , 24   ,20   , 1    , 64   , 128  , 192  ,
    0    , 0    , 16   , 5    , 300  ,0    , 0     ,0    , 0    , 0    ,
        0  , 55552 , 56905 , 46189 , 0   , 0   , 0    , 0   , 0   , 0   ,
    0    , 0    , 0    , 0    , 256  ,0    , 0    , 0    , 0    , -4   ,
        -4 , -4    , -4    , 0     , 0   , 0   , 0    , 0   , 0   , 0   ,
    0    , 0    , 0    , 32   , 96   ,16   , 24   , 5    , 37   , 255  ,
    64   , 0    , 64   , 0    , 224  ,0    , 64   , 16   , 25   , 0    ,
    0    , 0    , 1    , 1    , 1    ,1    , 1    , 1    , 64   , 64   ,
    },
    { // iso 2800, single
    30   , 64   , 32   , 28   , 24   ,20   , 1    , 64   , 128  , 192  ,
    0    , 0    , 16   , 5    , 300  ,0    , 0     ,0    , 0    , 0    ,
        0  , 55552 , 56905 , 46189 , 0   , 0   , 0    , 0   , 0   , 0   ,
    0    , 0    , 0    , 0    , 256  ,0    , 0    , 0    , 0    , -4   ,
        -4 , -4    , -4    , 0     , 0   , 0   , 0    , 0   , 0   , 0   ,
    0    , 0    , 0    , 32   , 96   ,16   , 24   , 5    , 37   , 255  ,
    64   , 0    , 64   , 0    , 224  ,0    , 64   , 16   , 25   , 0    ,
    0    , 0    , 1    , 1    , 1    ,1    , 1    , 1    , 64   , 64   ,
    },
    { // iso 3200, single
    30   , 64   , 32   , 28   , 24   ,20   , 1    , 64   , 128  , 192  ,
    0    , 0    , 16   , 5    , 300  ,0    , 0     ,0    , 0    , 0    ,
        0  , 55552 , 56905 , 46189 , 0   , 0   , 0    , 0   , 0   , 0   ,
    0    , 0    , 0    , 0    , 256  ,0    , 0    , 0    , 0    , -4   ,
        -4 , -4    , -4    , 0     , 0   , 0   , 0    , 0   , 0   , 0   ,
    0    , 0    , 0    , 32   , 96   ,16   , 24   , 5    , 37   , 255  ,
    64   , 0    , 64   , 0    , 224  ,0    , 64   , 16   , 25   , 0    ,
    0    , 0    , 1    , 1    , 1    ,1    , 1    , 1    , 64   , 64   ,
    },
    { // preserved, ANR off, single
        50 , 8     , 32    , 28    , 24  , 20  , 55552 , 64  , 128 , 192 ,
        0  , 0     , 16    , 7     , 300 , 0   , 0    , 0   , 0   , 0   ,
        0  , 55552 , 56905 , 46189 , 0   , 0   , 0    , 0   , 0   , 0   ,
        0  , 0     , 0     , 1     , 0   , 0   , 0    , 0   , 0   , -4  ,
        -4 , -4    , -4    , 0     , 0   , 0   , 0    , 0   , 0   , 0   ,
        1  , 0     , 0     , 39    , 103 , 14  , 21   , 5   , 35  , 255 ,
        64 , 0     , 68    , 0     , 224 , 0   , 56   , 11  , 25  , 1   ,
        0  , 0     , 0     , 16    , 270 , 286 , -128 , 127 , 64  , 0   ,
    },
    { // preserved, ANR on, single
        50 , 8     , 32    , 28    , 24  , 20  , 55552 , 64  , 128 , 192 ,
        0  , 0     , 16    , 7     , 300 , 0   , 0    , 0   , 0   , 0   ,
        0  , 55552 , 56905 , 46189 , 0   , 0   , 0    , 0   , 0   , 0   ,
        0  , 0     , 0     , 1     , 0   , 0   , 0    , 0   , 0   , -4  ,
        -4 , -4    , -4    , 0     , 0   , 0   , 0    , 0   , 0   , 0   ,
        1  , 0     , 0     , 39    , 103 , 14  , 21   , 5   , 35  , 255 ,
        64 , 0     , 68    , 0     , 224 , 0   , 56   , 11  , 25  , 1   ,
        0  , 0     , 0     , 16    , 270 , 286 , -128 , 127 , 64  , 0   ,
    },
    { // iso 100, mfll
        0 , 8     , 32    , 28    , 24  , 20  , 55552 , 64  , 128 , 192 ,
        0  , 0     , 16    , 7     , 300 , 0   , 0    , 0   , 0   , 0   ,
        0  , 55552 , 56905 , 46189 , 0   , 0   , 0    , 0   , 0   , 0   ,
        0  , 0     , 0     , 1     , 0   , 0   , 0    , 0   , 0   , -4  ,
        -4 , -4    , -4    , 0     , 0   , 0   , 0    , 0   , 0   , 0   ,
        1  , 0     , 0     , 39    , 103 , 14  , 21   , 5   , 35  , 255 ,
        64 , 0     , 68    , 0     , 224 , 0   , 56   , 11  , 25  , 1   ,
        0  , 0     , 0     , 16    , 270 , 286 , -128 , 127 , 64  , 0   ,
    },
    { // iso 200, mfll
        0 , 8     , 32    , 28    , 24  , 20  , 55552 , 64  , 128 , 192 ,
        0  , 0     , 16    , 7     , 300 , 0   , 0    , 0   , 0   , 0   ,
        0  , 55552 , 56905 , 46189 , 0   , 0   , 0    , 0   , 0   , 0   ,
        0  , 0     , 0     , 1     , 0   , 0   , 0    , 0   , 0   , -4  ,
        -4 , -4    , -4    , 0     , 0   , 0   , 0    , 0   , 0   , 0   ,
        1  , 0     , 0     , 39    , 103 , 14  , 21   , 5   , 35  , 255 ,
        64 , 0     , 68    , 0     , 224 , 0   , 56   , 11  , 25  , 1   ,
        0  , 0     , 0     , 16    , 270 , 286 , -128 , 127 , 64  , 0   ,
    },
    { // iso 400, mfll
        0 , 8     , 32    , 28    , 24  , 20  , 55552 , 64  , 128 , 192 ,
        0  , 0     , 16    , 7     , 300 , 0   , 0    , 0   , 0   , 0   ,
        0  , 55552 , 56905 , 46189 , 0   , 0   , 0    , 0   , 0   , 0   ,
        0  , 0     , 0     , 1     , 0   , 0   , 0    , 0   , 0   , -4  ,
        -4 , -4    , -4    , 0     , 0   , 0   , 0    , 0   , 0   , 0   ,
        1  , 0     , 0     , 39    , 103 , 14  , 21   , 5   , 35  , 255 ,
        64 , 0     , 68    , 0     , 224 , 0   , 56   , 11  , 25  , 1   ,
        0  , 0     , 0     , 16    , 270 , 286 , -128 , 127 , 64  , 0   ,
    },
    { // iso 800, mfll
        20,    64,    32,    28,    24,    20,     1,    64,   128,   192,
     0,     0,    16,     5,   300,     0,     0,     0,     0,     0,
        0  , 55552 , 56905 , 46189 , 0   , 0   , 0    , 0   , 0   , 0   ,
     0,     0,     0,     0,   256,     0,     0,     0,     0,    -4,
        -4 , -4    , -4    , 0     , 0   , 0   , 0    , 0   , 0   , 0   ,
     0,     0,     0,    32,    96,    16,    24,     5,    37,   255,
    64,     0,    64,     0,   224,     0,    64,    16,    25,     1,
     0,     0,     1,     1,     1,     1,     1,     1,    64,    64,
    },
    { // iso 1200, mfll
       25,    64,    32,    28,    24,    20,     1,    64,   128,   192,
     0,     0,    16,     5,   300,     0,     0,     0,     0,     0,
        0  , 55552 , 56905 , 46189 , 0   , 0   , 0    , 0   , 0   , 0   ,
     0,     0,     0,     0,   256,     0,     0,     0,     0,    -4,
        -4 , -4    , -4    , 0     , 0   , 0   , 0    , 0   , 0   , 0   ,
     0,     0,     0,    32,    96,    16,    24,     5,    37,   255,
    64,     0,    64,     0,   224,     0,    64,    16,    25,     1,
     0,     0,     1,     1,     1,     1,     1,     1,    64,    64,
    },
    { // iso 1600, mfll
        30,    64,    32,    28,    24,    20,     1,    64,   128,   192,
     0,     0,    16,     5,   300,     0,     0,     0,     0,     0,
        0  , 55552 , 56905 , 46189 , 0   , 0   , 0    , 0   , 0   , 0   ,
     0,     0,     0,     0,   256,     0,     0,     0,     0,    -4,
        -4 , -4    , -4    , 0     , 0   , 0   , 0    , 0   , 0   , 0   ,
     0,     0,     0,    32,    96,    16,    24,     5,    37,   255,
    64,     0,    64,     0,   224,     0,    64,    16,    25,     1,
     0,     0,     1,     1,     1,     1,     1,     1,    64,    64,
    },
    { // iso 2000, mfll
       35,    64,    32,    28,    24,    20,     1,    64,   128,   192,
     0,     0,    16,     5,   300,     0,     0,     0,     0,     0,
        0  , 55552 , 56905 , 46189 , 0   , 0   , 0    , 0   , 0   , 0   ,
     0,     0,     0,     0,   256,     0,     0,     0,     0,    -4,
        -4 , -4    , -4    , 0     , 0   , 0   , 0    , 0   , 0   , 0   ,
     0,     0,     0,    32,    96,    16,    24,     5,    37,   255,
    64,     0,    64,     0,   224,     0,    64,    16,    25,     1,
     0,     0,     1,     1,     1,     1,     1,     1,    64,    64,
    },
    { // iso 2400, mfll
       35,    64,    32,    28,    24,    20,     1,    64,   128,   192,
     0,     0,    16,     5,   300,     0,     0,     0,     0,     0,
        0  , 55552 , 56905 , 46189 , 0   , 0   , 0    , 0   , 0   , 0   ,
     0,     0,     0,     0,   256,     0,     0,     0,     0,    -4,
        -4 , -4    , -4    , 0     , 0   , 0   , 0    , 0   , 0   , 0   ,
     0,     0,     0,    32,    96,    16,    24,     5,    37,   255,
    64,     0,    64,     0,   224,     0,    64,    16,    25,     1,
     0,     0,     1,     1,     1,     1,     1,     1,    64,    64,
    },
    { // iso 2800, mfll
        35,    64,    32,    28,    24,    20,     1,    64,   128,   192,
     0,     0,    16,     5,   300,     0,     0,     0,     0,     0,
        0  , 55552 , 56905 , 46189 , 0   , 0   , 0    , 0   , 0   , 0   ,
     0,     0,     0,     0,   256,     0,     0,     0,     0,    -4,
        -4 , -4    , -4    , 0     , 0   , 0   , 0    , 0   , 0   , 0   ,
     0,     0,     0,    32,    96,    16,    24,     5,    37,   255,
    64,     0,    64,     0,   224,     0,    64,    16,    25,     1,
     0,     0,     1,     1,     1,     1,     1,     1,    64,    64,
    },
    { // iso 3200, mfll
         50,    64,    32,    28,    24,    20,     1,    64,   128,   192,
           0,     0,    16,     5,   300,     0,     0,     0,     0,     0,
        0  , 55552 , 56905 , 46189 , 0   , 0   , 0    , 0   , 0   , 0   ,
           0,     0,     0,     0,   256,     0,     0,     0,     0,    -4,
        -4 , -4    , -4    , 0     , 0   , 0   , 0    , 0   , 0   , 0   ,
           0,     0,     0,    32,    96,    16,    24,     5,    37,   255,
          64,     0,    64,     0,   224,     0,    64,    16,    25,     1,
           0,     0,     1,     1,     1,     1,     1,     1,    64,    64,
    },
    { // preserved, ANR off, mfll
        50 , 8     , 32    , 28    , 24  , 20  , 55552 , 64  , 128 , 192 ,
        0  , 0     , 16    , 7     , 300 , 0   , 0    , 0   , 0   , 0   ,
        0  , 55552 , 56905 , 46189 , 0   , 0   , 0    , 0   , 0   , 0   ,
        0  , 0     , 0     , 1     , 0   , 0   , 0    , 0   , 0   , -4  ,
        -4 , -4    , -4    , 0     , 0   , 0   , 0    , 0   , 0   , 0   ,
        1  , 0     , 0     , 39    , 103 , 14  , 21   , 5   , 35  , 255 ,
        64 , 0     , 68    , 0     , 224 , 0   , 56   , 11  , 25  , 1   ,
        0  , 0     , 0     , 16    , 270 , 286 , -128 , 127 , 64  , 0   ,
    },
    { // preserved, ANR on, mfll
        50 , 8     , 32    , 28    , 24  , 20  , 55552 , 64  , 128 , 192 ,
        0  , 0     , 16    , 7     , 300 , 0   , 0    , 0   , 0   , 0   ,
        0  , 55552 , 56905 , 46189 , 0   , 0   , 0    , 0   , 0   , 0   ,
        0  , 0     , 0     , 1     , 0   , 0   , 0    , 0   , 0   , -4  ,
        -4 , -4    , -4    , 0     , 0   , 0   , 0    , 0   , 0   , 0   ,
        1  , 0     , 0     , 39    , 103 , 14  , 21   , 5   , 35  , 255 ,
        64 , 0     , 68    , 0     , 224 , 0   , 56   , 11  , 25  , 1   ,
        0  , 0     , 0     , 16    , 270 , 286 , -128 , 127 , 64  , 0   ,
    },
},
#endif // __FEATURE_TUNING_PARA_H__
// zhaozhensen@wind-mobi.com 20161012 end