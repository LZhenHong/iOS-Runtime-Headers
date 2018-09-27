/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFBlockBasedReadPolicy : NSObject <HFCharacteristicReadPolicy> {
    id /* block */  _readPolicyBlock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) id /* block */ readPolicyBlock;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)evaluateWithCharacteristic:(id)arg1 traits:(out id*)arg2;
- (id)init;
- (id)initWithReadPolicyBlock:(id /* block */)arg1;
- (id /* block */)readPolicyBlock;

@end
