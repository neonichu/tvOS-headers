//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CMKTimelapseState, NSArray, NSString;

@interface CMKTimelapseBackendSessionContext : NSObject
{
    NSString *_timelapseUUID;
    CMKTimelapseState *_state;
    NSArray *_filesToDelete;
    NSArray *_filesToWrite;
}

@property(retain, nonatomic) NSArray *filesToWrite; // @synthesize filesToWrite=_filesToWrite;
@property(retain, nonatomic) NSArray *filesToDelete; // @synthesize filesToDelete=_filesToDelete;
@property(retain, nonatomic) CMKTimelapseState *state; // @synthesize state=_state;
@property(readonly, nonatomic) NSString *timelapseUUID; // @synthesize timelapseUUID=_timelapseUUID;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithTimelapseUUID:(id)arg1;

@end

