/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKAvatarPickerLayout : UICollectionViewLayout {
    NSArray * _attrCollection;
    NSArray * _cutoutAttrCollection;
    <CKAvatarPickerLayoutDelegate> * _delegate;
    unsigned long long  _layoutMode;
    UICollectionViewLayoutAttributes * _leftShadowDecorationAttr;
    UICollectionViewLayoutAttributes * _rightShadowDecorationAttr;
    NSArray * _supplementaryAttrCollection;
    UICollectionViewLayoutAttributes * _titleSupplementaryAttr;
}

@property (nonatomic, copy) NSArray *attrCollection;
@property (nonatomic, copy) NSArray *cutoutAttrCollection;
@property (nonatomic) <CKAvatarPickerLayoutDelegate> *delegate;
@property (nonatomic) unsigned long long layoutMode;
@property (nonatomic, retain) UICollectionViewLayoutAttributes *leftShadowDecorationAttr;
@property (nonatomic, retain) UICollectionViewLayoutAttributes *rightShadowDecorationAttr;
@property (nonatomic, copy) NSArray *supplementaryAttrCollection;
@property (nonatomic, retain) UICollectionViewLayoutAttributes *titleSupplementaryAttr;

- (void).cxx_destruct;
- (double)_avatarBoundWidth;
- (double)_avatarBoundWidthLayoutMode:(unsigned long long)arg1;
- (bool)_canShowShadowClipping;
- (unsigned long long)_itemCount;
- (void)_setupBannerLayout;
- (void)_setupPancakeLayout;
- (bool)_shouldShowContactNames;
- (id)attrCollection;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (id)cutoutAttrCollection;
- (id)delegate;
- (id)finalLayoutAttributesForDisappearingDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)initWithLayoutMode:(unsigned long long)arg1;
- (id)initialLayoutAttributesForAppearingDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)invalidateLayoutAndCache;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (unsigned long long)layoutMode;
- (id)leftShadowDecorationAttr;
- (id)nameLayoutAttributesCollectionAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)prepareLayout;
- (id)rightShadowDecorationAttr;
- (void)setAttrCollection:(id)arg1;
- (void)setCutoutAttrCollection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLayoutMode:(unsigned long long)arg1;
- (void)setLeftShadowDecorationAttr:(id)arg1;
- (void)setRightShadowDecorationAttr:(id)arg1;
- (void)setSupplementaryAttrCollection:(id)arg1;
- (void)setTitleSupplementaryAttr:(id)arg1;
- (bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)supplementaryAttrCollection;
- (id)titleSupplementaryAttr;

@end
