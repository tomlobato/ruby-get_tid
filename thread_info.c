
#include <pthread.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/syscall.h>

#include "ruby.h"

VALUE ThreadInfo = Qnil;

void Init_thread_info();

VALUE method_get_tid(VALUE self);

void Init_thread_info() {
	ThreadInfo = rb_define_module("ThreadInfo");
	rb_define_method(ThreadInfo, "get_tid", method_get_tid, 0);
}

VALUE method_get_tid(VALUE self) {
	pid_t tid;
	tid = syscall(SYS_gettid);
	return INT2NUM(tid);
}
