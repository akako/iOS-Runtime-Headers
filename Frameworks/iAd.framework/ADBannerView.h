/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@class ADAdRecipientRecord, <ADBannerViewDelegate>, NSString, UIView, ADRemoteView, ADTapGestureRecognizer;

@interface ADBannerView : UIView <ADAdRecipient> {
    ADAdRecipientRecord *_recipientRecord;
    int _adType;
    int _internalAdType;
    <ADBannerViewDelegate> *_weakDelegate;
    <ADBannerViewDelegate> *_internalDelegate;
    BOOL _bannerLoaded;
    NSString *_advertisingSection;
    BOOL _bannerViewActionInProgress;
    ADRemoteView *_remoteView;
    UIView *_dimmerView;
    ADTapGestureRecognizer *_gestureRecognizer;
    NSString *_authenticationUserName;
    NSString *_identifier;
    BOOL _policyEngineManaged;
    BOOL _createdForIBInternal;
    BOOL _hasFailedHitTest;
    BOOL _dimmed;
}

@property(readonly) int adType;
@property <ADBannerViewDelegate> * delegate;
@property(getter=isBannerLoaded,readonly) BOOL bannerLoaded;
@property(getter=isBannerViewActionInProgress) BOOL bannerViewActionInProgress;
@property(copy) NSString * advertisingSection;
@property(copy) NSString * identifier;
@property BOOL dimmed;
@property(retain) ADRemoteView * remoteView;
@property(retain) UIView * dimmerView;
@property(retain) ADTapGestureRecognizer * gestureRecognizer;
@property(copy) NSString * authenticationUserName;
@property(readonly) BOOL createdForIBInternal;
@property BOOL hasFailedHitTest;
@property int internalAdType;
@property <ADBannerViewDelegate> * _internalDelegate;
@property BOOL policyEngineManaged;

+ (struct CGSize { float x1; float x2; })sizeFromBannerContentSizeIdentifier:(id)arg1;
+ (void)setServerURL:(id)arg1;

- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)identifier;
- (void)dealloc;
- (void)setDimmed:(BOOL)arg1;
- (void)setHasFailedHitTest:(BOOL)arg1;
- (BOOL)hasFailedHitTest;
- (BOOL)createdForIBInternal;
- (void)setDimmerView:(id)arg1;
- (id)dimmerView;
- (BOOL)isBannerViewActionInProgress;
- (BOOL)isBannerLoaded;
- (void)set_internalDelegate:(id)arg1;
- (id)_internalDelegate;
- (void)setInternalAdType:(int)arg1;
- (void)setAuthenticationUserName:(id)arg1;
- (void)setAdvertisingSection:(id)arg1;
- (id)currentContentSizeIdentifier;
- (void)setCurrentContentSizeIdentifier:(id)arg1;
- (id)requiredContentSizeIdentifiers;
- (void)setRequiredContentSizeIdentifiers:(id)arg1;
- (id)initWithAdType:(int)arg1;
- (void)setPolicyEngineManaged:(BOOL)arg1;
- (void)storyboardViewControllerDidPresent;
- (void)serverStoryboardDidTransitionOut;
- (void)serverBannerViewDidFailToReceiveAdWithError:(id)arg1;
- (void)serverBannerViewDidLoad;
- (void)serverBannerViewWillLoad;
- (void)bannerControllerRevoked;
- (void)bannerControllerGranted;
- (int)internalAdType;
- (id)authenticationUserName;
- (void)_sanitizeAndForwardErrorToDelegate:(id)arg1;
- (void)setBannerLoaded:(BOOL)arg1;
- (void)setBannerViewActionInProgress:(BOOL)arg1;
- (void)_bannerTapped:(id)arg1;
- (id)initFromIBWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 adType:(int)arg2;
- (id)_initWithInternalAdType:(int)arg1;
- (void)cancelBannerViewAction;
- (id)advertisingSection;
- (BOOL)policyEngineManaged;
- (int)adType;
- (id)remoteView;
- (void)setRemoteView:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)resizeWithOldSuperviewSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)setCenter:(struct CGPoint { float x1; float x2; })arg1;
- (void)_commonInit;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)didMoveToWindow;
- (void)setAlpha:(float)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAutoresizingMask:(unsigned int)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)gestureRecognizer;
- (void)setGestureRecognizer:(id)arg1;
- (id)initFromIBWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)dimmed;

@end