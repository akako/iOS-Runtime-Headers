/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSArray, UIColor;

@interface GKMultiColumnTableViewCell : UITableViewCell {
    NSUInteger _columnCount;
    UIColor *_columnSeparatorColor;
    float _columnSeparatorWidth;
    NSArray *_columnSeparators;
    BOOL _columnSeparatorsHidden;
    NSArray *_contentsArray;
}

@property(retain) UIColor *columnSeparatorColor;
@property(copy) NSArray *columnSeparators;
@property(copy) NSArray *contentsArray;
@property NSUInteger columnCount;
@property float columnSeparatorWidth;
@property BOOL columnSeparatorsHidden;

- (void)_configureSeparatorsForColumnCount:(NSUInteger)arg1;
- (NSUInteger)columnCount;
- (id)columnSeparatorColor;
- (float)columnSeparatorWidth;
- (id)columnSeparators;
- (BOOL)columnSeparatorsHidden;
- (id)contentsArray;
- (void)dealloc;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)layoutSubviews;
- (void)setColumnCount:(NSUInteger)arg1;
- (void)setColumnSeparatorColor:(id)arg1;
- (void)setColumnSeparatorWidth:(float)arg1;
- (void)setColumnSeparators:(id)arg1;
- (void)setColumnSeparatorsHidden:(BOOL)arg1;
- (void)setContentsArray:(id)arg1;

@end