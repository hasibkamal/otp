/*
 * %CopyrightBegin%
 *
 * Copyright Ericsson AB 2005-2016. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * %CopyrightEnd%
 */


PRIMOP_LIST(am_inc_stack_0, &nbif_inc_stack_0)
#ifndef NO_FPE_SIGNALS
PRIMOP_LIST(am_handle_fp_exception, &nbif_handle_fp_exception)
#endif
PRIMOP_LIST(am_sse2_fnegate_mask, &sse2_fnegate_mask)
