/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/QuickLookSupport.framework/QuickLookSupport
 */

@interface QLUTIAnalyzer : NSObject <NSSecureCoding> {
    NSString * _contentType;
}

@property (readonly) NSString *contentType;

+ (id)UTIForFileName:(id)arg1;
+ (bool)isTypeAudioOnly:(id)arg1;
+ (id)knownExtensions;
+ (id)privateUTIFromFileName:(id)arg1;
+ (id)removeSpacesFromString:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contentType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentType:(id)arg1;
- (id)initWithFileName:(id)arg1;
- (bool)isAudioOnly;

@end
