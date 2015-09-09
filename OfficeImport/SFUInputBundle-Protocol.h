//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/NSObject-Protocol.h>

@class NSString, OISFUBufferedInputStream;
@protocol SFUInputStream;

@protocol SFUInputBundle <NSObject>
- (void)copyEntry:(NSString *)arg1 toFile:(NSString *)arg2;
- (unsigned int)crc32ForEntry:(NSString *)arg1;
- (long long)lengthOfEntry:(NSString *)arg1;
- (OISFUBufferedInputStream *)bufferedInputStreamForEntry:(NSString *)arg1;
- (id <SFUInputStream>)inputStreamForEntry:(NSString *)arg1;
- (_Bool)hasEntryWithName:(NSString *)arg1;
@end
