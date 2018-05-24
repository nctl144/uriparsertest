#include <stdio.h>
#include <stdlib.h>
#include "uriparser/include/uriparser/Uri.h"
// #include <UriBase.h>
// #include <UriDefsAnsi.h>
// #include <UriDefsConfig.h>
// #include <UriDefsUnicode.h>
// #include <UriIp4.h>

UriParserStateA state;
UriUriA uri;

state.uri = &uri;

if (uriParseUriA(&state, "file:///home/user/song.mp3") != URI_SUCCESS) {
    uriFreeUriMembersA(&uri);
}

uriFreeUriMembersA(&uri);