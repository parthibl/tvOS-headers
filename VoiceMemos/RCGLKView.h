//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GLKit/GLKView.h>

@interface RCGLKView : GLKView
{
    _Bool _isCreatingSnapshot;
}

+ (Class)layerClass;
@property(readonly, nonatomic) _Bool isCreatingSnapshot; // @synthesize isCreatingSnapshot=_isCreatingSnapshot;
- (void)didMoveToWindow;
@property(readonly, nonatomic) _Bool isRenderingContextValid;
- (void)setFrame:(struct CGRect)arg1;
- (id)snapshot;
- (void)_setNeedsVisibleTimeRangeRendering;

@end
