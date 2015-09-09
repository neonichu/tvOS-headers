//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSListController.h>

#import <DataAccessUI/DADiagnosticSaveNotesDelegate-Protocol.h>
#import <DataAccessUI/UIAlertViewDelegate-Protocol.h>

@class NSString, UIAlertView;

@interface DADiagnosticsPSController : PSListController <DADiagnosticSaveNotesDelegate, UIAlertViewDelegate>
{
    UIAlertView *_simpleAlert;
    UIAlertView *_savingDataAlert;
    SEL _simpleConfirmSheetDismissedSEL;
}

+ (id)dumpRuntimeStateSpecifiers;
+ (id)linkSpecifier;
+ (_Bool)diagnosticsVisible;
- (void).cxx_destruct;
- (void)purgeFileAtPath:(id)arg1;
- (id)pathsOfPurgableFiles;
- (id)pathsOfAllLogFiles;
- (void)handleClearAllLogsForSpecifier:(id)arg1;
- (void)suspend;
- (void)handleSaveAllLogsForSpecifier:(id)arg1;
- (void)_dismissSavingDataAlert;
- (void)handleSaveAllLogsStep2;
- (void)_presentNotesController;
- (void)saveNotesInBackground:(id)arg1;
- (void)saveLogsWithNotes:(id)arg1;
- (_Bool)saveFileAtPath:(id)arg1 toDirectory:(id)arg2 withExtension:(id)arg3 error:(id *)arg4;
- (id)savedLogsDirectoryNameForSpecifier:(id)arg1;
- (void)handleDumpRuntimeStateForSpecifier:(id)arg1;
- (_Bool)isLoggingEnabledForSpecifier:(id)arg1;
- (void)setLoggingEnabled:(_Bool)arg1 forSpecifier:(id)arg2;
- (id)booleanPropertyWithSpecifier:(id)arg1;
- (void)setBooleanProperty:(id)arg1 withSpecifier:(id)arg2;
- (void)runSimpleAlertWithTitle:(id)arg1 message:(id)arg2;
- (void)runSimpleAlertWithTitle:(id)arg1 message:(id)arg2 dismissedSelector:(SEL)arg3;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)specifiers;
- (id)diagnosticSpecifiers;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

