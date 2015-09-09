//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DAEAS/ASRecurrence.h>

#import <DAEAS/NSCoding-Protocol.h>

@class ASToDo, NSDate, NSNumber;

@interface ASToDoRecurrence : ASRecurrence <NSCoding>
{
    NSDate *_startTime;
    NSNumber *_regenerate;
    NSNumber *_deadOccur;
    ASToDo *_parentToDo;
}

+ (id)asParseRules;
+ (_Bool)notifyOfUnknownTokens;
+ (_Bool)frontingBasicTypes;
+ (_Bool)parsingWithSubItems;
+ (_Bool)parsingLeafNode;
+ (_Bool)acceptsTopLevelLeaves;
@property(nonatomic) __weak ASToDo *parentToDo; // @synthesize parentToDo=_parentToDo;
@property(retain, nonatomic) NSNumber *deadOccur; // @synthesize deadOccur=_deadOccur;
@property(retain, nonatomic) NSNumber *regenerate; // @synthesize regenerate=_regenerate;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_transformedUntilDateForActiveSync:(id)arg1;
- (id)_untilDateForCalFrameworkWithParentStartDate:(id)arg1;
- (void)setUntilString:(id)arg1;
- (void)setStartTimeString:(id)arg1;
- (void)appendActiveSyncDataForTask:(id)arg1 toWBXMLData:(id)arg2;
- (void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6;
- (_Bool)_requiresParentEvent;
- (void)saveToCalendarWithParentASToDo:(id)arg1 existingRecord:(void *)arg2 shouldMergeProperties:(_Bool)arg3 outMergeDidChooseLocalProperties:(_Bool *)arg4;
- (id)initWithCalRecurrence:(void *)arg1 parentToDo:(id)arg2;

@end

