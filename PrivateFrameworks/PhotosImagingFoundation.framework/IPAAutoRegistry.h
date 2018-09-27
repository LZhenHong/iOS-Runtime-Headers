/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
 */

@interface IPAAutoRegistry : NSObject {
    NSMutableDictionary * _entries;
    NSObject<OS_dispatch_queue> * _serializer;
}

+ (void)setSharedRegistry:(id)arg1;
+ (id)sharedRegistry;

- (void).cxx_destruct;
- (id)_entryForAutoIdentifier:(id)arg1 operationIdentifier:(id)arg2;
- (Class)calculatorClassForAutoIdentifier:(id)arg1 operationIdentifier:(id)arg2;
- (bool)hasMappingForAutoIdentifier:(id)arg1 operationIdentifier:(id)arg2;
- (id)init;
- (bool)isPersistableAutoIdentifier:(id)arg1 forOperationIdentifier:(id)arg2;
- (void)registerAutoCalculatorClass:(Class)arg1 settingsClass:(Class)arg2 toAutoIdentifier:(id)arg3 operationIdentifier:(id)arg4;
- (void)registerAutoCalculatorClass:(Class)arg1 settingsClass:(Class)arg2 toAutoIdentifier:(id)arg3 operationIdentifier:(id)arg4 persistable:(bool)arg5;
- (Class)settingsClassForAutoIdentifier:(id)arg1 operationIdentifier:(id)arg2;

@end
