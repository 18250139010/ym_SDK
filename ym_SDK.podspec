
Pod::Spec.new do |s|
s.name             = 'ym_SDK'
s.version          = '1.0.0'
s.summary          = 'ym_SDK is a ym_SDK'
s.homepage         = 'https://github.com/18250139010/ym_SDK.git'
s.license               = 'MIT'
s.author                = { 'YMLift2021' => '1120134596@qq.com' }
s.source           = { :git => 'https://github.com/18250139010/ym_SDK.git',:tag => s.version.to_s }

s.frameworks       = 'UIKit', 'Foundation'
s.requires_arc     = true
s.ios.deployment_target = '9.0'
s.vendored_frameworks = "YMSDK.framework"
s.dependency "Masonry"
s.dependency "MJRefresh"
s.dependency "AFNetworking"
s.dependency "MJExtension"
s.dependency "SDWebImage"
s.dependency "WechatOpenSDK"
end