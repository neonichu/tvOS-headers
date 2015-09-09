//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDAV/CoreDAVTaskGroup.h>

@class NSMutableSet;
@protocol CalDAVPrincipal;

@interface CalDAVOperation : CoreDAVTaskGroup
{
    _Bool _isCancellingTaskGroups;
    id <CalDAVPrincipal> _principal;
    NSMutableSet *_outstandingTaskGroups;
}

@property(retain, nonatomic) NSMutableSet *outstandingTaskGroups; // @synthesize outstandingTaskGroups=_outstandingTaskGroups;
@property(retain, nonatomic) id <CalDAVPrincipal> principal; // @synthesize principal=_principal;
- (void).cxx_destruct;
- (void)bailWithError:(id)arg1;
- (void)cancelTaskGroup;
- (void)_tearDownAllTaskGroupsWithBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithPrincipal:(id)arg1;
- (id)init;

@end

