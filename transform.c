#include <magick/api.h>

Image *flattenImages(const Image *image, ExceptionInfo *exception)
{
#ifdef _MAGICKCORE_LAYER_H
    return MergeImageLayers((Image *)image, FlattenLayer, exception);
#else
    return FlattenImages(image, exception);
#endif
}

Image *mosaicImages(const Image *image, ExceptionInfo *exception)
{
#ifdef _MAGICKCORE_LAYER_H
    return MergeImageLayers((Image *)image, MosaicLayer, exception);
#else
    return MosaicImages(image, exception);
#endif
}

/**
 * Wrapper around the AutoOrientImage() call in order to be compatible with the applyDataFunc()
 */
Image *autoOrientImage(Image *image, void *orientation, ExceptionInfo *ex)
{
    const OrientationType orientationType = *((OrientationType*) orientation);
    return AutoOrientImage(image, orientationType, ex);
}
