/* 
 * static int
 * wrap_dup(int fd) {
 *	int rc = -1;
 */
 	int save_errno;

	rc = real_dup(fd);
	save_errno = errno;
	pseudo_debug(2, "dup: %d->%d\n", fd, rc);
	pseudo_client_op(OP_DUP, 0, fd, rc, 0, 0);

	errno = save_errno;
/*	return rc;
 * }
 */
