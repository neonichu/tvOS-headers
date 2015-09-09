//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsUI/CNPropertyGroupItem.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNPropertyGroupAlertItem : CNPropertyGroupItem
{
    long long _alertKind;
}

+ (id)emptyValueForLabel:(id)arg1;
@property(nonatomic) long long alertKind; // @synthesize alertKind=_alertKind;
- (id)_vibrationManager;
- (id)_toneManager;
- (id)description;
- (_Bool)isEquivalentToItem:(id)arg1 whenEditing:(_Bool)arg2;
- (_Bool)canRemove;
- (_Bool)isValidValue:(id)arg1;
- (id)displayStringForValue:(id)arg1;
- (id)displayLabel;
- (void)updateLabeledValueWithValue:(id)arg1;
- (void)setLabeledValue:(id)arg1;
- (id)labeledValue;
@property(readonly, nonatomic) NSString *alertIdentifier;
- (id)activityAlertKey;

@end

