/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSMapTable, NSMutableArray, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_source>, RUPlaceholderView, RUSearchViewController, RUSignInViewController, RUTermsViewController, RUWelcomeViewController, RadioStation, UIAlertView, UIButton, UICollectionView, UILabel, UIScrollView, UISearchDisplayController, UIView;

@interface MusicRadioViewController : MPUDataSourceViewController <RUEditStationsViewControllerDelegate, RUHistoryViewControllerDelegate, RUSearchViewControllerDelegate, RUSignInViewControllerDelegate, RUStationActionsViewControllerDelegate, RUStationTreeViewControllerDelegate, RUTermsViewControllerDelegate, RUWelcomeViewControllerDelegate, UIAlertViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate, RUCreateStationViewControllerDelegate> {
    NSMutableArray *_authenticationResponseHandlers;
    id _deferredDeselectCompletionHandler;
    int _deselectDeferralCount;
    NSMapTable *_dispatchSourceImpressionTimersByStation;
    UIButton *_editButton;
    NSArray *_featuredStations;
    UICollectionView *_featuredStationsCollectionView;
    UILabel *_featuredStationsLabel;
    UIAlertView *_freeloaderAlertView;
    BOOL _hasEverReceivedWillAppear;
    BOOL _hasShownFeaturedSlideIn;
    NSObject<OS_dispatch_source> *_heartbeatInvalidTimerSource;
    double _highlightedItemTimestamp;
    NSObject<OS_dispatch_group> *_initialArtworkLoadGroup;
    BOOL _isFeaturedStationSlideInProgress;
    BOOL _isVisible;
    BOOL _isVisuallyEngaged;
    NSArray *_myStations;
    UICollectionView *_myStationsCollectionView;
    UILabel *_myStationsLabel;
    UIButton *_newButton;
    NSMutableArray *_optInCompletionHandlers;
    RUPlaceholderView *_placeholderView;
    RadioStation *_prospectiveStation;
    UIScrollView *_scrollView;
    UISearchDisplayController *_searchDisplayController;
    RUSearchViewController *_searchResultsViewController;
    UIButton *_seeAllButton;
    BOOL _shouldScrollSearchBar;
    BOOL _shouldShowSeeAllButton;
    RUSignInViewController *_signInViewController;
    UIView *_snapshotView;
    RUTermsViewController *_termsViewController;
    RUWelcomeViewController *_welcomeViewController;
}

+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;

- (void).cxx_destruct;
- (BOOL)MPH_supportsCoverFlow;
- (id)_addStationTileImage;
- (void)_addStationWithDictionary:(id)arg1 fromViewController:(id)arg2;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_attemptToPlayStation:(id)arg1 withPrefixItem:(id)arg2 keepPlayingCurrentItemIfPossible:(BOOL)arg3;
- (void)_authenticateForActiveAccountWithResponseHandler:(id)arg1;
- (void)_cancelHeartbeatInvalidTimer;
- (void)_cellularNetworkingAllowedDidChangeNotification:(id)arg1;
- (void)_completeStationAdditionTransactionWithStation:(id)arg1 stationDidExistBeforeAdding:(BOOL)arg2 prefixItem:(id)arg3 keepPlayingCurrentItemIfPossible:(BOOL)arg4;
- (id)_createBackdropBackgroundView;
- (void)_createPlaceholderViewIfNeeded;
- (void)_displayServiceUnavailable;
- (void)_doneAction:(id)arg1;
- (void)_editAction:(id)arg1;
- (void)_heartbeatDidChangeNotification:(id)arg1;
- (void)_historyAction:(id)arg1;
- (BOOL)_isNetworkTypeAllowed:(int)arg1;
- (BOOL)_isStationNowPlaying:(id)arg1;
- (void)_layoutCell:(id)arg1 inCollectionView:(id)arg2 forInterfaceOrientation:(int)arg3;
- (void)_layoutForInterfaceOrientation:(int)arg1;
- (void)_layoutScrollViewsForInterfaceOrientation:(int)arg1;
- (float)_myStationsCollectionViewVerticalOffsetForInterfaceOrientation:(int)arg1;
- (void)_networkTypeDidChangeNotification:(id)arg1;
- (void)_newAction:(id)arg1;
- (void)_playbackCoordinatorStationDidChangeNotification:(id)arg1;
- (void)_radioRequestDidFinishNotification:(id)arg1;
- (void)_refreshFeaturedStations;
- (void)_reloadImpressionTimersForVisibleStations;
- (void)_reloadSeeAllButtonAnimated:(BOOL)arg1;
- (void)_scrollStationToVisible:(id)arg1 stationDidExistBeforeAdding:(BOOL)arg2 prefixItem:(id)arg3 keepPlayingCurrentItemIfPossible:(BOOL)arg4;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_searchBarSearchingFrame;
- (id)_searchDisplayController;
- (void)_seeAllButtonAction:(id)arg1;
- (void)_setIsVisible:(BOOL)arg1;
- (void)_showWelcomeViewControllerIfNeeded;
- (id)_sortCollectionCells:(id)arg1 byDistanceFromCenter:(struct CGPoint { float x1; float x2; })arg2;
- (void)_startHeartbeatInvalidTimer;
- (void)_statusBarHeightChangedNotification:(id)arg1;
- (void)_storeBagDidLoadNotification:(id)arg1;
- (void)_synchronizeWithService;
- (void)_updateBarButtonItems;
- (void)_updateForChangedStoreBag:(id)arg1;
- (void)_updateScrollViewContentSizeForInterfaceOrientation:(int)arg1;
- (void)_updateSearchBarFrameForced:(BOOL)arg1;
- (void)_updateViewForNetworkType:(int)arg1;
- (void)_updateVisibleCellsNowPlayingStates;
- (void)_updateVisualEngagement;
- (void)_updateZOrderingForCollectionView:(id)arg1;
- (id)_visibleFeaturedStations;
- (void)addStationWithDictionary:(id)arg1 completionHandler:(id)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)attemptOptInWithCompletionHandler:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)completeAdditionOfStation:(id)arg1 withPrefixItem:(id)arg2 keepPlayingCurrentItemIfPossible:(BOOL)arg3 animated:(BOOL)arg4;
- (id)contentScrollView;
- (void)createStationViewController:(id)arg1 didSelectStation:(id)arg2;
- (void)createStationViewControllerDidFinish:(id)arg1;
- (void)dealloc;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)dismissViewControllerAnimated:(BOOL)arg1 completion:(id)arg2;
- (void)editStationsViewControllerDidFinish:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)historyViewControllerDidFinish:(id)arg1;
- (id)initWithDataSource:(id)arg1;
- (id)metricsPageDescriptionForSearchViewController:(id)arg1;
- (id)metricsPageTypeForSearchViewController:(id)arg1;
- (BOOL)music_beginPlaybackForVisibleContent;
- (id)music_prospectivePlaybackInformation;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (void)prepareToAddStation;
- (void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3;
- (void)radioCollectionViewDidChangeContentSize:(id)arg1;
- (void)reloadData;
- (void)scrollStationToVisible:(id)arg1 withCompletionHandler:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { float x1; float x2; })arg2 targetContentOffset:(inout struct CGPoint { float x1; float x2; }*)arg3;
- (void)searchViewController:(id)arg1 didSelectStation:(id)arg2;
- (void)searchViewControllerDidBeginSearching:(id)arg1;
- (void)searchViewControllerDidEndSearching:(id)arg1;
- (void)searchViewControllerWillBeginSearching:(id)arg1;
- (void)searchViewControllerWillEndSearching:(id)arg1;
- (void)signInViewController:(id)arg1 didCompleteWithAuthenticateResponse:(id)arg2;
- (void)stationTreeViewController:(id)arg1 didSelectStationTreeNode:(id)arg2;
- (void)termsViewController:(id)arg1 didAcceptTerms:(BOOL)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)welcomeViewController:(id)arg1 willDisplayFailureAlert:(id)arg2;
- (void)welcomeViewControllerDidOptIn:(id)arg1;
- (void)welcomeViewControllerDidReceiveServiceUnavailable:(id)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;

@end