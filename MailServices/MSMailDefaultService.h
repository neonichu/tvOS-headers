//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MailServices/MSService.h>

@interface MSMailDefaultService : MSService
{
    _Bool _shouldLaunch;
}

@property(nonatomic) _Bool shouldLaunchMobileMail; // @synthesize shouldLaunchMobileMail=_shouldLaunch;
- (_Bool)_shouldSimulate;
- (id)_handleMessageSendFailure:(id)arg1 message:(id)arg2 messageIndex:(long long)arg3 context:(inout id *)arg4;
- (id)_createServiceOnQueue:(id)arg1;
- (id)init;

@end

