//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDJournalEntry.h>

@class NSString;

@interface _HDUserDefaultRemovedJournalEntry : HDJournalEntry
{
    NSString *_key;
    NSString *_bundleIdentifier;
}

+ (_Bool)supportsSecureCoding;
+ (void)applyEntries:(id)arg1 withDaemon:(id)arg2;
+ (long long)behavior;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

