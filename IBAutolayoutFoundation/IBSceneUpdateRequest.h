//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBFoundation/IBObjectBasedMarshallingRequest.h>

@class NSArray, NSMutableArray, NSObject;

@interface IBSceneUpdateRequest : IBObjectBasedMarshallingRequest
{
    NSMutableArray *_processingRequests;
    _Bool _needsSort;
    NSObject *_rootObject;
    long long _renderingFidelity;
}

+ (id)requestWithMarshallableObjectPackage:(id)arg1 rootObject:(id)arg2 renderingFidelity:(long long)arg3;
@property(readonly, nonatomic) long long renderingFidelity; // @synthesize renderingFidelity=_renderingFidelity;
@property(readonly, nonatomic) NSObject *rootObject; // @synthesize rootObject=_rootObject;
- (void).cxx_destruct;
- (void)processProcessingResultsFromSceneUpdateResult:(id)arg1 orDeliverError:(id)arg2;
- (id)orderedProcessingRequestsAfterPhase:(long long)arg1;
- (id)orderedProcessingRequestsBeforeAndIncludingPhase:(long long)arg1;
- (id)orderedProcessingRequestsBeforePhase:(long long)arg1;
- (id)orderedProcessingRequestsWithPhase:(long long)arg1;
- (id)orderedProcessingRequestsWithPhaseInRange:(struct _NSRange)arg1;
@property(readonly, nonatomic) NSArray *processingRequests;
- (void)_ensureProcessingRequestsAreSorted;
- (void)addProcessingRequest:(id)arg1;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithIdentifier:(id)arg1 marshallableObjectPackage:(id)arg2 rootObject:(id)arg3 renderingFidelity:(long long)arg4;
- (id)initWithIdentifier:(id)arg1 marshallableObjectPackage:(id)arg2;

@end
