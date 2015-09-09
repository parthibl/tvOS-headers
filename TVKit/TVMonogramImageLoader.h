//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TVKit/TVSImageLoader-Protocol.h>

@class NSString;

@interface TVMonogramImageLoader : NSObject <TVSImageLoader>
{
}

+ (id)sharedInstance;
- (id)_tintImage:(id)arg1 color:(id)arg2;
- (id)_imageLoadError;
- (_Bool)_isValidAppleAccountImageURL:(id)arg1;
- (void)cancelLoad:(id)arg1;
- (id)loadImageForObject:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)imageKeyForObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
