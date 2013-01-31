/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSString;

@interface _MFTranslateTemporaryIDReplayContextTransformation : NSObject <MFOfflineCacheReplayContextTransformation> {
    NSString *_temporaryID;
    NSString *_translatedID;
}


- (void)dealloc;
- (id)initWithTemporaryID:(id)arg1 translatedID:(id)arg2;
- (void)applyToReplayContext:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end