//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, TVImageView, TVSImageProxy, UIImageView, UILabel;

@interface TVConferenceRoomDisplayPhotoView : UIView
{
    TVImageView *_backgroundImageView;
    UIView *_background;
    UIView *_contentContainer;
    UIImageView *_airPlayIcon;
    UILabel *_airPlayLabel;
    UILabel *_baseMessageTextLabel;
    UIImageView *_divider1;
    UILabel *_instructions1Number;
    UILabel *_instructions1Label;
    UILabel *_instructions1Text;
    UILabel *_instructions2Label;
    UILabel *_instructions2Text;
    UILabel *_instructions2Number;
    UIImageView *_divider2;
    UILabel *_customMessageText;
    NSString *_networkName;
    NSString *_deviceName;
    NSString *_customText;
}

+ (id)defaultLabelWithFont:(id)arg1;
+ (id)defaultTextColor;
+ (id)defaultLightTextColor;
+ (id)defaultBackgroundColor;
@property(copy, nonatomic) NSString *customText; // @synthesize customText=_customText;
@property(copy, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(copy, nonatomic) NSString *networkName; // @synthesize networkName=_networkName;
- (void).cxx_destruct;
@property(retain, nonatomic) TVSImageProxy *backgroundImage;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

