//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IBAutolayoutFoundation/IBBinaryArchiving-Protocol.h>

@class NSError, NSString;
@protocol IBCollection;

@interface IBAutolayoutArbitrationResult : NSObject <IBBinaryArchiving>
{
    id <IBCollection> _constraintsToAdd;
    id <IBCollection> _constraintsToRemove;
    NSError *_error;
    NSString *_engineDescription;
}

@property(readonly, nonatomic) NSString *engineDescription; // @synthesize engineDescription=_engineDescription;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) id <IBCollection> constraintsToRemove; // @synthesize constraintsToRemove=_constraintsToRemove;
@property(readonly, nonatomic) id <IBCollection> constraintsToAdd; // @synthesize constraintsToAdd=_constraintsToAdd;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isErrorResult) _Bool errorResult;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithError:(id)arg1 engineDescription:(id)arg2;
- (id)initWithConstraintsToAdd:(id)arg1 constraintsToRemove:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

