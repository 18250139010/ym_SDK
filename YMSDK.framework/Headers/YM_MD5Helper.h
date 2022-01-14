#import <Foundation/Foundation.h>
#import <CommonCrypto/CommonDigest.h>
@interface YM_MD5Helper : NSObject
+ (NSString *)md5Encrypt:(NSString *)aString;
+ (NSString *)md5EncryptDX:(NSString *)aString;
+ (NSString *)HMACMD5WithString:(NSString *)toEncryptStr WithKey:(NSString *)keyStr;
@end
