//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDAV/CoreDAVActionBackedTask.h>

@class NSString;
@protocol CoreDAVTaskDelegate;

@interface CoreDAVDeleteTask : CoreDAVActionBackedTask
{
    NSString *_previousETag;
}

@property(retain, nonatomic) NSString *previousETag; // @synthesize previousETag=_previousETag;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)requestBody;
- (id)additionalHeaderValues;
- (id)httpMethod;
- (id)description;
- (void)dealloc;

// Remaining properties
@property(nonatomic) id <CoreDAVTaskDelegate> delegate; // @dynamic delegate;

@end

