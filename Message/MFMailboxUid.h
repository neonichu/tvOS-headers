//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Message/NSCopying-Protocol.h>

@class MFMessageCriterion, MFWeakReferenceHolder, MailAccount, NSArray, NSMutableArray, NSMutableDictionary, NSNumber, NSString;

@interface MFMailboxUid : NSObject <NSCopying>
{
    NSString *uniqueId;
    unsigned int _mailboxID;
    MFWeakReferenceHolder *_account;
    NSString *_pathComponent;
    unsigned int _attributes;
    MFWeakReferenceHolder *_parent;
    NSMutableArray *_children;
    MailAccount *_representedAccount;
    MFMessageCriterion *_criterion;
    _Bool allCriteriaMustBeSatisfied;
    NSString *_realFullPath;
    NSArray *_extraAttributes;
    NSNumber *_pendingLevel;
    int _type;
    NSMutableDictionary *_userInfo;
    NSString *_permanentTag;
}

+ (_Bool)isSentMailboxType:(int)arg1;
+ (_Bool)isDraftsMailboxType:(int)arg1;
+ (_Bool)isOutgoingMailboxType:(int)arg1;
+ (_Bool)isSpecialMailboxUidType:(int)arg1;
+ (id)specialNameForType:(int)arg1;
@property(retain, nonatomic) NSString *permanentTag; // @synthesize permanentTag=_permanentTag;
@property(retain, nonatomic) NSArray *extraAttributes; // @synthesize extraAttributes=_extraAttributes;
- (void)updateSuggestionsLostMessageSearchResultCount:(unsigned long long)arg1;
@property(readonly, nonatomic) double suggestionsLostMessageSearchTimestamp;
@property(readonly, nonatomic) unsigned long long suggestionsLostMessageSearchResultCount;
- (void)addToPostOrderTraversal:(id)arg1;
- (void)setLastViewedMessageID:(id)arg1;
- (id)lastViewedMessageDate;
- (id)lastViewedMessageID;
- (_Bool)alwaysWriteFullMessageFile;
- (_Bool)shouldRestoreMessagesAfterFailedDelete;
- (_Bool)isSelectable;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)store;
- (void)setCriterion:(id)arg1;
- (id)criterion;
- (id)ancestralAccount;
- (id)userInfoForSerialization;
- (void)setUserInfoWithDictionary:(id)arg1;
- (id)userInfoDictionary;
- (_Bool)mergeWithUserInfo:(id)arg1;
- (void)saveUserInfo;
- (void)setUserInfoBool:(_Bool)arg1 forKey:(id)arg2;
- (_Bool)userInfoBoolForKey:(id)arg1;
- (void)setUserInfoObject:(id)arg1 forKey:(id)arg2;
- (id)userInfoObjectForKey:(id)arg1;
- (id)_loadUserInfo;
- (_Bool)isVisible;
- (void)setType:(int)arg1;
- (int)type;
- (id)description;
- (_Bool)isDescendantOfMailbox:(id)arg1;
- (long long)indexToInsertChildMailboxUid:(id)arg1;
- (long long)compareWithMailboxUid:(id)arg1;
- (id)URLStringNonNil;
- (unsigned int)mailboxID;
- (id)URLString;
- (id)oldURLString;
- (id)URLStringWithAccount:(id)arg1;
- (id)URL;
- (id)pathRelativeToMailboxForDisplay:(id)arg1;
- (id)pathRelativeToMailbox:(id)arg1;
- (id)tildeAbbreviatedPath;
- (id)realFullPath;
- (id)fullPath;
- (id)accountRelativePath;
- (_Bool)isOutgoingMailboxUid;
- (_Bool)isSpecialMailboxUid;
- (_Bool)isStore;
- (_Bool)isContainer;
- (void)invalidate;
- (_Bool)isValid;
- (id)account;
- (id)rootMailbox;
- (id)topMailbox;
- (id)representedAccount;
- (void)setRepresentedAccount:(id)arg1;
- (void)flushCriteria;
- (void)setParent:(id)arg1;
- (void)removeChild:(id)arg1;
- (id)parent;
- (void)sortChildren;
- (_Bool)setChildren:(id)arg1;
- (id)fullPathNonNil;
- (id)mutableCopyOfChildren;
- (id)descendantWithPermanentTag:(id)arg1;
- (id)descendantWithExtraAttribute:(id)arg1;
- (id)childWithPermanentTag:(id)arg1;
- (id)childWithExtraAttribute:(id)arg1;
- (id)childWithName:(id)arg1;
- (unsigned long long)indexOfChild:(id)arg1;
- (id)childAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfDescendants;
- (unsigned long long)numberOfChildren;
- (id)depthFirstEnumerator;
- (id)childEnumeratorIncludingHiddenChildren:(_Bool)arg1;
- (id)childEnumerator;
- (_Bool)hasChildren;
- (id)_mutableChildren;
- (id)children;
- (unsigned long long)nonDeletedCount;
- (_Bool)setUnreadCount:(unsigned long long)arg1;
- (unsigned long long)unreadCountMatchingCriterion:(id)arg1;
- (unsigned long long)unreadCount;
- (unsigned long long)serverUnreadOnlyOnServerCount;
- (void)setAttributes:(unsigned int)arg1;
- (unsigned int)attributes;
- (void)setName:(id)arg1;
- (id)displayNameUsingSpecialNames;
- (id)name;
- (id)displayName;
- (id)uniqueId;
- (id)initWithName:(id)arg1 attributes:(unsigned int)arg2 forAccount:(id)arg3 permanentTag:(id)arg4;
- (id)initWithName:(id)arg1 attributes:(unsigned int)arg2 forAccount:(id)arg3 extraAttributes:(id)arg4;
- (id)_initWithName:(id)arg1 attributes:(unsigned int)arg2 forAccount:(id)arg3;
- (id)initWithAccount:(id)arg1;
- (id)init;
- (void)dealloc;

@end

