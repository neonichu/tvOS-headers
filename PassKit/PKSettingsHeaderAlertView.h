//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PassKit/PSHeaderFooterView-Protocol.h>

@class NSString, UITextView;

@interface PKSettingsHeaderAlertView : UIView <PSHeaderFooterView>
{
    UITextView *_textView;
    NSString *_headerText;
    NSString *_descriptionText;
}

@property(retain, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(retain, nonatomic) NSString *headerText; // @synthesize headerText=_headerText;
- (double)preferredHeightForWidth:(double)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithSpecifier:(id)arg1;

@end

