//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDAV/CoreDAVTask.h>

@class CoreDAVAction;

@interface CoreDAVActionBackedTask : CoreDAVTask
{
    CoreDAVAction *_backingAction;
}

@property(retain, nonatomic) CoreDAVAction *backingAction; // @synthesize backingAction=_backingAction;
- (void)dealloc;
- (id)description;

@end

