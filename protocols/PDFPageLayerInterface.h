/* Generated by RuntimeBrowser.
 */

@protocol PDFPageLayerInterface <NSObject>

@required

- (void)addPageLayerEffect:(PDFPageLayerEffect *)arg1;
- (void)applyTileLayoutScale:(double)arg1;
- (void)clearTiles;
- (long long)displayBox;
- (bool)enablesTileUpdates;
- (void)forceTileUpdate;
- (NSObject<PDFPageLayerGeometryInterface> *)geometryInterface;
- (id)initWithPage:(PDFPage *)arg1 geometryInterface:(NSObject<PDFPageLayerGeometryInterface> *)arg2 andRenderingProperties:(PDFRenderingProperties *)arg3;
- (bool)isVisible;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })layerEffectTransform;
- (PDFPage *)page;
- (PDFPageLayerEffect *)pageLayerEffectForID:(NSUUID *)arg1;
- (void)removePageLayerEffectForID:(NSUUID *)arg1;
- (PDFRenderingProperties *)renderingProperties;
- (void)restoreOriginalTileLayout;
- (void)saveOriginalTileLayout;
- (void)scalePageLayerEffects:(double)arg1;
- (void)setEnableTileUpdates:(bool)arg1;
- (void)setNeedsTilesUpdate;
- (void)setVisibilityDelegateIndex:(unsigned long long)arg1;
- (void)updatePageLayerEffectForID:(NSUUID *)arg1;
- (void)updatePageLayerEffects;
- (unsigned long long)visibilityDelegateIndex;

@end
