/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@class <ADInterstitialAdDelegate>, ADAdSpace, ADInterstitialAdPresentationViewController, ADInterstitialView, NSSet, NSString, UIView, UIViewController;

@interface ADInterstitialAd : NSObject <ADAdRecipient> {
    ADAdSpace *_adSpace;
    int _creativeType;
    <ADInterstitialAdDelegate> *_delegate;
    <ADInterstitialAdDelegate> *_internalDelegate;
    UIViewController *_internalPresentingViewController;
    ADInterstitialView *_interstitialView;
    long long _options;
    ADInterstitialAdPresentationViewController *_presentationViewController;
    bool_actionInProgress;
    bool_canLoadMoreThanOnce;
    bool_hasLoadedFirstAd;
    bool_loaded;
}

@property(getter=isActionInProgress) bool actionInProgress;
@property(retain) ADAdSpace * adSpace;
@property(readonly) UIView * adSpaceView;
@property bool canLoadMoreThanOnce;
@property(copy) NSSet * context;
@property int creativeType;
@property(copy,readonly) NSString * debugDescription;
@property <ADInterstitialAdDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property bool hasLoadedFirstAd;
@property(readonly) unsigned long long hash;
@property(readonly) int internalAdType;
@property <ADInterstitialAdDelegate> * internalDelegate;
@property UIViewController * internalPresentingViewController;
@property(retain) ADInterstitialView * interstitialView;
@property(getter=isLoaded,readonly) bool loaded;
@property(readonly) long long options;
@property(retain) ADInterstitialAdPresentationViewController * presentationViewController;
@property(readonly) UIViewController * presentingViewController;
@property(readonly) Class superclass;

- (bool)_considerClosingAdSpace;
- (void)_dismissModalInterstitial;
- (void)_presentFromViewController:(id)arg1;
- (id)adSpace;
- (id)adSpaceView;
- (bool)canLoadMoreThanOnce;
- (void)cancelAction;
- (int)clickAction;
- (id)context;
- (int)creativeType;
- (void)dealloc;
- (id)delegate;
- (void)handleTapOnInterstitialViewAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (bool)hasLoadedFirstAd;
- (id)identifier;
- (id)init;
- (id)initWithCreativeType:(int)arg1 options:(long long)arg2;
- (int)internalAdType;
- (id)internalDelegate;
- (id)internalPresentingViewController;
- (id)interstitialView;
- (bool)isActionInProgress;
- (bool)isLoaded;
- (long long)options;
- (void)pauseBannerMedia;
- (void)presentFromViewController:(id)arg1;
- (bool)presentInView:(id)arg1;
- (id)presentationViewController;
- (id)presentingViewController;
- (void)resumeBannerMedia;
- (void)serverBannerViewDidFailToReceiveAdWithError:(id)arg1;
- (void)serverBannerViewDidLoad;
- (void)serverBannerViewWillLoad;
- (void)serverStoryboardDidTransitionOut;
- (id)serverURL;
- (void)setActionInProgress:(bool)arg1;
- (void)setAdSpace:(id)arg1;
- (void)setAuthenticationUserName:(id)arg1;
- (void)setCanLoadMoreThanOnce:(bool)arg1;
- (void)setContext:(id)arg1;
- (void)setCreativeType:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHasLoadedFirstAd:(bool)arg1;
- (void)setHostedWindowHostingHandle:(id)arg1;
- (void)setInternalDelegate:(id)arg1;
- (void)setInternalPresentingViewController:(id)arg1;
- (void)setInterstitialView:(id)arg1;
- (void)setLoaded:(bool)arg1;
- (void)setPresentationViewController:(id)arg1;
- (void)setSection:(id)arg1;
- (void)setServerURL:(id)arg1;
- (void)storyboardViewControllerDidPresent;

@end