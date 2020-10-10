#import <Foundation/Foundation.h>
#import <WebKit/WebKit.h>
#import <objc/runtime.h>

@interface SHNoInputAccessoryView : NSObject

- (void)removeInputAccessoryViewFromWKWebView:(WKWebView *)webView;

@end
