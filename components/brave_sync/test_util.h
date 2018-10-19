/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef BRAVE_COMPONENTS_BRAVE_SYNC_TEST_UTIL_H_
#define BRAVE_COMPONENTS_BRAVE_SYNC_TEST_UTIL_H_

#include <memory>

#include "base/files/file_path.h"

class KeyedService;
class Profile;

namespace bookmarks {
class BookmarkPermanentNode;
}

namespace content {
class BrowserContext;
}

namespace brave_sync {

std::unique_ptr<Profile> CreateBraveSyncProfile(const base::FilePath& path);

}  // namespace brave_sync

std::unique_ptr<KeyedService> BuildFakeBookmarkModelForTests(
     content::BrowserContext* context);

#endif  // BRAVE_COMPONENTS_BRAVE_SYNC_TEST_UTIL_H_
