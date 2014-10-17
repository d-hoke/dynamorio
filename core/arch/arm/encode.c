/* **********************************************************
 * Copyright (c) 2014 Google, Inc.  All rights reserved.
 * **********************************************************/

/*
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * * Redistributions of source code must retain the above copyright notice,
 *   this list of conditions and the following disclaimer.
 *
 * * Redistributions in binary form must reproduce the above copyright notice,
 *   this list of conditions and the following disclaimer in the documentation
 *   and/or other materials provided with the distribution.
 *
 * * Neither the name of Google, Inc. nor the names of its contributors may be
 *   used to endorse or promote products derived from this software without
 *   specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL VMWARE, INC. OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH
 * DAMAGE.
 */

/* FIXME i#1551: write ARM encoder */

#include "../globals.h"
#include "arch.h"
#include "instr.h"
#include "decode.h"
#include "disassemble.h"
#include "decode_private.h"

/* order corresponds to enum of REG_ and SEG_ constants */
const char * const reg_names[] = {
};

byte *
instr_encode_ignore_reachability(dcontext_t *dcontext_t, instr_t *instr, byte *pc)
{
    /* FIXME i#1551: write ARM encoder */
    return NULL;
}

byte *
instr_encode_check_reachability(dcontext_t *dcontext_t, instr_t *instr, byte *pc,
                                bool *has_instr_opnds/*OUT OPTIONAL*/)
{
    /* FIXME i#1551: write ARM encoder */
    return NULL;
}

byte *
copy_and_re_relativize_raw_instr(dcontext_t *dcontext, instr_t *instr,
                                 byte *dst_pc, byte *final_pc)
{
    /* FIXME i#1551: write ARM encoder */
    return NULL;
}

const instr_info_t *
get_encoding_info(instr_t *instr)
{
    /* FIXME i#1551: write ARM encoder */
    /* Probably we can share this same routine from x86/encode.c, esp
     * if we make isa_mode generic, and then just have
     * encoding_possible() be arch-specific.
     */
    return NULL;
}

byte *
instr_encode_to_copy(dcontext_t *dcontext, instr_t *instr, byte *copy_pc, byte *final_pc)
{
    /* FIXME i#1551: write ARM encoder */
    return NULL;
}

byte *
instr_encode(dcontext_t *dcontext, instr_t *instr, byte *pc)
{
    /* FIXME i#1551: write ARM encoder */
    return NULL;
}
