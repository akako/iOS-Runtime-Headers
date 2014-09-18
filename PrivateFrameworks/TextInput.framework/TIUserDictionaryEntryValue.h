/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@class NSNumber, NSString;

@interface TIUserDictionaryEntryValue : NSObject <NSSecureCoding, TIUserDictionaryEntry> {
    NSString *_phrase;
    NSString *_shortcut;
    NSNumber *_timestamp;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(copy) NSString * phrase;
@property(copy) NSString * shortcut;
@property(readonly) Class superclass;
@property(retain) NSNumber * timestamp;

+ (bool)supportsSecureCoding;
+ (id)valueWithEntry:(id)arg1;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)matchesEntry:(id)arg1;
- (id)phrase;
- (void)setPhrase:(id)arg1;
- (void)setShortcut:(id)arg1;
- (void)setTimestamp:(id)arg1;
- (id)shortcut;
- (id)timestamp;

@end