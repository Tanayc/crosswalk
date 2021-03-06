// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "xwalk/application/common/application_manifest_constants.h"

namespace xwalk {

namespace application_manifest_keys {
const char kAppKey[] = "app";
const char kAppMainKey[] = "app.main";
const char kAppMainScriptsKey[] = "app.main.scripts";
const char kAppMainSourceKey[] = "app.main.source";
const char kCSPKey[] = "content_security_policy";
const char kDescriptionKey[] = "description";
const char kLaunchLocalPathKey[] = "app.launch.local_path";
const char kLaunchScreen[] = "launch_screen";
const char kLaunchScreenReadyWhen[] = "launch_screen.ready_when";
const char kLaunchWebURLKey[] = "app.launch.web_url";
const char kManifestVersionKey[] = "manifest_version";
const char kNameKey[] = "name";
const char kPermissionsKey[] = "permissions";
const char kURLKey[] = "url";
const char kVersionKey[] = "version";
const char kWebURLsKey[] = "app.urls";

#if defined(OS_TIZEN)
const char kTizenAppIdKey[] = "tizen_app_id";
const char kIcon128Key[] = "icons.128";
#endif

}  // namespace application_manifest_keys

// manifest keys for widget applications.
namespace application_widget_keys {
const char kNameKey[] = "widget.name.#text";
const char kVersionKey[] = "widget.@version";
const char kWidgetKey[] = "widget";
const char kLaunchLocalPathKey[] = "widget.content.@src";
const char kWebURLsKey[] = "widget.@id";

#if defined(OS_TIZEN)
const char kIcon128Key[] = "widget.icon.@src";
const char kTizenAppIdKey[] = "widget.application.@package";
#endif
}  // namespace application_widget_keys

namespace application_manifest_errors {
const char kInvalidDescription[] =
    "Invalid value for 'description'.";
const char kInvalidKey[] =
    "Value 'key' is missing or invalid.";
const char kInvalidManifestVersion[] =
    "Invalid value for 'manifest_version'. Must be an integer greater than "
    "zero.";
const char kInvalidName[] =
    "Required value 'name' is missing or invalid.";
const char kInvalidVersion[] =
    "Required value 'version' is missing or invalid. It must be between 1-4 "
    "dot-separated integers each between 0 and 65536.";
const char kManifestParseError[] =
    "Manifest is not valid JSON.";
const char kManifestUnreadable[] =
    "Manifest file is missing or unreadable.";
const char kPlatformAppNeedsManifestVersion2[] =
    "Packaged apps need manifest_version set to >= 2";
}  // namespace application_manifest_errors

namespace application {

const char* GetNameKey(Manifest::PackageType package_type) {
  if (package_type == Manifest::TYPE_WGT)
    return application_widget_keys::kNameKey;

  return application_manifest_keys::kNameKey;
}

const char* GetVersionKey(Manifest::PackageType package_type) {
  if (package_type == Manifest::TYPE_WGT)
    return application_widget_keys::kVersionKey;

  return application_manifest_keys::kVersionKey;
}

const char* GetWebURLsKey(Manifest::PackageType package_type) {
  if (package_type == Manifest::TYPE_WGT)
    return application_widget_keys::kWebURLsKey;

  return application_manifest_keys::kWebURLsKey;
}

const char* GetLaunchLocalPathKey(Manifest::PackageType package_type) {
  if (package_type == Manifest::TYPE_WGT)
    return application_widget_keys::kLaunchLocalPathKey;

  return application_manifest_keys::kLaunchLocalPathKey;
}
#if defined(OS_TIZEN)
const char* GetTizenAppIdKey(Manifest::PackageType package_type) {
  if (package_type == Manifest::TYPE_WGT)
    return application_widget_keys::kTizenAppIdKey;

  return application_manifest_keys::kTizenAppIdKey;
}

const char* GetIcon128Key(Manifest::PackageType package_type) {
  if (package_type == Manifest::TYPE_WGT)
    return application_widget_keys::kIcon128Key;

  return application_manifest_keys::kIcon128Key;
}
#endif
}  // namespace application
}  // namespace xwalk
