/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIRedEyeRepair : NSObject {
    unsigned char  CbCrDistanceTable;
    bool  autoPupilTonality;
    struct CGImageBlockSet { } * blockSet;
    struct __CFData { } * dataRef;
    bool  debugRedEye;
    NSArray * faces;
    bool  forceLoValue;
    int  iFaceIndex;
    bool  iLeft;
    int  imageSourceType;
    bool  infillBackground;
    int  lastClickBitmapMaxX;
    int  lastClickBitmapMaxY;
    int  lastClickBitmapMinX;
    int  lastClickBitmapMinY;
    struct { 
        int minrow; 
        int maxrow; 
        int mincol; 
        int maxcol; 
    }  lastClickBitmapRects;
    struct { 
        char *baseAddress; 
        int width; 
        int height; 
        int rowSamples; 
        int rowBytes; 
        int size; 
        int samplesPerPixel; 
        int bytesPerSample; 
        float resolution; 
    }  lastClickCbCrBitmap;
    struct { 
        char *baseAddress; 
        int width; 
        int height; 
        int rowSamples; 
        int rowBytes; 
        int size; 
        int samplesPerPixel; 
        int bytesPerSample; 
        float resolution; 
    }  lastClickCbCrBitmaps;
    struct { 
        char *baseAddress; 
        int width; 
        int height; 
        int rowSamples; 
        int rowBytes; 
        int size; 
        int samplesPerPixel; 
        int bytesPerSample; 
        float resolution; 
    }  lastClickYBitmap;
    struct { 
        char *baseAddress; 
        int width; 
        int height; 
        int rowSamples; 
        int rowBytes; 
        int size; 
        int samplesPerPixel; 
        int bytesPerSample; 
        float resolution; 
    }  lastClickYBitmaps;
    float  lastRepairIOD;
    int  lastRepairTag;
    int  lastSearchBitmapMaxX;
    int  lastSearchBitmapMaxY;
    int  lastSearchBitmapMinX;
    int  lastSearchBitmapMinY;
    struct { 
        char *baseAddress; 
        int width; 
        int height; 
        int rowSamples; 
        int rowBytes; 
        int size; 
        int samplesPerPixel; 
        int bytesPerSample; 
        float resolution; 
    }  lastSearchCbCrBitmap;
    struct { 
        char *baseAddress; 
        int width; 
        int height; 
        int rowSamples; 
        int rowBytes; 
        int size; 
        int samplesPerPixel; 
        int bytesPerSample; 
        float resolution; 
    }  lastSearchYBitmap;
    struct { BOOL x1[256]; BOOL x2[32]; struct { char *x_3_1_1; int x_3_1_2; int x_3_1_3; int x_3_1_4; int x_3_1_5; int x_3_1_6; int x_3_1_7; int x_3_1_8; float x_3_1_9; } x3; int x4; int x5; struct { int x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; struct CGColorSpace {} *x7; unsigned int x8; int x9; int x10; bool x11; float x12; } * lf;
    int  linearCoefficients;
    int  loValue;
    bool  logRepairs;
    int  nLinears;
    int  nPolyPoints;
    int  nRepairs;
    int  nextRepairTag;
    bool  ownLF;
    bool  polyClosed;
    struct { 
        float a; 
        float b; 
        float c; 
    }  polyLines;
    bool  polyPointConcave;
    struct CGPoint { 
        double x; 
        double y; 
    }  polyPoints;
    bool  pupilShadeAlignment;
    int  redEyeThresholdKind;
    void * releaseMe;
    bool  renderAlpha;
    bool  renderSpecularShine;
    struct { 
        int tag; 
        struct CGPoint { 
            double x; 
            double y; 
        } pt2; 
        int eyeCase; 
        int forceCase; 
        int npixels; 
        int bignpixels; 
        struct { 
            char *baseAddress; 
            int width; 
            int height; 
            int rowSamples; 
            int rowBytes; 
            int size; 
            int samplesPerPixel; 
            int bytesPerSample; 
            float resolution; 
        } fullNew; 
        struct { 
            int minrow; 
            int maxrow; 
            int mincol; 
            int maxcol; 
        } YR; 
        struct { 
            int lo; 
            int med; 
            int hi; 
            int average; 
        } psTemplate; 
        bool pupilShadeAlignment; 
        struct { 
            int lo; 
            int med; 
            int hi; 
            int average; 
        } matchingTemplate; 
        int faceIndex; 
        bool left; 
        float IOD; 
        struct { 
            int origHitX; 
            int origHitY; 
            int snapHitX; 
            int snapHitY; 
            int bitmaskSeedX; 
            int bitmaskSeedY; 
            int bitmaskThreshold; 
            int cornealReflectionSeedX; 
            int cornealReflectionSeedY; 
            int cornealReflectionThreshold; 
            bool align; 
            struct { 
                int lo; 
                int med; 
                int hi; 
                int average; 
            } mTemplate; 
            struct { 
                int lo; 
                int med; 
                int hi; 
                int average; 
            } existingTemplate; 
            int averageSkinMapY; 
            int characterizeCase; 
            int finalEyeCase; 
            float IOD; 
            struct { 
                void *bitmapproc_context; 
                int (*bproc)(); 
                int orientation; 
                float SNR; 
                bool N90; 
                int redBitmaskArea; 
                float imageCenterX; 
                float imageCenterY; 
                float halfDiagonalSize; 
            } O; 
            struct { 
                int minrow; 
                int maxrow; 
                int mincol; 
                int maxcol; 
            } CR; 
        } data; 
        struct { 
            struct CGPoint { 
                double x; 
                double y; 
            } centroid; 
            int area; 
            float ovalness; 
            float contrast; 
            float mincontrast; 
            int nborder; 
            struct { 
                int minrow; 
                int maxrow; 
                int mincol; 
                int maxcol; 
            } IR; 
            float aspectRatio; 
            bool touchingEdge; 
            int localmax; 
            int localmaxrow; 
            int localmaxcol; 
            int localfloor; 
            float rgmean; 
            float rgstd; 
            float ymean; 
            float ystd; 
        } BI; 
    }  repairs;
    float  specularSize;
    float  specularSoftness;
    struct { 
        int lo; 
        int med; 
        int hi; 
        int average; 
    }  standardTemplate;
}

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })supportRectangleWithFaceArray:(id)arg1 imageSize:(struct CGSize { double x1; double x2; })arg2;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })supportRectangleWithPoint:(struct CGPoint { double x1; double x2; })arg1 imageSize:(struct CGSize { double x1; double x2; })arg2 IOD:(float)arg3;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })supportRectangleWithRepair:(id)arg1 imageSize:(struct CGSize { double x1; double x2; })arg2;
+ (float)upperRepairDistance:(float)arg1;
+ (float)upperRepairDistanceFraction:(float)arg1;

- (int)applyEyeRepairWithEye:(struct { int x1; int x2; bool x3; bool x4; float x5; int x6; int x7; int x8; int x9; }*)arg1 left:(bool)arg2 IOD:(float)arg3 autoPupilTonality:(bool)arg4 match:(struct { int x1; int x2; int x3; int x4; }*)arg5 faceIndex:(int)arg6 whiteHopper:(struct { int x1; struct { float x_2_1_1; int x_2_1_2; int x_2_1_3; float x_2_1_4; float x_2_1_5; float x_2_1_6; int x_2_1_7; int x_2_1_8; float x_2_1_9; } x2[4]; }*)arg7;
- (bool)autoPupilTonality;
- (void)autoRepairExtractAndSearchLeft:(struct { int x1; int x2; int x3; int x4; })arg1 right:(struct { int x1; int x2; int x3; int x4; })arg2 data:(struct { bool x1; int x2; int x3; float x4; float x5; int x6; int x7; int x8; int x9; float x10; float x11; int x12; int x13; int x14; int x15; }*)arg3 repairSize:(float)arg4 autoPupilTonality:(bool)arg5 faceIndex:(int)arg6;
- (void)autoRepairWithFaceArray:(id)arg1;
- (int)averageValueFromY:(struct { char *x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; float x9; }*)arg1 withinSkinMask:(struct { char *x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; float x9; }*)arg2 butOutsideAlpha:(struct { char *x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; float x9; }*)arg3;
- (bool)computeTrimmedBitmaps:(struct { char *x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; float x9; }*)arg1 newY:(struct { char *x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; float x9; }*)arg2 newCbCr:(struct { char *x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; float x9; }*)arg3 IR:(struct { int x1; int x2; int x3; int x4; })arg4 newTrimY:(struct { char *x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; float x9; }*)arg5 newTrimCbCr:(struct { char *x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; float x9; }*)arg6 returningYR:(struct { int x1; int x2; int x3; int x4; }*)arg7 andCbCrR:(struct { int x1; int x2; int x3; int x4; }*)arg8;
- (float)confidenceWithIOD:(float)arg1 repair:(int)arg2 andProminenceDifference:(int)arg3;
- (struct CGImage { }*)createRepairedImage;
- (void)dealloc;
- (bool)debug;
- (int)distanceMaskFromPolyToCb:(int)arg1 Cr:(int)arg2;
- (void)executeRepair:(id)arg1;
- (void)executeRepairArray:(id)arg1;
- (bool)extractAndGatherProminencesWithRect:(struct { int x1; int x2; int x3; int x4; })arg1 face:(struct { bool x1; int x2; int x3; float x4; float x5; int x6; int x7; int x8; int x9; float x10; float x11; int x12; int x13; int x14; int x15; }*)arg2 faceIndex:(int)arg3 left:(bool)arg4 maxwindowsize:(float)arg5 repairsize:(float)arg6 returningRedHopper:(struct { int x1; struct { float x_2_1_1; int x_2_1_2; int x_2_1_3; float x_2_1_4; float x_2_1_5; float x_2_1_6; int x_2_1_7; int x_2_1_8; float x_2_1_9; } x2[4]; }*)arg7 whiteHopper:(struct { int x1; struct { float x_2_1_1; int x_2_1_2; int x_2_1_3; float x_2_1_4; float x_2_1_5; float x_2_1_6; int x_2_1_7; int x_2_1_8; float x_2_1_9; } x2[4]; }*)arg8 redChannel:(struct { char *x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; float x9; }*)arg9 redChannelMask:(struct { char *x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; float x9; }*)arg10;
- (float)extractAverageFaceY:(struct { bool x1; int x2; int x3; float x4; float x5; int x6; int x7; int x8; int x9; float x10; float x11; int x12; int x13; int x14; int x15; }*)arg1 contrast:(float*)arg2 faceIndex:(int)arg3;
- (bool)extractReusableAlignedBitmapsAroundPoint:(struct { char *x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; float x9; }*)arg1 YR:(struct { int x1; int x2; int x3; int x4; })arg2 subYBitmap:(struct { char *x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; float x9; }*)arg3 subCbCrBitmap:(struct { char *x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; float x9; }*)arg4;
- (id)faces;
- (bool)forceLoValue;
- (int)format;
- (bool)gatherProminencesWithC:(struct { char *x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; float x9; }*)arg1 MC:(struct { char *x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; float x9; }*)arg2 altC:(struct { char *x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; float x9; }*)arg3 altMC:(struct { char *x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; float x9; }*)arg4 maxwindowsize:(int)arg5 repairsize:(int)arg6 IR:(struct { int x1; int x2; int x3; int x4; })arg7 fr:(struct { bool x1; int x2; int x3; float x4; float x5; int x6; int x7; int x8; int x9; float x10; float x11; int x12; int x13; int x14; int x15; }*)arg8 intoHopper:(struct { int x1; struct { float x_2_1_1; int x_2_1_2; int x_2_1_3; float x_2_1_4; float x_2_1_5; float x_2_1_6; int x_2_1_7; int x_2_1_8; float x_2_1_9; } x2[4]; }*)arg9 faceIndex:(int)arg10 left:(bool)arg11;
- (bool)gatherProminencesWithC:(struct { char *x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; float x9; }*)arg1 MC:(struct { char *x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; float x9; }*)arg2 maxwindowsize:(int)arg3 repairsize:(int)arg4 IR:(struct { int x1; int x2; int x3; int x4; })arg5 fr:(struct { bool x1; int x2; int x3; float x4; float x5; int x6; int x7; int x8; int x9; float x10; float x11; int x12; int x13; int x14; int x15; }*)arg6 intoHopper:(struct { int x1; struct { float x_2_1_1; int x_2_1_2; int x_2_1_3; float x_2_1_4; float x_2_1_5; float x_2_1_6; int x_2_1_7; int x_2_1_8; float x_2_1_9; } x2[4]; }*)arg7 faceIndex:(int)arg8 left:(bool)arg9 coss:(float)arg10 sins:(float)arg11 bitmapName:(char *)arg12;
- (bool)getBlockSetWithImage:(struct CGImage { }*)arg1 into:(struct { char *x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; float x9; }*)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4;
- (bool)getBool:(bool*)arg1 d:(id)arg2 s:(id)arg3;
- (bool)getDataProviderBytePtrWithImage:(struct CGImage { }*)arg1 into:(struct { char *x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; float x9; }*)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4;
- (bool)getDataProviderCopyWithImage:(struct CGImage { }*)arg1 into:(struct { char *x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; float x9; }*)arg2;
- (bool)getFloat:(float*)arg1 d:(id)arg2 s:(id)arg3;
- (bool)getInt:(int*)arg1 d:(id)arg2 s:(id)arg3;
- (bool)infillBackground;
- (id)initWithCGImage:(struct CGImage { }*)arg1 cameraModel:(id)arg2;
- (id)initWithDeskView:(id)arg1 andFrame:(struct { BOOL x1[256]; BOOL x2[32]; struct { char *x_3_1_1; int x_3_1_2; int x_3_1_3; int x_3_1_4; int x_3_1_5; int x_3_1_6; int x_3_1_7; int x_3_1_8; float x_3_1_9; } x3; int x4; int x5; struct { int x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; struct CGColorSpace {} *x7; unsigned int x8; int x9; int x10; bool x11; float x12; }*)arg2;
- (id)initWithExternalBuffer:(char *)arg1 size:(struct CGSize { double x1; double x2; })arg2 rowBytes:(unsigned long long)arg3;
- (id)initWithExternalBuffer:(char *)arg1 subRectangle:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 fullSize:(struct CGSize { double x1; double x2; })arg3 rowBytes:(unsigned long long)arg4 cameraModel:(id)arg5;
- (id)initWithFrameExternalBuffer:(struct { BOOL x1[256]; BOOL x2[32]; struct { char *x_3_1_1; int x_3_1_2; int x_3_1_3; int x_3_1_4; int x_3_1_5; int x_3_1_6; int x_3_1_7; int x_3_1_8; float x_3_1_9; } x3; int x4; int x5; struct { int x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; struct CGColorSpace {} *x7; unsigned int x8; int x9; int x10; bool x11; float x12; }*)arg1;
- (id)initWithIOSurface:(struct __IOSurface { }*)arg1 format:(int)arg2 colorSpace:(struct CGColorSpace { }*)arg3 cameraModel:(id)arg4;
- (void)initializeNonDebugVariables;
- (void)insertIntoProminenceVettingHopper:(struct { int x1; struct { float x_2_1_1; int x_2_1_2; int x_2_1_3; float x_2_1_4; float x_2_1_5; float x_2_1_6; int x_2_1_7; int x_2_1_8; float x_2_1_9; } x2[4]; }*)arg1 max:(int)arg2 outside:(int)arg3 confidence:(float)arg4 distance:(float)arg5 row:(int)arg6 column:(int)arg7 IOD:(float)arg8;
- (int)lastRepairTag;
- (int)loValue;
- (bool)logRepairs;
- (float)lowerRepairSize:(float)arg1;
- (float)lowerRepairSizeFraction:(float)arg1;
- (int)nRepairs;
- (void)orientPointX:(float*)arg1 Y:(float*)arg2;
- (void)orientRectangleMinX:(float*)arg1 maxX:(float*)arg2 minY:(float*)arg3 maxY:(float*)arg4;
- (void)prepareLineFunctions;
- (bool)pupilShadeAlignment;
- (int)redEyeRemovalWithData:(struct { int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; int x10; bool x11; struct { int x_12_1_1; int x_12_1_2; int x_12_1_3; int x_12_1_4; } x12; struct { int x_13_1_1; int x_13_1_2; int x_13_1_3; int x_13_1_4; } x13; int x14; int x15; int x16; float x17; struct { void *x_18_1_1; int (*x_18_1_2)(); int x_18_1_3; float x_18_1_4; bool x_18_1_5; int x_18_1_6; float x_18_1_7; float x_18_1_8; float x_18_1_9; } x18; struct { int x_19_1_1; int x_19_1_2; int x_19_1_3; int x_19_1_4; } x19; })arg1;
- (int)redEyeRemovalWithPoint:(struct CGPoint { double x1; double x2; })arg1 alignPupilShades:(bool)arg2 matching:(struct { int x1; int x2; int x3; int x4; })arg3 force:(int)arg4 IOD:(float)arg5 tap:(bool)arg6;
- (int)redEyeThresholdKind;
- (void)redoLastRepair;
- (int)redoRepairWithTag:(int)arg1 IOD:(float)arg2;
- (bool)renderAlpha;
- (bool)renderSpecularShine;
- (id)repairArray;
- (struct { int x1; int x2; bool x3; bool x4; float x5; int x6; int x7; int x8; int x9; })repairDecisionWithFaceRecord:(struct { bool x1; int x2; int x3; float x4; float x5; int x6; int x7; int x8; int x9; float x10; float x11; int x12; int x13; int x14; int x15; }*)arg1 left:(bool)arg2 redHopper:(struct { int x1; struct { float x_2_1_1; int x_2_1_2; int x_2_1_3; float x_2_1_4; float x_2_1_5; float x_2_1_6; int x_2_1_7; int x_2_1_8; float x_2_1_9; } x2[4]; }*)arg3 whiteHopper:(struct { int x1; struct { float x_2_1_1; int x_2_1_2; int x_2_1_3; float x_2_1_4; float x_2_1_5; float x_2_1_6; int x_2_1_7; int x_2_1_8; float x_2_1_9; } x2[4]; }*)arg4;
- (void)repairExternalBuffer;
- (struct { int x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; int x3; int x4; int x5; int x6; struct { char *x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; int x_7_1_5; int x_7_1_6; int x_7_1_7; int x_7_1_8; float x_7_1_9; } x7; struct { int x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; struct { int x_9_1_1; int x_9_1_2; int x_9_1_3; int x_9_1_4; } x9; bool x10; struct { int x_11_1_1; int x_11_1_2; int x_11_1_3; int x_11_1_4; } x11; int x12; bool x13; float x14; struct { int x_15_1_1; int x_15_1_2; int x_15_1_3; int x_15_1_4; int x_15_1_5; int x_15_1_6; int x_15_1_7; int x_15_1_8; int x_15_1_9; int x_15_1_10; bool x_15_1_11; struct { int x_12_2_1; int x_12_2_2; int x_12_2_3; int x_12_2_4; } x_15_1_12; struct { int x_13_2_1; int x_13_2_2; int x_13_2_3; int x_13_2_4; } x_15_1_13; int x_15_1_14; int x_15_1_15; int x_15_1_16; float x_15_1_17; struct { void *x_18_2_1; int (*x_18_2_2)(); int x_18_2_3; float x_18_2_4; bool x_18_2_5; int x_18_2_6; float x_18_2_7; float x_18_2_8; float x_18_2_9; } x_15_1_18; struct { int x_19_2_1; int x_19_2_2; int x_19_2_3; int x_19_2_4; } x_15_1_19; } x15; }*)repairWithTag:(int)arg1;
- (struct { int x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; int x3; int x4; int x5; int x6; struct { char *x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; int x_7_1_5; int x_7_1_6; int x_7_1_7; int x_7_1_8; float x_7_1_9; } x7; struct { int x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; struct { int x_9_1_1; int x_9_1_2; int x_9_1_3; int x_9_1_4; } x9; bool x10; struct { int x_11_1_1; int x_11_1_2; int x_11_1_3; int x_11_1_4; } x11; int x12; bool x13; float x14; struct { int x_15_1_1; int x_15_1_2; int x_15_1_3; int x_15_1_4; int x_15_1_5; int x_15_1_6; int x_15_1_7; int x_15_1_8; int x_15_1_9; int x_15_1_10; bool x_15_1_11; struct { int x_12_2_1; int x_12_2_2; int x_12_2_3; int x_12_2_4; } x_15_1_12; struct { int x_13_2_1; int x_13_2_2; int x_13_2_3; int x_13_2_4; } x_15_1_13; int x_15_1_14; int x_15_1_15; int x_15_1_16; float x_15_1_17; struct { void *x_18_2_1; int (*x_18_2_2)(); int x_18_2_3; float x_18_2_4; bool x_18_2_5; int x_18_2_6; float x_18_2_7; float x_18_2_8; float x_18_2_9; } x_15_1_18; struct { int x_19_2_1; int x_19_2_2; int x_19_2_3; int x_19_2_4; } x_15_1_19; } x15; }*)repairs;
- (void)setAutoPupilTonality:(bool)arg1;
- (void)setColorSpace:(struct CGColorSpace { }*)arg1;
- (void)setDebug:(bool)arg1;
- (void)setFaceIndex:(int)arg1;
- (void)setForceLoValue:(bool)arg1;
- (void)setInfillBackground:(bool)arg1;
- (void)setLeft:(bool)arg1;
- (void)setLoValue:(int)arg1;
- (void)setLogRepairs:(bool)arg1;
- (void)setPupilShadeAlignment:(bool)arg1;
- (void)setRedEyeThresholdKind:(int)arg1;
- (void)setRenderAlpha:(bool)arg1;
- (void)setRenderSpecularShine:(bool)arg1;
- (void)setSpecularSize:(float)arg1;
- (void)setSpecularSoftness:(float)arg1;
- (void)skinInit;
- (float)specularSize;
- (float)specularSoftness;
- (struct { int x1; int x2; int x3; int x4; })standardTemplate;
- (void)undoRepair:(int)arg1;
- (float)upperRepairSize:(float)arg1;
- (float)upperRepairSizeFraction:(float)arg1;

@end
