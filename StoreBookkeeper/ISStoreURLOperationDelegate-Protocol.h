//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreBookkeeper/ISURLOperationDelegate-Protocol.h>

@class ISStoreURLOperation, NSNumber, NSString;

@protocol ISStoreURLOperationDelegate <ISURLOperationDelegate>

@optional
- (_Bool)operation:(ISStoreURLOperation *)arg1 shouldSetStoreFrontID:(NSString *)arg2;
- (void)operation:(ISStoreURLOperation *)arg1 didAuthenticateWithDSID:(NSNumber *)arg2;
@end

