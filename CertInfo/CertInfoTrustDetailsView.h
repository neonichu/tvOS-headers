//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CertInfoCertificateDetailsView, NSArray;

@interface CertInfoTrustDetailsView : UIView
{
    NSArray *_certificateViews;
    CertInfoCertificateDetailsView *_currentCertView;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 trustProperties:(id)arg2;
- (void)_appendRemainingCertificates;

@end

