//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImage.h>

@class IKTextBadgeAttachment, NSMutableArray, TVSImageProxy;

__attribute__((visibility("hidden")))
@interface _TVTextBadgeImagePlaceholder : UIImage
{
    IKTextBadgeAttachment *_textBadgeAttachment;
    TVSImageProxy *_imageProxy;
    CDUnknownBlockType _imageDecorator;
    NSMutableArray *_textLayoutUpdateObservers;
}

- (void).cxx_destruct;
- (void)_updateTextWithImage:(id)arg1;
- (void)loadForTextBadgeAttachment:(id)arg1;
- (void)addTextLayoutUpdateObserver:(CDUnknownBlockType)arg1;
- (id)initWithImageProxy:(id)arg1 imageDecorator:(CDUnknownBlockType)arg2;

@end
