#pragma once

#include "version.h"

const char* VER_NAME = "Rapidity is a justice";

const unsigned VER_MAJOR = 0;
const unsigned VER_MINOR = 8;
const unsigned VER_BUILD = 736;

const char* VER_STRING = "version 0.8.736 built on 2014/06/20 16:13:31";

#ifdef _DEBUG
const char* MODE_STRING = "DEBUG";
#else
const char* MODE_STRING = "RELEASE";
#endif
