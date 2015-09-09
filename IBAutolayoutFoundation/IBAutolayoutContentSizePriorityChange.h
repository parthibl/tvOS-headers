//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IBAutolayoutFoundation/IBBinaryArchiving-Protocol.h>

@class NSString;
@protocol IBAutolayoutItem;

@interface IBAutolayoutContentSizePriorityChange : NSObject <IBBinaryArchiving>
{
    NSObject<IBAutolayoutItem> *_view;
    unsigned long long _type;
    double _priority;
}

@property(readonly, nonatomic) double priority; // @synthesize priority=_priority;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSObject<IBAutolayoutItem> *view; // @synthesize view=_view;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool affectsContentCompressionResistancePriority;
@property(readonly, nonatomic) _Bool affectsContentHuggingPriority;
@property(readonly, copy) NSString *description;
- (_Bool)isEqualToContentSizePriorityChange:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithView:(id)arg1 type:(unsigned long long)arg2 priority:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
