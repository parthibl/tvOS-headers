//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVNowPlayingTransportBar, CADisplayLink, NSMutableSet;

__attribute__((visibility("hidden")))
@interface AVTransportBarAnimator : NSObject
{
    AVNowPlayingTransportBar *_transportBar;
    CADisplayLink *_displayLink;
    NSMutableSet *_animations;
}

@property(retain, nonatomic) NSMutableSet *animations; // @synthesize animations=_animations;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) __weak AVNowPlayingTransportBar *transportBar; // @synthesize transportBar=_transportBar;
- (void).cxx_destruct;
- (void)_firedDisplayLink:(id)arg1;
- (id)activeAnimationForProperty:(id)arg1;
- (void)removeAnimation:(id)arg1;
- (void)addAnimation:(id)arg1;
- (_Bool)isRunning;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)initWithTransportBar:(id)arg1;
- (id)init;
- (id)startAnimationForProperty:(id)arg1 endValue:(double)arg2 duration:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (id)animationForProperty:(id)arg1 endValue:(double)arg2 duration:(double)arg3;

@end
