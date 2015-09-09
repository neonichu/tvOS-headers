//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreMediaStream/MSStreamsProtocol.h>

@class NSMutableArray;
@protocol MSDeleteStreamsProtocolDelegate;

@interface MSDeleteStreamsProtocol : MSStreamsProtocol
{
    struct _MSDSPCContext _context;
    NSMutableArray *_collectionsInFlight;
}

- (void).cxx_destruct;
- (void)_resetConnectionVariables;
- (void)_coreProtocolDidFailAuthenticationError:(id)arg1;
- (void)_coreProtocolDidFinishResponse:(id)arg1 error:(id)arg2;
- (void)sendDeletionRequestForAssetCollections:(id)arg1;
- (void)abort;
- (id)initWithPersonID:(id)arg1 baseURL:(id)arg2;

// Remaining properties
@property(nonatomic) id <MSDeleteStreamsProtocolDelegate> delegate; // @dynamic delegate;

@end

