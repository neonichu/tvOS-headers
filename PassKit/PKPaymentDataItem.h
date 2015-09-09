//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PassKit/PKPaymentValidating-Protocol.h>

@class NSString, PKPaymentAuthorizationDataModel;

@interface PKPaymentDataItem : NSObject <PKPaymentValidating>
{
    long long _type;
    long long _status;
    PKPaymentAuthorizationDataModel *_model;
}

+ (long long)dataType;
@property(nonatomic) PKPaymentAuthorizationDataModel *model; // @synthesize model=_model;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic, getter=isRejected) _Bool rejected;
- (_Bool)isValidWithError:(id *)arg1;
- (id)initWithModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

