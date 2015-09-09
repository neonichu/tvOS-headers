//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSLock, NSMutableDictionary, NSMutableSet, NSNumber, NSOrderedSet, NSSet, NSString, NSURL, NSUUID;

@interface AXSettings : NSObject
{
    NSLock *_synchronizeDomainsLock;
    NSMutableSet *_migratedSwitchControlMenuItemsPreferenceKeys;
    NSMutableSet *_registeredNotifications;
    NSMutableDictionary *_synchronizeDomains;
    NSMutableDictionary *_updateBlocks;
}

+ (id)sharedInstance;
+ (void)initialize;
@property(retain, nonatomic) NSMutableDictionary *updateBlocks; // @synthesize updateBlocks=_updateBlocks;
@property(retain, nonatomic) NSMutableDictionary *synchronizeDomains; // @synthesize synchronizeDomains=_synchronizeDomains;
@property(retain, nonatomic) NSMutableSet *registeredNotifications; // @synthesize registeredNotifications=_registeredNotifications;
@property(nonatomic) float reduceWhitePointLevel;
@property(retain, nonatomic) NSURL *alexLocalAssetURL;
@property(nonatomic) _Bool gizmoApplicationAccessibilityEnabled;
@property(nonatomic) _Bool stickyKeysBeepEnabled;
@property(nonatomic) _Bool stickyKeysShiftToggleEnabled;
@property(nonatomic) _Bool stickyKeysEnabled;
@property(nonatomic) double touchAccommodationsTapActivationTimeout;
@property(nonatomic) long long touchAccommodationsTapActivationMethod;
@property(nonatomic) double touchAccommodationsIgnoreRepeatDuration;
@property(nonatomic) _Bool touchAccommodationsIgnoreRepeatEnabled;
@property(nonatomic) double touchAccommodationsHoldDuration;
@property(nonatomic) _Bool touchAccommodationsHoldDurationEnabled;
@property(nonatomic) _Bool touchAccommodationsUsageConfirmed;
@property(nonatomic) _Bool touchAccommodationsTripleClickConfirmed;
@property(readonly, nonatomic) _Bool touchAccommodationsAreConfigured;
@property(nonatomic) _Bool touchAccommodationsEnabled;
- (void)_updateTouchAccommodationsTripleClickSetting;
@property(nonatomic) _Bool shouldStreamToRightAid;
@property(nonatomic) _Bool shouldStreamToLeftAid;
@property(nonatomic) _Bool allowHearingAidControlOnLockScreen;
@property(nonatomic) _Bool independentHearingAidSettings;
@property(retain, nonatomic) NSDictionary *pairedHearingAids;
@property(nonatomic) long long voiceOverNavigationDirectionMode;
@property(nonatomic) double voiceOverDoubleTapInterval;
@property(nonatomic) double voiceOverBrailleAlertDisplayDuration;
@property(nonatomic) _Bool voiceOverTouchBrailleGesturesDidPlayCalibrationHint;
@property(nonatomic) long long voiceOverTouchBrailleGesturesLockedTypingMode;
@property(nonatomic) int voiceOverTouchBrailleGesturesLockedOrientation;
@property(nonatomic) _Bool voiceOverTouchBrailleGesturesShouldUseLockedConfiguration;
@property(nonatomic) _Bool voiceOverShouldOutputToHearingAid;
- (float)voiceOverSpeakingRateForLanguage:(id)arg1;
- (void)setVoiceOverSpeakingRate:(float)arg1 forLanguage:(id)arg2;
- (id)_voiceOverTouchSpeakingRateLanguages;
- (id)voiceOverAlternativeVoiceIdentifier:(id)arg1;
- (void)setVoiceOverAlternativeVoiceIdentifier:(id)arg1 forLanguage:(id)arg2;
- (void)clearVoicePrefersCompactSettings;
- (_Bool)voiceOverPrefersCompact:(id)arg1;
- (void)setVoiceOverPrefersCompact:(_Bool)arg1 forLanguage:(id)arg2;
@property(nonatomic) _Bool voiceOverShowSoftwareKeyboardWithBraille;
@property(nonatomic) _Bool voiceOverBrailleGradeTwoAutoTranslateEnabled;
@property(retain, nonatomic) NSNumber *voiceOverHandwritingWasNativeAutocorrectEnabled;
@property(copy, nonatomic) NSString *voiceOverDefaultDialect;
@property(nonatomic) _Bool voiceOverAlwaysUseNemethCodeForMathEnabled;
@property(copy, nonatomic) NSString *voiceOverBrailleTableIdentifier;
- (_Bool)_anyUserPreferredLangaugeIsRTL;
@property(copy, nonatomic) NSArray *voiceOverRotorItems;
@property(nonatomic) _Bool voiceOverSpeakNotificationsEnabled;
@property(nonatomic) _Bool voiceOverSpeakingRateInRotorEnabled;
@property(nonatomic) _Bool voiceOverSoundEffectsEnabled;
@property(nonatomic) _Bool voiceOverPitchChangeEnabled;
@property(nonatomic) _Bool voiceOverAudioDuckingEnabled;
@property(nonatomic) _Bool voiceOverHintsEnabled;
@property(readonly, nonatomic) _Bool voiceOverBrailleGesturesEnabled;
@property(readonly, nonatomic) _Bool voiceOverHandwritingEnabled;
- (_Bool)_voiceOverRotorItemEnabled:(id)arg1;
@property(nonatomic) _Bool voiceOverCompactVoiceEnabled;
@property(nonatomic) long long voiceOverActivationWorkaround;
@property(nonatomic) long long voiceOverBrailleGesturesTypingFeedback;
@property(nonatomic) long long voiceOverSoftwareTypingFeedback;
@property(nonatomic) long long voiceOverHardwareTypingFeedback;
@property(nonatomic) long long voiceOverPhoneticsFeedback;
@property(nonatomic) long long voiceOverNavigateImagesOption;
@property(nonatomic) long long voiceOverHelpMode;
@property(nonatomic) _Bool voiceOverLargeCursorEnabled;
@property(nonatomic) _Bool voiceOverTouchSingleLetterQuickNavEnabled;
@property(nonatomic) _Bool voiceOverTouchBraillePanningAutoTurnsReadingContent;
@property(nonatomic) long long voiceOverTouchBrailleGesturesInputMode;
@property(nonatomic) long long voiceOverTouchBrailleDisplayOutputMode;
@property(nonatomic) long long voiceOverTouchBrailleDisplayInputMode;
@property(retain, nonatomic) NSArray *voiceOverPronunciationDictionary;
@property(nonatomic) struct CGPoint quickSpeakNubbitNormalizedPosition;
- (float)quickSpeakSpeakingRateForLanguage:(id)arg1;
- (void)setQuickSpeakSpeakingRate:(float)arg1 forLanguage:(id)arg2;
- (id)_quickSpeakSpeakingRateLanguages;
- (void)setQuickSpeakAlternativeVoice:(id)arg1 forLanguage:(id)arg2;
- (id)quickSpeakAlternativeVoiceForLanguage:(id)arg1;
- (void)setQuickSpeakCompactPreference:(id)arg1 prefersCompact:(_Bool)arg2;
- (_Bool)quickSpeakCompactPreference:(id)arg1;
@property(nonatomic) float quickSpeakSpeakingRate;
@property(nonatomic) _Bool quickSpeakHighlightText;
@property(nonatomic) float quickSpeakVolume;
@property(nonatomic) _Bool speakCorrectionsEnabled;
@property(retain, nonatomic) NSNumber *guidedAccessOverrideTimeRestrictionDuration;
@property(nonatomic) _Bool guidedAccessDisallowDirectInactiveToActiveTransition;
@property(nonatomic) _Bool enableHearingAidReporter;
@property(nonatomic) _Bool skipHearingAidMFiAuth;
@property(nonatomic) _Bool voiceOverHearingAidRoutingEnabled;
@property(nonatomic) long long voiceOverKeyboardModifierChoice;
@property(retain, nonatomic) NSArray *allAvailableVoices;
@property(nonatomic) _Bool enableVoiceOverCaptions;
@property(nonatomic) long long internalLoggingColorTheme;
@property(nonatomic) _Bool logAXNotificationPosting;
@property(nonatomic) _Bool ignoreAXServerEntitlements;
@property(nonatomic) _Bool ignoreAXAsserts;
@property(retain, nonatomic) NSArray *logToFileSubsystems;
@property(nonatomic) _Bool writeAXLogsToFile;
@property(nonatomic) _Bool includeBacktraceInLogs;
@property(nonatomic) _Bool validateSecondPartyApps;
@property(nonatomic) _Bool assistiveTouchHeadlessModeEnabled;
@property(nonatomic) _Bool assistiveTouchCameraSwitchPreviewEnabled;
@property(retain, nonatomic) NSDate *gaxInternalSettingsLastPasscodeSetDate;
@property(retain, nonatomic) NSDate *gaxInternalSettingsLastActivationDate;
@property(copy, nonatomic) NSString *gaxInternalSettingsProductBuildVersion;
@property(copy, nonatomic) NSString *gaxInternalSettingsDeviceID;
@property(nonatomic) _Bool gaxInternalSettingsSystemDidRestartDueToLowBattery;
@property(nonatomic) _Bool gaxInternalSettingsIsActiveAppSelfLocked;
@property(nonatomic) _Bool gaxInternalSettingsTimeRestrictionHasExpired;
@property(copy, nonatomic) NSString *gaxInternalSettingsActiveAppID;
@property(copy, nonatomic) NSNumber *gaxInternalSettingsActiveAppOrientation;
@property(retain, nonatomic) NSArray *gaxInternalSettingsUserConfiguredAppIDs;
@property(retain, nonatomic) NSArray *gaxInternalSettingsSavedAccessibilityTripleClickOptions;
@property(retain, nonatomic) NSDictionary *gaxInternalSettingsSavedAccessibilityFeatures;
@property(retain, nonatomic) NSDictionary *gaxInternalSettingsUserGlobalProfile;
@property(retain, nonatomic) NSDictionary *gaxInternalSettingsUserAppProfile;
@property(nonatomic) _Bool guidedAccessShouldSpeakForTimeRestrictionEvents;
@property(readonly, nonatomic) NSString *guidedAccessDefaultToneIdentifierForTimeRestrictionEvents;
@property(copy, nonatomic) NSString *guidedAccessToneIdentifierForTimeRestrictionEvents;
@property(nonatomic) _Bool guidedAccessAllowsUnlockWithTouchID;
@property(nonatomic) _Bool guidedAccessAXFeaturesEnabled;
@property(nonatomic) long long guidedAccessUsageCount;
@property(nonatomic) _Bool zoomDebugShowExternalFocusRect;
@property(nonatomic) _Bool zoomDebugDisableZoomLensScaleTransform;
- (void)zoomUserHadLegacyZoomEnabled:(_Bool *)arg1 wasZoomedIn:(_Bool *)arg2 withScale:(double *)arg3;
@property(nonatomic) _Bool zoomShouldAllowFullscreenAutopanning;
@property(nonatomic) double zoomIdleSlugOpacity;
@property(retain, nonatomic) NSOrderedSet *zoomPreferredLensModes;
@property(nonatomic) double zoomPreferredMaximumZoomScale;
@property(retain, nonatomic) NSString *zoomPreferredCurrentLensMode;
@property(nonatomic) _Bool zoomAlwaysUseWindowedZoomForTyping;
@property(nonatomic) _Bool zoomPeekZoomEverEnabled;
@property(nonatomic) _Bool zoomPeekZoomEnabled;
@property(nonatomic) _Bool zoomShouldShowSlug;
@property(nonatomic) _Bool zoomShouldFollowFocus;
@property(retain, nonatomic) NSString *zoomCurrentLensMode;
@property(nonatomic) _Bool zoomInStandby;
@property(retain, nonatomic) NSString *zoomCurrentLensEffect;
@property(nonatomic) struct CGPoint zoomSlugNormalizedPosition;
@property(nonatomic) struct CGPoint zoomPanOffset;
@property(nonatomic) double zoomScale;
@property(nonatomic) struct CGRect zoomWindowFrame;
@property(nonatomic) _Bool zoomPreferencesWereInitialized;
- (void)_switchControlClearMenuItemMigrationTracking;
- (void)_switchControlClearMenuItemPreferences;
@property(nonatomic) _Bool switchControlShouldAlwaysActivateKeyboardKeys;
@property(nonatomic) double switchControlAutoTapTimeout;
@property(nonatomic) long long switchControlTapBehavior;
@property(nonatomic) double switchControlDwellTime;
@property(nonatomic) long long switchControlScanningStyle;
@property(retain, nonatomic) NSArray *switchControlSettingsMenuItems;
@property(retain, nonatomic) NSArray *switchControlDeviceMenuItems;
@property(retain, nonatomic) NSArray *switchControlGesturesMenuItems;
@property(nonatomic) _Bool switchControlShouldUseShortFirstPage;
- (_Bool)_switchControlHasEmptyTopLevelMenuItems:(id)arg1;
@property(readonly, nonatomic) _Bool switchControlHasEmptyTopLevelMenu;
@property(retain, nonatomic) NSArray *switchControlTopLevelMenuItems;
- (id)_switchControlMigratePreMonarchIncludedMenuItemsForNewTypes:(id)arg1;
- (id)_switchControlMenuItemsForPreferenceKey:(id)arg1 allTypes:(id)arg2;
@property(retain, nonatomic) NSUUID *switchControlLaunchRecipeUUID;
@property(retain, nonatomic) NSArray *switchControlRecipes;
- (id)assistiveTouchScannerAlternativeVoiceId:(id)arg1;
- (void)setAssistiveTouchScannerAlternativeVoiceId:(id)arg1 forLanguage:(id)arg2;
@property(retain, nonatomic) NSDictionary *assistiveTouchMainScreenCustomization;
@property(retain, nonatomic) NSString *assistiveTouchOrbAction;
- (_Bool)assistiveTouchScannerPrefersCompact:(id)arg1;
- (void)setAssistiveTouchScannerPrefersCompact:(_Bool)arg1 forLanguage:(id)arg2;
@property(retain, nonatomic) NSString *assistiveTouchScannerDefaultDialect;
@property(nonatomic) _Bool assistiveTouchScannerAddedTripleClickAutomatically;
@property(nonatomic) _Bool assistiveTouchSwitchUsageConfirmed;
@property(nonatomic) long long assistiveTouchHeadMovementSensitivity;
@property(nonatomic) long long assistiveTouchCursorColor;
@property(retain, nonatomic) NSSet *assistiveTouchSwitches;
@property(nonatomic) double assistiveTouchScannerSpeechRate;
@property(nonatomic) _Bool assistiveTouchScannerSpeechEnabled;
@property(nonatomic) _Bool assistiveTouchScannerSoundEnabled;
@property(nonatomic) long long assistiveTouchScanCycles;
@property(nonatomic) double assistiveTouchScanTimeout;
@property(nonatomic) _Bool assistiveTouchScanTimeoutEnabled;
@property(nonatomic) double assistiveTouchStepInterval;
@property(nonatomic) _Bool assistiveTouchInputCoalescingEnabled;
@property(nonatomic) double assistiveTouchInputCoalescingDuration;
@property(nonatomic) _Bool assistiveTouchLongPressEnabled;
@property(nonatomic) double assistiveTouchLongPressDuration;
@property(nonatomic) _Bool assistiveTouchInputHoldEnabled;
@property(nonatomic) double assistiveTouchInputHoldDuration;
@property(nonatomic) _Bool assistiveTouchDelayAfterInputEnabled;
@property(nonatomic) double assistiveTouchDelayAfterInput;
@property(nonatomic) _Bool assistiveTouchActionRepeatEnabled;
@property(nonatomic) double assistiveTouchActionRepeatInterval;
@property(nonatomic) double assistiveTouchAxisSweepSpeed;
@property(nonatomic) _Bool assistiveTouchScannerMenuLabelsEnabled;
@property(nonatomic) _Bool assistiveTouchScannerCompactMenuEnabled;
@property(nonatomic) _Bool assistiveTouchGroupElementsEnabled;
@property(nonatomic) _Bool assistiveTouchScannerPointPickerDefaultsToRescan;
- (_Bool)assistiveTouchAutoScanningEnabled;
@property(nonatomic) long long assistiveTouchScanningMode;
@property(nonatomic) _Bool assistiveTouchScannerCursorHighVisibilityEnabled;
@property(nonatomic) _Bool assistiveTouchScannerSpeechIsInterruptedByScanning;
@property(nonatomic) long long assistiveTouchPreferredPointPicker;
@property(retain, nonatomic) NSArray *assistiveTouchSavedGestures;
@property(retain, nonatomic) NSArray *assistiveTouchRecentGestures;
@property(retain, nonatomic) NSArray *assistiveTouchCustomGestures;
@property(nonatomic) double assistiveTouchSpeed;
@property(nonatomic) _Bool assistiveTouchOpenMenuSwaggleEnabled;
@property(nonatomic) _Bool assistiveTouchAlwaysShowMenuEnabled;
- (void)clearExistingValueForPreference:(SEL)arg1;
- (_Bool)preferenceHasExistingValue:(SEL)arg1;
- (void)registerUpdateBlock:(CDUnknownBlockType)arg1 forRetrieveSelector:(SEL)arg2 withListener:(id)arg3;
- (void)_registerForNotification:(id)arg1;
- (void)_handlePreferenceChanged:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)_synchronizeIfNecessary:(id)arg1 domain:(int)arg2;
- (_Bool)_switchFromRootUserIfNecessary:(CDUnknownBlockType)arg1;
- (id)_valueForPreferenceKey:(id)arg1;
- (void)_setValue:(id)arg1 forPreferenceKey:(id)arg2;
- (id)_notificationForPreferenceKey:(id)arg1;
- (id)_migratePreferenceIfNecessary:(id)arg1;
- (struct __CFString *)_domainNameForDomain:(int)arg1;
- (id)_preferenceKeyForSelector:(SEL)arg1;
- (int)_domainForPreferenceKey:(id)arg1;
- (id)switchForUUID:(id)arg1;
- (id)createAndSaveRecipeForInterfaceOrientedPoint:(struct CGPoint)arg1;
- (_Bool)isNewRecipe:(id)arg1;
- (void)saveRecipe:(id)arg1;
- (_Bool)updateRecipe:(id)arg1;
- (void)_assignDefaultTitleIfNeededToRecipe:(id)arg1;
- (_Bool)_updateWithoutSavingExistingRecipe:(id)arg1 allRecipes:(id)arg2;
- (_Bool)validateAndUpdateRecipeIfNeeded:(id)arg1;
- (id)_switchWithAnyActionExcludingUUIDs:(id)arg1 needsToSupportLongPress:(_Bool)arg2;
- (id)_switchWithAction:(long long)arg1 excludedUUIDs:(id)arg2 needsToSupportLongPress:(_Bool)arg3;
- (_Bool)_hasSwitchWithUUID:(id)arg1;

@end

