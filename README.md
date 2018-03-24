# Custom_KVO
自己实现KVO功能
通过自定义方法实现kvo，并用Block回调观察属性变化，更方便
- (void)cc_addObserver:(NSObject *)observer forKeyPath:(NSString *)keyPath withBlock:(CCKVOBlock)handleBlock;

- (void)cc_removeObserver:(NSObject *)observer forKeyPath:(NSString *)keyPath;
