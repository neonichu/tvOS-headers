//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariShared/WBSAutomaticReadingListSocialSource.h>

@interface WBSAutomaticReadingListSinaWeiboSource : WBSAutomaticReadingListSocialSource
{
}

+ (id)sharedSource;
- (id)serviceName;
- (id)serviceType;
- (id)accountTypeIdentifier;
- (Class)itemClass;
- (long long)compareItem:(id)arg1 toItem:(id)arg2;
- (long long)compareOldestRecordInRange:(id)arg1 toOldestRecordInRange:(id)arg2;
- (long long)compareNewestRecordInRange:(id)arg1 toNewestRecordInRange:(id)arg2;
- (long long)compareNewestRecordInRange:(id)arg1 toOldestRecordInRange:(id)arg2;
- (id)requestParametersForRecordsWithAge:(int)arg1 relativeTo:(id)arg2;
- (id)resourceURLString;

@end

