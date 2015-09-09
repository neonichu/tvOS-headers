//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKitDaemon/CKDPCSData.h>

@class CKRecordID;

__attribute__((visibility("hidden")))
@interface CKDRecordPCSData : CKDPCSData
{
    CKRecordID *_recordID;
    CKDPCSData *_zonePCSData;
    CKDPCSData *_sharePCSData;
}

+ (_Bool)supportsSecureCoding;
+ (id)dataWithRecordID:(id)arg1 pcsData:(id)arg2;
@property(retain, nonatomic) CKDPCSData *sharePCSData; // @synthesize sharePCSData=_sharePCSData;
@property(retain, nonatomic) CKDPCSData *zonePCSData; // @synthesize zonePCSData=_zonePCSData;
@property(retain, nonatomic) CKRecordID *recordID; // @synthesize recordID=_recordID;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)itemID;
- (_Bool)decryptPCSDataWithManager:(id)arg1 error:(id *)arg2;
- (id)initWithRecordID:(id)arg1 pcsData:(id)arg2;

@end

