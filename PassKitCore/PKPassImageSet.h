//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PKImageSet.h>

@interface PKPassImageSet : PKImageSet
{
    struct CGSize _displayProfileRectSize;
}

+ (_Bool)archivedObject:(id)arg1 matchesDisplayProfile:(id)arg2;
+ (Class)classForImageSetType:(long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisplayProfile:(id)arg1 fileURL:(id)arg2 screenScale:(double)arg3 suffix:(id)arg4;

@end
