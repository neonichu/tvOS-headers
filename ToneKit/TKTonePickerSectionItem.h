//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ToneKit/TKPickerSectionItem.h>

#import <ToneKit/TKPickerContainerItem-Protocol.h>

@class NSString, TKTonePickerController;

@interface TKTonePickerSectionItem : TKPickerSectionItem <TKPickerContainerItem>
{
    TKTonePickerController *_parentTonePickerController;
    long long _numberOfChildren;
    unsigned long long _sectionHeader;
    unsigned long long _regularToneSectionIndex;
}

- (void)_setRegularToneSectionIndex:(unsigned long long)arg1;
@property(nonatomic) unsigned long long regularToneSectionIndex; // @synthesize regularToneSectionIndex=_regularToneSectionIndex;
- (void)_setSectionHeader:(unsigned long long)arg1;
@property(nonatomic) unsigned long long sectionHeader; // @synthesize sectionHeader=_sectionHeader;
- (void)_setNumberOfChildren:(long long)arg1;
@property(nonatomic) long long numberOfChildren; // @synthesize numberOfChildren=_numberOfChildren;
@property(nonatomic, setter=_setParentTonePickerController:) TKTonePickerController *_parentTonePickerController; // @synthesize _parentTonePickerController;
- (void)_appendDescriptionOfAttributesToString:(id)arg1;
- (id)childItemAtIndex:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

