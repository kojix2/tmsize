#include "tmsize.h"

VALUE rb_mTmsize;

void
Init_tmsize(void)
{
  rb_mTmsize = rb_define_module("Tmsize");
}
