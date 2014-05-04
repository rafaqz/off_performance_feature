<?php
/**
 * @file
 * off_performance_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function off_performance_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_comment_end_application/rss';
  $strongarm->value = ' -->';
  $export['boost_comment_end_application/rss'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_comment_end_application/rss+xml';
  $strongarm->value = ' -->';
  $export['boost_comment_end_application/rss+xml'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_comment_end_application/xml';
  $strongarm->value = ' -->';
  $export['boost_comment_end_application/xml'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_comment_end_text/html';
  $strongarm->value = ' -->';
  $export['boost_comment_end_text/html'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_comment_end_text/javascript';
  $strongarm->value = ' */';
  $export['boost_comment_end_text/javascript'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_comment_end_text/xml';
  $strongarm->value = ' -->';
  $export['boost_comment_end_text/xml'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_comment_start_application/rss';
  $strongarm->value = '<!-- ';
  $export['boost_comment_start_application/rss'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_comment_start_application/rss+xml';
  $strongarm->value = '<!-- ';
  $export['boost_comment_start_application/rss+xml'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_comment_start_application/xml';
  $strongarm->value = '<!-- ';
  $export['boost_comment_start_application/xml'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_comment_start_text/html';
  $strongarm->value = '<!-- ';
  $export['boost_comment_start_text/html'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_comment_start_text/javascript';
  $strongarm->value = '/* ';
  $export['boost_comment_start_text/javascript'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_comment_start_text/xml';
  $strongarm->value = '<!-- ';
  $export['boost_comment_start_text/xml'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_enabled_application/rss';
  $strongarm->value = FALSE;
  $export['boost_enabled_application/rss'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_enabled_application/rss+xml';
  $strongarm->value = FALSE;
  $export['boost_enabled_application/rss+xml'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_enabled_application/xml';
  $strongarm->value = FALSE;
  $export['boost_enabled_application/xml'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_enabled_text/html';
  $strongarm->value = TRUE;
  $export['boost_enabled_text/html'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_enabled_text/javascript';
  $strongarm->value = FALSE;
  $export['boost_enabled_text/javascript'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_enabled_text/xml';
  $strongarm->value = FALSE;
  $export['boost_enabled_text/xml'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_extension_application/rss';
  $strongarm->value = 'xml';
  $export['boost_extension_application/rss'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_extension_application/rss+xml';
  $strongarm->value = 'xml';
  $export['boost_extension_application/rss+xml'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_extension_application/xml';
  $strongarm->value = 'xml';
  $export['boost_extension_application/xml'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_extension_text/html';
  $strongarm->value = 'html';
  $export['boost_extension_text/html'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_extension_text/javascript';
  $strongarm->value = 'json';
  $export['boost_extension_text/javascript'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_extension_text/xml';
  $strongarm->value = 'xml';
  $export['boost_extension_text/xml'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_gzip_application/rss';
  $strongarm->value = TRUE;
  $export['boost_gzip_application/rss'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_gzip_application/rss+xml';
  $strongarm->value = TRUE;
  $export['boost_gzip_application/rss+xml'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_gzip_application/xml';
  $strongarm->value = TRUE;
  $export['boost_gzip_application/xml'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_gzip_text/html';
  $strongarm->value = TRUE;
  $export['boost_gzip_text/html'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_gzip_text/javascript';
  $strongarm->value = TRUE;
  $export['boost_gzip_text/javascript'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_gzip_text/xml';
  $strongarm->value = TRUE;
  $export['boost_gzip_text/xml'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_lifetime_max_application/rss';
  $strongarm->value = 3600;
  $export['boost_lifetime_max_application/rss'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_lifetime_max_application/rss+xml';
  $strongarm->value = 3600;
  $export['boost_lifetime_max_application/rss+xml'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_lifetime_max_application/xml';
  $strongarm->value = 3600;
  $export['boost_lifetime_max_application/xml'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_lifetime_max_text/html';
  $strongarm->value = 3600;
  $export['boost_lifetime_max_text/html'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_lifetime_max_text/javascript';
  $strongarm->value = 3600;
  $export['boost_lifetime_max_text/javascript'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_lifetime_max_text/xml';
  $strongarm->value = 3600;
  $export['boost_lifetime_max_text/xml'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_lifetime_min_application/rss';
  $strongarm->value = 0;
  $export['boost_lifetime_min_application/rss'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_lifetime_min_application/rss+xml';
  $strongarm->value = 0;
  $export['boost_lifetime_min_application/rss+xml'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_lifetime_min_application/xml';
  $strongarm->value = 0;
  $export['boost_lifetime_min_application/xml'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_lifetime_min_text/html';
  $strongarm->value = 0;
  $export['boost_lifetime_min_text/html'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_lifetime_min_text/javascript';
  $strongarm->value = 0;
  $export['boost_lifetime_min_text/javascript'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_lifetime_min_text/xml';
  $strongarm->value = 0;
  $export['boost_lifetime_min_text/xml'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'drupal_css_cache_files';
  $strongarm->value = array(
    '73d55a0d0e4fa7858d4ae5e53d78e31717e9e62e5700d75c39d45900526d4d1b' => 'public://css/css_791YXBaKKm1ORM_7huSKEsIV9tSWq6wmRkERhuXpN6w.css',
    'cb9f93e666a396bb3eb14c5fd16f7ebd1cdd0067733eb0a2ab1b294b6f14f76f' => 'public://css/css_1kF33EODTO5gDyEbdpAfYzMKbjG3ottD1s5np0BNI8U.css',
    '1fcc33402e841a2593cb8f20211b21564b92becf1b06f86ae05102167ba462dc' => 'public://css/css_SBTufaa0m7-yVh5Cog7Yb3vU96ZQJvjRC-8slVVPtQ4.css',
    '755d3f3b0e94fbfb36892c34a49d19f4ad51ec6fa3b7ff6fbcc12d728158cc24' => 'public://css/css_sPdT7qyOFvQGMw2BY-jIpVwZfLdo3xBwgzcJcEReR9k.css',
    '81ed090a1ff186848c54fbea5e946dfcf434e9763e00f1f811ed4dad2f6f6f69' => 'public://css/css_7Z0vmVKC-n7eFAwiMKoTkaID8a7BE7X0KJFv6ugeqzw.css',
    '08f38daede45371b982af3668812d3a2caf557c124ab68a339625a92e3bbc445' => 'public://css/css_rLUGGu7FEXtj2EQh9NOAtU-ij11QQV7_OXf06yvuZKU.css',
    '43803886a563a43c23e15a43f39a66f2c7b6eb30a298c67bbbb3d112e8114189' => 'public://css/css_LBDCLV7b3OZng6CMAgxOpXDFQ7r_6xVwairty9IJitY.css',
    '34f83a7da14fd319ac7c374c779767460469fc38de49b47db10b5591dd05e41e' => 'public://css/css_-GaAqAZxml_Vrq0IABgZyqHIQIWttFna5ZeFPVoQI9o.css',
    'df64b5b3e53b20f2d3fc8a80317becfc8d994ec145abb694c03c006ff9af5f69' => 'public://css/css_yEpJMW8Hp7J2i2O4BAmfpMIYLaAZSNsQxWpEidIabsg.css',
    '3c371f4d9b889eab795287197249057b3a4301828e40ee5c985da4be094081eb' => 'public://css/css_S7wJrSg7HPtGN8fDAacx3Fid1jY72Z5X7mF3WF3ZtYE.css',
    '823ba1006db72809515d2221cd02ec1075d7b49b0c07f49307b3a7930bfdd9e4' => 'public://css/css_pbm0lsQQJ7A7WCCIMgxLho6mI_kBNgznNUWmTWcnfoE.css',
    '592db66916e1dd3416cbe95bcb34a5a68775eb0b7cf95e4c858671de35290cc9' => 'public://css/css_LS9OUalDR9-d_lCAvF3yUWjNU6yF8ZBm84jEPRvoyuQ.css',
    'ebb3f433ad4107b1ac31e9d7de0f9a5d399040e9f82b6364211dcfaadea158c0' => 'public://css/css_ABmXGW3jlpNaBRmWVTJUFNYGbVFnilqYg_EngwXFiNc.css',
    'f05494fc83c9c8e2c74180252d01c9ea50f347143d606c3ea4a216ea0f24ce6e' => 'public://css/css_BR3eb_ceEn8jEAv9rAj8_gjpfC6A1BpCm8JGn5sUfnY.css',
    'fb092c5c54da17c7dc6f4d5dca83a16aad30ac13fc6a577fe0c0b2352c0c8a2b' => 'public://css/css_K6wo9Uk5ILTJWHpqVg5CG8BULMhAAfiMpTygTSyJTdk.css',
  );
  $export['drupal_css_cache_files'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'drupal_js_cache_files';
  $strongarm->value = array(
    '34eb13d9f906afff53cf6f3a7b765ad7ba2498cac706c909f68ed4474d6bd6ca' => 'public://js/js_-z-2lAhufzBeVjYseT6cTzSICUy9vnoLBpu1sF_zZrs.js',
    '7229e81449e9be9003b3040894851141d753c746a5b2d8d6c42a8b52cb76c3d0' => 'public://js/js_MNXhMIJfx-4zqRbWqDn4wssNT9e4a6nfWe30sMeCSu4.js',
    '1199d9f27faf9ca0877045fa7efe753ce9050116b95d420e339f9180395852ad' => 'public://js/js_msINVwYiq7kEZkaeIYk5guGTDZ5_U5BY2FGZauRCaCw.js',
    'c759eb3380f6568f26b1806affc966645a77cdcb720e7f296b10b23622157e87' => 'public://js/js_QBW88itVJYokOCAsD7FFqfqg4u5WmBwTUf7DOJTa9eQ.js',
    'c1b928b79d5b02a5a95117d64d25b02919df4b235a7353b14c251e8d95eeb5e0' => 'public://js/js_wTWaWR46_Ul8jIxlYJU0lYlsGQsjGye8BiQV4TDRkHU.js',
    '4ad7e4e9df2019c56e91f77b20e6a2e6305415146c69bb09576074787b1edd8f' => 'public://js/js_zTFJys46rUvxjp3y9IylzZccmrQrDACZqziESXxuNTk.js',
    '741af8a55a7fc23a8485656d6fbae558b9e866b24a884097a7e1ec172dd1fc48' => 'public://js/js_R9UbiVw2xuTUI0GZoaqMDOdX0lrZtgX-ono8RVOUEVc.js',
    '5e2ca0dded50a837887639c3a5782132aef0e07a736069b6da36e764269c3a27' => 'public://js/js_ey9aHZtJtLTWufdns6AzK2dxMpB_cWTbVXHQk6bLOvc.js',
    '1ba9519bc8a6cf0e54c1628bdece09b962dc21a00bfc2fd22a8145e011dbddce' => 'public://js/js_2KlXA4Z5El1IQFVPxDN1aX5mIoMSFWGv3vwsP77K9yk.js',
    'a394d302415fa4564b6f239036084cf2b44380be9a68155c3df8bf1ebd122fe8' => 'public://js/js_b_GawIOIEeyAIBxz2URPGamsa4t_ADX-kX3dIukI8UE.js',
    '7b1c24b191b03aa99e41b0d8eba622e3d1423d9f8571985770ba96d4b1b29a22' => 'public://js/js_nPrIZ4Ld-WjKp-hSlsfsRe1-yoAcY6UTDqdFYwJdcRE.js',
    '1fe0ad41333d4566a005be598f36f8f0bf136fb4429d3b15868025fb1d9e5438' => 'public://js/js_gOPYKwIhSFonVigiSkESJSMz-ELijmmarnV6_IKUcFQ.js',
    '4e9ab94bf5359db997c1a22aa9f49125543fa8a469145cfda2c0b63171a3a312' => 'public://js/js_FKrPdfNaG2Ng7TNuoLxYFqpaVNQCVZC_BLksvdxzwT0.js',
    'd36175678aac986fdae6afe64dd80852e710c16dea387b7bc73881a78830abe6' => 'public://js/js_2bJcWwy973b4RCqFbEOpk9uDQTmaPqqfwCaDTRlDe1o.js',
    '5af647dfbb2c15745163488eb45ab72b385b47640b9948f72bdd2a0a6d8893a1' => 'public://js/js_aqn8prKMCFjhFwriwoaagMcgsOT0d_46Ut6FjZFALvo.js',
    '8c91dd0408c2812c5105fc763b3df4e521ff22e221498b3c931b3f720d6c7059' => 'public://js/js_Omz7pBuKnbzRiHnJyuHO8-grXoBgVP1aN1nuXnM99Mw.js',
    '0a5611a135db8d3423c22b45cc269dc30021442ea386f004a759f9c5ef88f0a5' => 'public://js/js_uhIQIx8f1TsISnbMJSi6gMZCTYRtp-T9sd3adaCH6-w.js',
    'e5d42c366ffe7276bcbc5786d9e55c8ac4d794865edde0e1dd5f4bc3c3eacc25' => 'public://js/js_5SWjwZMaERn4poBOB2q7MgTR4ij8sx_vHodudSypZ-M.js',
    '8ed0c4dc16644958e3caf1e65148709069b4f816d47e60e29b24db55a1b657d1' => 'public://js/js_aAlGj0C4DI7o_m9IO_M_DJP1CK2P4W9TmeC9iZ9SSKQ.js',
    '35dcb85ef36ebdf423c574bb03ce7485b525d0b961495f9556d7d8c1d1bd0ecc' => 'public://js/js_xsCHF9iYcsMA2JEN6QbWhR9SCi5i3BJupyfB3jNiDoY.js',
    '2b2dc147d5b571ec874281a5f948cecfdb38bf4cdf098561ef32ac2e1f4e0206' => 'public://js/js_lj3itjKAp0BqEKukYQFcKtZyIGy00FZAah-VGCiqQLM.js',
    'e6a1ef06331bc8d1fae16f711d35ec4ca140d612c47119522de2859588b4e7ed' => 'public://js/js_3mBnpyWZ_5yU9-bIMiE1Iuf7NIRwt21RtzSnuna1x3E.js',
    '7980292955fd6c3139964ed5f26926949ceb6494869fa3d94a15431d0229ee37' => 'public://js/js_zzcIWOou_jnX0ZWAIA4sb6Xy_p5a8FZNA0GySvuWjPU.js',
    '111d860265abe08204bdf363fb75e432b0104dd26ec9ad3853b748098098279b' => 'public://js/js_KCd8rbJYUruV1tRJnh4um34UYvyhlrSVCPR1jNko2h8.js',
    '0b6a112310fed5839564bbd6676fa70da92af9661feb4071af8e07b89b40e288' => 'public://js/js_GnyMSYvtYlez1iEbKHA8JuUBd5Tkh0exDTxaKgpxzpQ.js',
    '7a338da81d9823e04717032adc4bf69523c5406f973756a7a78134e320c3d9d3' => 'public://js/js_zU0WSHfItbFoJYAIwMBkvZz0djJ92Lp_tni-VgyzErA.js',
    '77c936003b4dcb20f4f993c14638df0e8426af5b00674d9195fc462a0ba451bf' => 'public://js/js_rSS6cz3aV2Awf3SvEXG32LMBNoFPPCJTswL3h4PZlMA.js',
    'f1a7d788672df66d312c14416ad7daf62d6cd7b7a5213f718d1922c093b49442' => 'public://js/js_ZyhugQj8ig1ucj3_WUvpedIbM2QaYyY-ff2-jHx86Qc.js',
    '5240a9c5f9da551946ff65ceffda687351ec68c4746a62e78216020321cd5aef' => 'public://js/js_xphZ5PP97K4BlGEuLXrLt-33x2W_PDMnwRYyP8YDGDs.js',
    '8b6d047fad94ba4101ea0bb163cae90efabb40c12b3ede98aa573498755747d0' => 'public://js/js_Q9FkKoUIIN3dk4a0fpSYUYODCsCxMt2cuc07fGHBeT0.js',
    '59549fa02fc77b3d10b0d02dd61842572966b96ce47b587a6c6193f6b78053ed' => 'public://js/js_z4TBOxsRJgiTSgg26GVGTU4rEExEaBi4iwVozcvww-8.js',
  );
  $export['drupal_js_cache_files'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entitycache_enabled';
  $strongarm->value = TRUE;
  $export['entitycache_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'memcache_storage_wildcards';
  $strongarm->value = array(
    'cache' => array(
      'context' => 1399225415,
      'plugins:context' => 1399225415,
      'entity_property_info:' => 1399225415,
      'entity_info:' => 1399225415,
      'schema:' => 1399227594,
      'theme_registry' => 1399225415,
      'node_types:' => 1399225556,
    ),
    'cache_field' => array(
      'field_info_types:' => 1399225415,
      'field_info:' => 1399225415,
    ),
    'cache_menu' => array(
      'admin_menu:' => 1399225556,
      'links:management:' => 1399225415,
    ),
  );
  $export['memcache_storage_wildcards'] = $strongarm;

  return $export;
}
