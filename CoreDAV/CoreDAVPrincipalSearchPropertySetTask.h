//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDAV/CoreDAVTask.h>

@protocol CoreDAVPrincipalSearchPropertySetTaskDelegate;

@interface CoreDAVPrincipalSearchPropertySetTask : CoreDAVTask
{
}

- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)copyDefaultParserForContentType:(id)arg1;
- (id)requestBody;
- (id)httpMethod;
- (id)initWithURL:(id)arg1;

// Remaining properties
@property(nonatomic) id <CoreDAVPrincipalSearchPropertySetTaskDelegate> delegate; // @dynamic delegate;

@end

