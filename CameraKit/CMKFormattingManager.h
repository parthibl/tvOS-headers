//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CMKFormattingManager : NSObject
{
    _Bool _wantsCustomKerning;
    _Bool _supportsVerticalText;
}

+ (id)sharedManager;
@property(readonly, nonatomic) _Bool supportsVerticalText; // @synthesize supportsVerticalText=_supportsVerticalText;
@property(readonly, nonatomic) _Bool wantsCustomKerning; // @synthesize wantsCustomKerning=_wantsCustomKerning;
- (id)init;
- (void)_commonCMKFormattingManagerInitialization;

@end
