//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVServices/TVSImageScaleDecorator.h>

@interface TVMonogramDecorator : TVSImageScaleDecorator
{
}

- (void)_drawInScaledContext:(struct CGContext *)arg1;
- (_Bool)_needsAlphaForImage:(id)arg1;
- (id)decorate:(id)arg1 scaledWithSize:(struct CGSize)arg2 croppedToFit:(_Bool)arg3;
- (id)decoratorIdentifier;

@end
