//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppleAccount/AAResponse.h>

@class AAFamilyMember, NSArray, NSString;

@interface AAFamilyDetailsResponse : AAResponse
{
    NSArray *_members;
    _Bool _canAddMembers;
    _Bool _canAddChildMembers;
    AAFamilyMember *_organizer;
    AAFamilyMember *_me;
    NSArray *_invites;
    NSArray *_pendingMembers;
    NSString *_childAccountPrompt;
    NSString *_childAccountButtonTitle;
}

@property(readonly, nonatomic) NSString *childAccountButtonTitle; // @synthesize childAccountButtonTitle=_childAccountButtonTitle;
@property(readonly, nonatomic) NSString *childAccountPrompt; // @synthesize childAccountPrompt=_childAccountPrompt;
@property(readonly, nonatomic) _Bool canAddChildMembers; // @synthesize canAddChildMembers=_canAddChildMembers;
@property(readonly, nonatomic) _Bool canAddMembers; // @synthesize canAddMembers=_canAddMembers;
@property(readonly, nonatomic) NSArray *pendingMembers; // @synthesize pendingMembers=_pendingMembers;
@property(readonly, nonatomic) NSArray *invites; // @synthesize invites=_invites;
@property(readonly, nonatomic) AAFamilyMember *me; // @synthesize me=_me;
@property(readonly, nonatomic) AAFamilyMember *organizer; // @synthesize organizer=_organizer;
@property(readonly, nonatomic) NSArray *members; // @synthesize members=_members;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *firstNames;
@property(readonly, nonatomic) long long pendingInviteCount;
@property(readonly, nonatomic) long long pendingMemberCount;
@property(readonly, nonatomic) long long memberCount;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;

@end

