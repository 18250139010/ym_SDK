

Pod::Spec.new do |s|
s.name             = 'YMSDK'
s.version          = '0.0.2'
s.summary          = 'SDK is a SDK'
s.homepage         = 'https://codeup.aliyun.com/608a54505e3405caab8ef2ce/ymsdk20220114'
s.license               = 'MIT'
s.author                = { 'YMLift2021' => '1120134596@qq.com' }
s.source           = { :git => 'https://codeup.aliyun.com/608a54505e3405caab8ef2ce/ymsdk20220114.git',:tag => s.version.to_s }
s.source_files     = 'YMSDK/*.{h,m}'
s.frameworks       = 'UIKit', 'Foundation'
s.requires_arc     = true
s.ios.deployment_target = '9.0'






end