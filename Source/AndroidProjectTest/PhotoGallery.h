#pragma once
#include "PhotoGalleryInterface.h"


#if PLATFORM_IOS
class iOSPhotoGallery : public IPhotoLibrary
{
public:
	virtual void OpenGallery() override;
}
#endif

#if PLATFORM_ANDROID
class AndroidPhotoGallery : public IPhotoLibrary
{
public:
	virtual void OpenGallery() override;
}
#endif
