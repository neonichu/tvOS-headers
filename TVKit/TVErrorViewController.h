//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSString, UILabel;

@interface TVErrorViewController : UIViewController
{
    UILabel *_headerLabel;
    UILabel *_errorMessageLabel;
    NSString *_headerTitle;
    NSString *_errorMessage;
}

@property(copy, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(copy, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)loadView;

@end

