/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@class <MPUSystemMediaControlsDelegate>, MPAVRoutingController, MPUNowPlayingController, NSArray, NSDictionary, NSString, NSTimer, RUTrackActionsModalItem, RUTrackActionsViewController, UIImageView, UIPopoverController, UIView, _MPUSystemMediaControlsView;

@interface MPUSystemMediaControlsViewController : UIViewController <MPUNowPlayingDelegate, MPUTransportControlsViewDelegate, MPURemoteViewControllerPresentation, MPUChronologicalProgressViewDelegate, MPUMediaControlsTitlesViewDelegate, MPAVRoutingControllerDelegate, RUTrackActionsDelegate, UIModalItemDelegate, UIPopoverControllerDelegate> {
    UIImageView *_artworkImageView;
    NSString *_audioCategoryForDisabledHUD;
    NSArray *_currentlySupportedCommands;
    <MPUSystemMediaControlsDelegate> *_delegate;
    double _lastDurationFromUpdate;
    BOOL _lockscreenDisabledForScreenTurnOff;
    _MPUSystemMediaControlsView *_mediaControlsView;
    MPUNowPlayingController *_nowPlayingController;
    NSDictionary *_nowPlayingInfoForPresentedTrackActions;
    BOOL _nowPlayingInfoIsOverridingSupportedCommands;
    BOOL _persistentUpdatesEnabled;
    MPAVRoutingController *_routingController;
    unsigned int _runningLongPressCommand;
    double _scrubbedTimeDestination;
    NSTimer *_scrubberCommitTimer;
    int _style;
    RUTrackActionsModalItem *_trackActionsModalItem;
    UIPopoverController *_trackActionsPopoverController;
    RUTrackActionsViewController *_trackActionsViewController;
    BOOL _wantsToLaunchNowPlayingApp;
}

@property(readonly) UIView * artworkView;
@property <MPUSystemMediaControlsDelegate> * delegate;
@property BOOL persistentUpdatesEnabled;
@property(readonly) int style;

- (void).cxx_destruct;
- (void)_applyNowPlayingInformation:(id)arg1 toTrackActioningController:(id)arg2;
- (void)_backlightLevelChangedNotification:(id)arg1;
- (void)_beginScrubberCommitTimer;
- (void)_cancelRunningLongPressCommand;
- (void)_commitCurrentScrubberValue;
- (void)_infoButtonTapped:(id)arg1;
- (void)_launchCurrentNowPlayingApp;
- (void)_likeBanButtonTapped:(id)arg1;
- (void)_setupNotifications;
- (void)_stopScrubberCommitTimer;
- (void)_supportedCommandsDidChangeNotification:(id)arg1;
- (void)_tearDownNotifications;
- (void)_updateSupportedCommands;
- (id)artworkView;
- (void)dealloc;
- (id)delegate;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(int)arg1;
- (void)loadView;
- (void)mediaControlsTitlesViewWasTapped:(id)arg1;
- (void)modalItem:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)nowPlayingController:(id)arg1 elapsedTimeDidChange:(double)arg2;
- (void)nowPlayingController:(id)arg1 nowPlayingApplicationDidChange:(id)arg2;
- (void)nowPlayingController:(id)arg1 nowPlayingInfoDidChange:(id)arg2;
- (void)nowPlayingController:(id)arg1 playbackStateDidChange:(BOOL)arg2;
- (BOOL)persistentUpdatesEnabled;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)progressViewDidBeginScrubbing:(id)arg1;
- (void)progressViewDidEndScrubbing:(id)arg1;
- (void)remoteViewControllerDidFinish;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPersistentUpdatesEnabled:(BOOL)arg1;
- (int)style;
- (void)trackActioningObject:(id)arg1 didSelectAction:(int)arg2 atIndex:(int)arg3;
- (id)trackActioningObject:(id)arg1 localizedTitleForAction:(int)arg2;
- (void)transportControlsView:(id)arg1 longPressBeginOnControlType:(int)arg2;
- (void)transportControlsView:(id)arg1 longPressEndOnControlType:(int)arg2;
- (void)transportControlsView:(id)arg1 tapOnAccessoryButtonType:(int)arg2;
- (void)transportControlsView:(id)arg1 tapOnControlType:(int)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end