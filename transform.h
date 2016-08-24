#ifndef TRANSFORM_H
#define TRANSFORM_H

Image *flattenImages(const Image *image, ExceptionInfo *exception);
Image *mosaicImages(const Image *image, ExceptionInfo *exception);
Image *autoOrientImage(Image *image, void *orientation, ExceptionInfo *ex);

#endif
