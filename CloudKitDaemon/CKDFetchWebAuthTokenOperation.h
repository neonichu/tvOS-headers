//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CKDFetchWebAuthTokenOperation : CKDDatabaseOperation
{
    NSString *_webAuthToken;
}

@property(copy, nonatomic) NSString *webAuthToken; // @synthesize webAuthToken=_webAuthToken;
- (void).cxx_destruct;
- (void)fillOutOperationResult:(id)arg1;
- (Class)operationResultClass;
- (void)main;
- (unsigned long long)activityStart;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end

