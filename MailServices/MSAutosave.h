//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MailServices/MSXPCService.h>

@interface MSAutosave : MSXPCService
{
}

+ (id)autosave;
- (void)autosaveMessageData:(id)arg1 withIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)autosavedMessageDataWithIdentifier:(id)arg1 error:(id *)arg2;
- (void)removeAutosavedMessageWithIdentifier:(id)arg1;
- (_Bool)hasAutosavedMessageWithIdentifier:(id)arg1;
- (id)_timeout;
- (id)initWithRemoteObjectInterface:(id)arg1;
- (id)init;

@end

