//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/PLCloudLegacyOperation.h>

@interface PLCloudLegacyDownloadOperation : PLCloudLegacyOperation
{
    _Bool _cancelled;
}

- (id)description;
- (void)runOperationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (unsigned long long)cost;
- (void)requestCancel;

@end
