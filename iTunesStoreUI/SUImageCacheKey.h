//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesStoreUI/NSCopying-Protocol.h>

@class NSURL, SUImageDataProvider;

@interface SUImageCacheKey : NSObject <NSCopying>
{
    SUImageDataProvider *_dataProvider;
    NSURL *_url;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end
