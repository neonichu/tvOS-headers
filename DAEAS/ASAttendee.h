//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DAEAS/ASItem.h>

#import <DAEAS/ASParsingAcceptingTopLevelLeaves-Protocol.h>

@class NSMutableDictionary, NSString;

@interface ASAttendee : ASItem <ASParsingAcceptingTopLevelLeaves>
{
    int _status;
    int _role;
    int _localId;
    NSString *_name;
    NSString *_email;
    NSMutableDictionary *_placeHolder;
}

+ (id)asParseRules;
+ (_Bool)notifyOfUnknownTokens;
+ (_Bool)frontingBasicTypes;
+ (_Bool)parsingWithSubItems;
+ (_Bool)parsingLeafNode;
+ (_Bool)acceptsTopLevelLeaves;
@property(retain, nonatomic) NSMutableDictionary *placeHolder; // @synthesize placeHolder=_placeHolder;
@property(nonatomic) int localId; // @synthesize localId=_localId;
@property(nonatomic) int role; // @synthesize role=_role;
@property(nonatomic) int status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *email; // @synthesize email=_email;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)icsUserAddress;
- (id)copyOfSelfWithoutLocalID;
- (id)fullEmailString;
- (void)appendActiveSyncDataForTask:(id)arg1 toData:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCalAttendee:(void *)arg1 parentEvent:(id)arg2;
- (id)init;
- (void)saveToCalendarWithParentASEvent:(id)arg1 existingRecord:(void *)arg2 shouldMergeProperties:(_Bool)arg3 outMergeDidChooseLocalProperties:(_Bool *)arg4;
- (void)setObject:(id)arg1 forDCCPT:(int)arg2;
- (void)clearPlaceHolder;
- (void)applyPlaceHolder;

@end

