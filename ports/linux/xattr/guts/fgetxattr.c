/*
 * Copyright (c) 2014 Wind River Systems; see
 * guts/COPYRIGHT for information.
 *
 * SPDX-License-Identifier: LGPL-2.1-only
 *
 * ssize_t fgetxattr(int filedes, const char *name, void *value, size_t size)
 *	ssize_t rc = -1;
 */
	rc = shared_getxattr(NULL, filedes, name, value, size);

/*	return rc;
 * }
 */
