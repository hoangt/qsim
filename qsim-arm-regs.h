#ifndef __ARM_REGS_H
#define __ARM_REGS_H

enum regs {
  QSIM_R0 = 0, QSIM_R1, QSIM_R2, QSIM_R3,
  QSIM_R4, QSIM_R5, QSIM_R6, QSIM_R7,
  QSIM_R8, QSIM_R9, QSIM_R10, QSIM_R11,
  QSIM_R12, QSIM_R13, QSIM_R14, QSIM_R15,
  QSIM_CPSR,
  QSIM_N_REGS
};

/*
static const char *regs_str[] = {
  "r0", "r1", "r2", "r3",
  "r4", "r5", "r6", "r7",
  "r8", "r9", "r10", "r11",
  "r12", "r13", "r14", "r15",
  "cpsr",
  NULL
};
*/

uint64_t get_reg(CPUARMState *env, enum regs r);
void     set_reg(CPUARMState *env, enum regs r, uint64_t val );

#endif