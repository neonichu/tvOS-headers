//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FMCoreLite/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString, NSUUID;

@interface FMAlert : NSObject <NSSecureCoding>
{
    _Bool _showMsgInLockScreen;
    _Bool _dismissMsgOnUnlock;
    _Bool _dismissMsgOnLock;
    NSUUID *_alertId;
    unsigned long long _category;
    NSString *_msgTitle;
    NSString *_msgText;
    NSString *_defaultButtonTitle;
    NSString *_alternateButtonTitle;
    double _timeout;
    NSDictionary *_additionalSettings;
    CDUnknownBlockType _defaultButtonAction;
    CDUnknownBlockType _alternateButtonAction;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) CDUnknownBlockType alternateButtonAction; // @synthesize alternateButtonAction=_alternateButtonAction;
@property(copy, nonatomic) CDUnknownBlockType defaultButtonAction; // @synthesize defaultButtonAction=_defaultButtonAction;
@property(retain, nonatomic) NSDictionary *additionalSettings; // @synthesize additionalSettings=_additionalSettings;
@property(nonatomic) _Bool dismissMsgOnLock; // @synthesize dismissMsgOnLock=_dismissMsgOnLock;
@property(nonatomic) _Bool dismissMsgOnUnlock; // @synthesize dismissMsgOnUnlock=_dismissMsgOnUnlock;
@property(nonatomic) _Bool showMsgInLockScreen; // @synthesize showMsgInLockScreen=_showMsgInLockScreen;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(retain, nonatomic) NSString *alternateButtonTitle; // @synthesize alternateButtonTitle=_alternateButtonTitle;
@property(retain, nonatomic) NSString *defaultButtonTitle; // @synthesize defaultButtonTitle=_defaultButtonTitle;
@property(retain, nonatomic) NSString *msgText; // @synthesize msgText=_msgText;
@property(retain, nonatomic) NSString *msgTitle; // @synthesize msgTitle=_msgTitle;
@property(nonatomic) unsigned long long category; // @synthesize category=_category;
@property(retain, nonatomic) NSUUID *alertId; // @synthesize alertId=_alertId;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

