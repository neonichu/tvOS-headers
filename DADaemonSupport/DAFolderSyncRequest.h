//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DAFolder, NSArray;

@interface DAFolderSyncRequest : NSObject
{
    _Bool _hasRemoteChanges;
    _Bool _isInitialUberSync;
    _Bool _isResyncAfterConnectionFailed;
    _Bool _isResyncAfterServerError;
    _Bool _containsPostponedActions;
    DAFolder *_folder;
    NSArray *_actions;
}

@property(nonatomic) _Bool containsPostponedActions; // @synthesize containsPostponedActions=_containsPostponedActions;
@property(nonatomic) _Bool isResyncAfterServerError; // @synthesize isResyncAfterServerError=_isResyncAfterServerError;
@property(nonatomic) _Bool isResyncAfterConnectionFailed; // @synthesize isResyncAfterConnectionFailed=_isResyncAfterConnectionFailed;
@property(retain, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(nonatomic) _Bool isInitialUberSync; // @synthesize isInitialUberSync=_isInitialUberSync;
@property(nonatomic) _Bool hasRemoteChanges; // @synthesize hasRemoteChanges=_hasRemoteChanges;
@property(retain, nonatomic) DAFolder *folder; // @synthesize folder=_folder;
- (void).cxx_destruct;
- (id)description;
- (id)initWithFolder:(id)arg1 hasRemoteChanges:(_Bool)arg2 isInitialUberSync:(_Bool)arg3;

@end

