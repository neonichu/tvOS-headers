//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class PKPrinter;

@protocol UIPrinterBrowserOwner <NSObject>
@property(retain, nonatomic) PKPrinter *printer;
- (void)cancelPrinting;
- (_Bool)filtersPrinters;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)dismissAnimated:(_Bool)arg1;

@optional
- (_Bool)shouldShowPrinter:(PKPrinter *)arg1;
- (void)setUserSelectedPrinter:(_Bool)arg1;
@end

