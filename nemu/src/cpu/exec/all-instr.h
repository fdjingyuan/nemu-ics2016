#include "prefix/prefix.h"

#include "data-mov/mov.h"
#include "data-mov/movsx.h"
#include "data-mov/movzx.h"
#include "data-mov/xchg.h"
#include "data-mov/push.h"
#include "data-mov/pop.h"
#include "data-mov/leave.h"


#include "arith/dec.h"
#include "arith/inc.h"
#include "arith/neg.h"
#include "arith/imul.h"
#include "arith/mul.h"
#include "arith/idiv.h"
#include "arith/div.h"
#include "arith/sub.h"
#include "arith/cmp.h"
#include "arith/add.h"
#include "arith/adc.h"
#include "arith/sbb.h"


#include "control/call.h"
#include "control/jmp.h"
#include "control/ret.h"

#include "control/ja.h"
#include "control/jae.h"
#include "control/jb.h"
#include "control/jbe.h"
#include "control/je.h"
#include "control/jne.h"
#include "control/jg.h"
#include "control/jge.h"
#include "control/jl.h"
#include "control/jle.h"
#include "control/jo.h"
#include "control/jno.h"
#include "control/jp.h"
#include "control/jnp.h"
#include "control/js.h"
#include "control/jns.h"


#include "logic/and.h"
#include "logic/or.h"
#include "logic/not.h"
#include "logic/xor.h"
#include "logic/sar.h"
#include "logic/shl.h"
#include "logic/shr.h"
#include "logic/shrd.h"
#include "logic/test.h"
#include "logic/setcc.h"


#include "string/rep.h"

#include "misc/misc.h"

#include "special/special.h"
