#include <libint2.h>

#ifdef __cplusplus
extern "C" {
#endif
void OSVRRP0InBra_aB_f__0__p__1___TwoPRep_s__0__s__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3, const LIBINT2_REALTYPE* src4) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp164;
fp164 = inteval->oo2ze[vi] * src4[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp168;
fp168 = inteval->roz[vi] * src3[((hsi*9+0)*1+lsi)*1];
LIBINT2_REALTYPE fp167;
fp167 = src2[((hsi*9+0)*1+lsi)*1] - fp168;
LIBINT2_REALTYPE fp169;
fp169 = 2 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp166;
fp166 = fp169 * fp167;
LIBINT2_REALTYPE fp171;
fp171 = inteval->WP_x[vi] * src1[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp172;
fp172 = inteval->PA_x[vi] * src0[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp170;
fp170 = fp172 + fp171;
LIBINT2_REALTYPE fp165;
fp165 = fp170 + fp166;
LIBINT2_REALTYPE fp163;
fp163 = fp165 + fp164;
target[((hsi*30+0)*1+lsi)*1] = fp163;
LIBINT2_REALTYPE fp158;
fp158 = inteval->roz[vi] * src3[((hsi*9+1)*1+lsi)*1];
LIBINT2_REALTYPE fp157;
fp157 = src2[((hsi*9+1)*1+lsi)*1] - fp158;
LIBINT2_REALTYPE fp159;
fp159 = 2 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp156;
fp156 = fp159 * fp157;
LIBINT2_REALTYPE fp161;
fp161 = inteval->WP_x[vi] * src1[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp162;
fp162 = inteval->PA_x[vi] * src0[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp160;
fp160 = fp162 + fp161;
LIBINT2_REALTYPE fp155;
fp155 = fp160 + fp156;
target[((hsi*30+1)*1+lsi)*1] = fp155;
LIBINT2_REALTYPE fp150;
fp150 = inteval->roz[vi] * src3[((hsi*9+2)*1+lsi)*1];
LIBINT2_REALTYPE fp149;
fp149 = src2[((hsi*9+2)*1+lsi)*1] - fp150;
LIBINT2_REALTYPE fp151;
fp151 = 2 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp148;
fp148 = fp151 * fp149;
LIBINT2_REALTYPE fp153;
fp153 = inteval->WP_x[vi] * src1[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp154;
fp154 = inteval->PA_x[vi] * src0[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp152;
fp152 = fp154 + fp153;
LIBINT2_REALTYPE fp147;
fp147 = fp152 + fp148;
target[((hsi*30+2)*1+lsi)*1] = fp147;
LIBINT2_REALTYPE fp145;
fp145 = inteval->WP_y[vi] * src1[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp146;
fp146 = inteval->PA_y[vi] * src0[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp144;
fp144 = fp146 + fp145;
target[((hsi*30+3)*1+lsi)*1] = fp144;
LIBINT2_REALTYPE fp140;
fp140 = inteval->oo2ze[vi] * src4[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp142;
fp142 = inteval->WP_y[vi] * src1[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp143;
fp143 = inteval->PA_y[vi] * src0[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp141;
fp141 = fp143 + fp142;
LIBINT2_REALTYPE fp139;
fp139 = fp141 + fp140;
target[((hsi*30+4)*1+lsi)*1] = fp139;
LIBINT2_REALTYPE fp137;
fp137 = inteval->WP_y[vi] * src1[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp138;
fp138 = inteval->PA_y[vi] * src0[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp136;
fp136 = fp138 + fp137;
target[((hsi*30+5)*1+lsi)*1] = fp136;
LIBINT2_REALTYPE fp134;
fp134 = inteval->WP_z[vi] * src1[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp135;
fp135 = inteval->PA_z[vi] * src0[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp133;
fp133 = fp135 + fp134;
target[((hsi*30+6)*1+lsi)*1] = fp133;
LIBINT2_REALTYPE fp131;
fp131 = inteval->WP_z[vi] * src1[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp132;
fp132 = inteval->PA_z[vi] * src0[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp130;
fp130 = fp132 + fp131;
target[((hsi*30+7)*1+lsi)*1] = fp130;
LIBINT2_REALTYPE fp126;
fp126 = inteval->oo2ze[vi] * src4[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp128;
fp128 = inteval->WP_z[vi] * src1[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp129;
fp129 = inteval->PA_z[vi] * src0[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp127;
fp127 = fp129 + fp128;
LIBINT2_REALTYPE fp125;
fp125 = fp127 + fp126;
target[((hsi*30+8)*1+lsi)*1] = fp125;
LIBINT2_REALTYPE fp121;
fp121 = inteval->oo2z[vi] * fp167;
LIBINT2_REALTYPE fp123;
fp123 = inteval->WP_y[vi] * src1[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp124;
fp124 = inteval->PA_y[vi] * src0[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp122;
fp122 = fp124 + fp123;
LIBINT2_REALTYPE fp120;
fp120 = fp122 + fp121;
target[((hsi*30+9)*1+lsi)*1] = fp120;
LIBINT2_REALTYPE fp114;
fp114 = inteval->oo2ze[vi] * src4[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
fp116 = inteval->oo2z[vi] * fp157;
LIBINT2_REALTYPE fp118;
fp118 = inteval->WP_y[vi] * src1[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp119;
fp119 = inteval->PA_y[vi] * src0[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp117;
fp117 = fp119 + fp118;
LIBINT2_REALTYPE fp115;
fp115 = fp117 + fp116;
LIBINT2_REALTYPE fp113;
fp113 = fp115 + fp114;
target[((hsi*30+10)*1+lsi)*1] = fp113;
LIBINT2_REALTYPE fp109;
fp109 = inteval->oo2z[vi] * fp149;
LIBINT2_REALTYPE fp111;
fp111 = inteval->WP_y[vi] * src1[((hsi*18+5)*1+lsi)*1];
LIBINT2_REALTYPE fp112;
fp112 = inteval->PA_y[vi] * src0[((hsi*18+5)*1+lsi)*1];
LIBINT2_REALTYPE fp110;
fp110 = fp112 + fp111;
LIBINT2_REALTYPE fp108;
fp108 = fp110 + fp109;
target[((hsi*30+11)*1+lsi)*1] = fp108;
LIBINT2_REALTYPE fp106;
fp106 = inteval->WP_z[vi] * src1[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp107;
fp107 = inteval->PA_z[vi] * src0[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp105;
fp105 = fp107 + fp106;
target[((hsi*30+12)*1+lsi)*1] = fp105;
LIBINT2_REALTYPE fp103;
fp103 = inteval->WP_z[vi] * src1[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = inteval->PA_z[vi] * src0[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp102;
fp102 = fp104 + fp103;
target[((hsi*30+13)*1+lsi)*1] = fp102;
LIBINT2_REALTYPE fp98;
fp98 = inteval->oo2ze[vi] * src4[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp100;
fp100 = inteval->WP_z[vi] * src1[((hsi*18+5)*1+lsi)*1];
LIBINT2_REALTYPE fp101;
fp101 = inteval->PA_z[vi] * src0[((hsi*18+5)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
fp99 = fp101 + fp100;
LIBINT2_REALTYPE fp97;
fp97 = fp99 + fp98;
target[((hsi*30+14)*1+lsi)*1] = fp97;
LIBINT2_REALTYPE fp93;
fp93 = inteval->oo2z[vi] * fp167;
LIBINT2_REALTYPE fp95;
fp95 = inteval->WP_z[vi] * src1[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp96;
fp96 = inteval->PA_z[vi] * src0[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
fp94 = fp96 + fp95;
LIBINT2_REALTYPE fp92;
fp92 = fp94 + fp93;
target[((hsi*30+15)*1+lsi)*1] = fp92;
LIBINT2_REALTYPE fp88;
fp88 = inteval->oo2z[vi] * fp157;
LIBINT2_REALTYPE fp90;
fp90 = inteval->WP_z[vi] * src1[((hsi*18+7)*1+lsi)*1];
LIBINT2_REALTYPE fp91;
fp91 = inteval->PA_z[vi] * src0[((hsi*18+7)*1+lsi)*1];
LIBINT2_REALTYPE fp89;
fp89 = fp91 + fp90;
LIBINT2_REALTYPE fp87;
fp87 = fp89 + fp88;
target[((hsi*30+16)*1+lsi)*1] = fp87;
LIBINT2_REALTYPE fp81;
fp81 = inteval->oo2ze[vi] * src4[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp83;
fp83 = inteval->oo2z[vi] * fp149;
LIBINT2_REALTYPE fp85;
fp85 = inteval->WP_z[vi] * src1[((hsi*18+8)*1+lsi)*1];
LIBINT2_REALTYPE fp86;
fp86 = inteval->PA_z[vi] * src0[((hsi*18+8)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
fp84 = fp86 + fp85;
LIBINT2_REALTYPE fp82;
fp82 = fp84 + fp83;
LIBINT2_REALTYPE fp80;
fp80 = fp82 + fp81;
target[((hsi*30+17)*1+lsi)*1] = fp80;
LIBINT2_REALTYPE fp75;
fp75 = inteval->roz[vi] * src3[((hsi*9+3)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
fp74 = src2[((hsi*9+3)*1+lsi)*1] - fp75;
LIBINT2_REALTYPE fp76;
fp76 = 2 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp73;
fp73 = fp76 * fp74;
LIBINT2_REALTYPE fp78;
fp78 = inteval->WP_y[vi] * src1[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
fp79 = inteval->PA_y[vi] * src0[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp77;
fp77 = fp79 + fp78;
LIBINT2_REALTYPE fp72;
fp72 = fp77 + fp73;
target[((hsi*30+18)*1+lsi)*1] = fp72;
LIBINT2_REALTYPE fp63;
fp63 = inteval->oo2ze[vi] * src4[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp67;
fp67 = inteval->roz[vi] * src3[((hsi*9+4)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = src2[((hsi*9+4)*1+lsi)*1] - fp67;
LIBINT2_REALTYPE fp68;
fp68 = 2 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp65;
fp65 = fp68 * fp66;
LIBINT2_REALTYPE fp70;
fp70 = inteval->WP_y[vi] * src1[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
fp71 = inteval->PA_y[vi] * src0[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
fp69 = fp71 + fp70;
LIBINT2_REALTYPE fp64;
fp64 = fp69 + fp65;
LIBINT2_REALTYPE fp62;
fp62 = fp64 + fp63;
target[((hsi*30+19)*1+lsi)*1] = fp62;
LIBINT2_REALTYPE fp57;
fp57 = inteval->roz[vi] * src3[((hsi*9+5)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = src2[((hsi*9+5)*1+lsi)*1] - fp57;
LIBINT2_REALTYPE fp58;
fp58 = 2 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp55;
fp55 = fp58 * fp56;
LIBINT2_REALTYPE fp60;
fp60 = inteval->WP_y[vi] * src1[((hsi*18+11)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = inteval->PA_y[vi] * src0[((hsi*18+11)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
fp59 = fp61 + fp60;
LIBINT2_REALTYPE fp54;
fp54 = fp59 + fp55;
target[((hsi*30+20)*1+lsi)*1] = fp54;
LIBINT2_REALTYPE fp52;
fp52 = inteval->WP_z[vi] * src1[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
fp53 = inteval->PA_z[vi] * src0[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = fp53 + fp52;
target[((hsi*30+21)*1+lsi)*1] = fp51;
LIBINT2_REALTYPE fp49;
fp49 = inteval->WP_z[vi] * src1[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = inteval->PA_z[vi] * src0[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = fp50 + fp49;
target[((hsi*30+22)*1+lsi)*1] = fp48;
LIBINT2_REALTYPE fp44;
fp44 = inteval->oo2ze[vi] * src4[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = inteval->WP_z[vi] * src1[((hsi*18+11)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = inteval->PA_z[vi] * src0[((hsi*18+11)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = fp47 + fp46;
LIBINT2_REALTYPE fp43;
fp43 = fp45 + fp44;
target[((hsi*30+23)*1+lsi)*1] = fp43;
LIBINT2_REALTYPE fp39;
fp39 = inteval->oo2z[vi] * fp74;
LIBINT2_REALTYPE fp41;
fp41 = inteval->WP_z[vi] * src1[((hsi*18+12)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = inteval->PA_z[vi] * src0[((hsi*18+12)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = fp42 + fp41;
LIBINT2_REALTYPE fp38;
fp38 = fp40 + fp39;
target[((hsi*30+24)*1+lsi)*1] = fp38;
LIBINT2_REALTYPE fp34;
fp34 = inteval->oo2z[vi] * fp66;
LIBINT2_REALTYPE fp36;
fp36 = inteval->WP_z[vi] * src1[((hsi*18+13)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = inteval->PA_z[vi] * src0[((hsi*18+13)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = fp37 + fp36;
LIBINT2_REALTYPE fp33;
fp33 = fp35 + fp34;
target[((hsi*30+25)*1+lsi)*1] = fp33;
LIBINT2_REALTYPE fp27;
fp27 = inteval->oo2ze[vi] * src4[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = inteval->oo2z[vi] * fp56;
LIBINT2_REALTYPE fp31;
fp31 = inteval->WP_z[vi] * src1[((hsi*18+14)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = inteval->PA_z[vi] * src0[((hsi*18+14)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = fp32 + fp31;
LIBINT2_REALTYPE fp28;
fp28 = fp30 + fp29;
LIBINT2_REALTYPE fp26;
fp26 = fp28 + fp27;
target[((hsi*30+26)*1+lsi)*1] = fp26;
LIBINT2_REALTYPE fp21;
fp21 = inteval->roz[vi] * src3[((hsi*9+6)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = src2[((hsi*9+6)*1+lsi)*1] - fp21;
LIBINT2_REALTYPE fp22;
fp22 = 2 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp19;
fp19 = fp22 * fp20;
LIBINT2_REALTYPE fp24;
fp24 = inteval->WP_z[vi] * src1[((hsi*18+15)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = inteval->PA_z[vi] * src0[((hsi*18+15)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = fp25 + fp24;
LIBINT2_REALTYPE fp18;
fp18 = fp23 + fp19;
target[((hsi*30+27)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp13;
fp13 = inteval->roz[vi] * src3[((hsi*9+7)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = src2[((hsi*9+7)*1+lsi)*1] - fp13;
LIBINT2_REALTYPE fp14;
fp14 = 2 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp11;
fp11 = fp14 * fp12;
LIBINT2_REALTYPE fp16;
fp16 = inteval->WP_z[vi] * src1[((hsi*18+16)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = inteval->PA_z[vi] * src0[((hsi*18+16)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = fp17 + fp16;
LIBINT2_REALTYPE fp10;
fp10 = fp15 + fp11;
target[((hsi*30+28)*1+lsi)*1] = fp10;
LIBINT2_REALTYPE fp1;
fp1 = inteval->oo2ze[vi] * src4[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = inteval->roz[vi] * src3[((hsi*9+8)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
fp4 = src2[((hsi*9+8)*1+lsi)*1] - fp5;
LIBINT2_REALTYPE fp6;
fp6 = 2 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp3;
fp3 = fp6 * fp4;
LIBINT2_REALTYPE fp8;
fp8 = inteval->WP_z[vi] * src1[((hsi*18+17)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = inteval->PA_z[vi] * src0[((hsi*18+17)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = fp9 + fp8;
LIBINT2_REALTYPE fp2;
fp2 = fp7 + fp3;
LIBINT2_REALTYPE fp0;
fp0 = fp2 + fp1;
target[((hsi*30+29)*1+lsi)*1] = fp0;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 173 */
}

#ifdef __cplusplus
};
#endif
