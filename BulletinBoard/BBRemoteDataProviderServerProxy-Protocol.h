//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BulletinBoard/NSObject-Protocol.h>

@class BBBulletinRequest, BBDataProviderIdentity, BBSectionInfo, NSString;

@protocol BBRemoteDataProviderServerProxy <NSObject>
- (void)setSectionInfo:(BBSectionInfo *)arg1;
- (void)getSectionInfoWithCompletion:(void (^)(BBSectionInfo *, NSError *))arg1;
- (void)setClearedInfo:(id)arg1;
- (void)getClearedInfoWithCompletion:(void (^)(id, NSError *))arg1;
- (void)reloadDefaultSectionInfo:(BBDataProviderIdentity *)arg1;
- (void)reloadSectionParameters:(BBDataProviderIdentity *)arg1;
- (void)withdrawBulletinWithPublisherBulletinID:(NSString *)arg1;
- (void)withdrawBulletinsWithRecordID:(NSString *)arg1;
- (void)modifyBulletin:(BBBulletinRequest *)arg1;
- (void)addBulletin:(BBBulletinRequest *)arg1 forDestinations:(unsigned long long)arg2;
- (void)invalidateBulletins;
@end

