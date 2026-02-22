#ifndef _5_OUTPUT_IMAGES_ROTATE_FLIP_H
#define _5_OUTPUT_IMAGES_ROTATE_FLIP_H
#ifdef __cplusplus
extern "C" {
#endif
#include "lvgl.h"
// -------- Image Descriptors Declarations --------
LV_IMG_DECLARE(catb_0);
LV_IMG_DECLARE(catb_1);
LV_IMG_DECLARE(catb_2);
LV_IMG_DECLARE(catb_3);
LV_IMG_DECLARE(catb_4);
LV_IMG_DECLARE(catb_5);
LV_IMG_DECLARE(catb_6);


// -------- Array of Pointers to Image Descriptors --------
// Provides easy access to all images defined in the corresponding .c file
const lv_img_dsc_t *5_output_images_rotate_flip_images[8] = {
    &catb_0,
    &catb_1,
    &catb_2,
    &catb_3,
    &catb_4,
    &catb_5,
    &catb_6
};

#define 5_OUTPUT_IMAGES_ROTATE_FLIP_IMAGES_NUM_IMAGES 8

#ifdef __cplusplus
} /* extern "C" */
#endif
#endif /* _5_OUTPUT_IMAGES_ROTATE_FLIP_H */
