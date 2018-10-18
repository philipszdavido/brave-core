/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "third_party/blink/renderer/modules/plugins/navigator_plugins.h"
#include "third_party/blink/renderer/modules/plugins/dom_mime_type_array.h"
#include "third_party/blink/renderer/modules/plugins/dom_plugin_array.h"

namespace blink {
  // static
  bool NavigatorPlugins::javaEnabled(Navigator& navigator) {
    return false;
  }

  // static
  DOMPluginArray* NavigatorPlugins::plugins(Navigator& navigator) {
    return DOMPluginArray::Create(nullptr);
  }

  //static 
  DOMMimeTypeArray* NavigatorPlugins::mimeTypes(Navigator& navigator) {
    return DOMMimeTypeArray::Create(nullptr);
  }
}
