//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AddressBookUI/ABStyleProviding-Protocol.h>

@class ABCardPropertyPicker;

@protocol ABCardPropertyPickerDelegate <ABStyleProviding>
- (void)propertyPicker:(ABCardPropertyPicker *)arg1 selectedProperty:(int)arg2 withDefaultValue:(id)arg3;
- (void)propertyPicker:(ABCardPropertyPicker *)arg1 selectedProperty:(int)arg2;
@end
