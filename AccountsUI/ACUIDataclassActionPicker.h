//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount, ACDataclassAction, NSArray, NSMutableArray;

@interface ACUIDataclassActionPicker : NSObject
{
    NSMutableArray *_affectedDataclasses;
    ACAccount *_affectedAccount;
    NSArray *_actions;
}

@property(readonly, nonatomic) ACAccount *affectedAccount; // @synthesize affectedAccount=_affectedAccount;
@property(copy, nonatomic) NSArray *affectedDataclasses; // @synthesize affectedDataclasses=_affectedDataclasses;
@property(readonly, nonatomic) NSArray *actions; // @synthesize actions=_actions;
- (void).cxx_destruct;
- (id)descriptionForDataclassAction:(id)arg1;
- (id)message;
- (id)title;
- (id)showInViewController:(id)arg1;
@property(readonly, nonatomic) long long priorityIndex;
- (_Bool)hasActionOfType:(long long)arg1;
@property(readonly, nonatomic) ACDataclassAction *firstDestructiveAction;
@property(readonly, nonatomic) _Bool hasDestructiveActions;
- (void)addAffectedDataclass:(id)arg1;
- (id)initWithActions:(id)arg1 affectingAccount:(id)arg2;

@end

