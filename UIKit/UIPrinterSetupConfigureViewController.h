//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <UIKit/UITableViewDataSource-Protocol.h>
#import <UIKit/UITextFieldDelegate-Protocol.h>

@class NSString, PKPrinter, UIButton, UIPrinterSetupConnectingView;

__attribute__((visibility("hidden")))
@interface UIPrinterSetupConfigureViewController : UITableViewController <UITableViewDataSource, UITextFieldDelegate>
{
    _Bool _addToNetwork;
    _Bool _directPrinting;
    PKPrinter *_printer;
    NSString *_directPasscode;
    UIButton *_finishButton;
    UIPrinterSetupConnectingView *_connectingView;
}

@property(retain, nonatomic) UIPrinterSetupConnectingView *connectingView; // @synthesize connectingView=_connectingView;
@property(retain, nonatomic) UIButton *finishButton; // @synthesize finishButton=_finishButton;
@property(copy, nonatomic) NSString *directPasscode; // @synthesize directPasscode=_directPasscode;
@property(nonatomic) _Bool directPrinting; // @synthesize directPrinting=_directPrinting;
@property(nonatomic) _Bool addToNetwork; // @synthesize addToNetwork=_addToNetwork;
@property(retain, nonatomic) PKPrinter *printer; // @synthesize printer=_printer;
- (void).cxx_destruct;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textDidChange:(id)arg1;
- (void)finish;
- (void)finished:(_Bool)arg1;
- (void)toggleDirectPrinting:(id)arg1;
- (void)toggleAddToNetwork:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithPrinter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

