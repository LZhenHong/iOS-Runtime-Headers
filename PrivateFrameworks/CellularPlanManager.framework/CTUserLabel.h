/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CellularPlanManager.framework/CellularPlanManager
 */

@interface CTUserLabel : NSObject <NSCopying, NSSecureCoding> {
    NSString * _key;
    NSString * _label;
}

@property (nonatomic, readonly) NSString *key;
@property (nonatomic, readonly) NSString *label;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_labelKeyDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithKey:(id)arg1 label:(id)arg2;
- (id)initWithLabel:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)key;
- (id)label;

@end
