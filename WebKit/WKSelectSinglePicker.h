//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPickerView.h>

#import <WebKit/UIPickerViewDataSource-Protocol.h>
#import <WebKit/UIPickerViewDelegate-Protocol.h>
#import <WebKit/WKFormControl-Protocol.h>

@class NSString, WKContentView;

__attribute__((visibility("hidden")))
@interface WKSelectSinglePicker : UIPickerView <WKFormControl, UIPickerViewDataSource, UIPickerViewDelegate>
{
    WKContentView *_view;
    long long _selectedIndex;
}

- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 attributedTitleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)controlEndEditing;
- (void)controlBeginEditing;
- (id)controlView;
- (void)dealloc;
- (id)initWithView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

