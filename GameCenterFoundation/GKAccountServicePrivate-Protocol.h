//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterFoundation/GKAccountService-Protocol.h>

@class NSDictionary, NSString;

@protocol GKAccountServicePrivate <GKAccountService>
- (oneway void)setLoginStatus:(unsigned long long)arg1 handler:(void (^)(NSError *))arg2;
- (oneway void)accountEdited:(NSString *)arg1 alias:(NSString *)arg2 firstName:(NSString *)arg3 lastName:(NSString *)arg4 handler:(void (^)(void))arg5;
- (oneway void)authenticationCancelled;
- (oneway void)setupAccountForParameters:(NSDictionary *)arg1 handler:(void (^)(NSError *))arg2;
- (oneway void)signOutPlayerWithHandler:(void (^)(NSError *))arg1;
- (oneway void)validateAccountWithUsername:(NSString *)arg1 password:(NSString *)arg2 handler:(void (^)(GKAuthenticateResponse *, NSError *))arg3;
- (oneway void)accountCreated:(NSString *)arg1 playerID:(NSString *)arg2 authenticationToken:(NSString *)arg3 alias:(NSString *)arg4 finished:(_Bool)arg5 handler:(void (^)(GKAuthenticateResponse *, NSError *))arg6;
- (oneway void)authenticatePlayerWithUsername:(NSString *)arg1 password:(NSString *)arg2 handler:(void (^)(GKAuthenticateResponse *, NSError *))arg3;
- (oneway void)authenticatePlayerWithUsername:(NSString *)arg1 password:(NSString *)arg2 altDSID:(NSString *)arg3 usingFastPath:(_Bool)arg4 handler:(void (^)(GKAuthenticateResponse *, NSError *))arg5;
@end

