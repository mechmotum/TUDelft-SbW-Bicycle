/*
 *    This file was auto-generated using the ACADO Toolkit.
 *    
 *    While ACADO Toolkit is free software released under the terms of
 *    the GNU Lesser General Public License (LGPL), the generated code
 *    as such remains the property of the user who used ACADO Toolkit
 *    to generate this code. In particular, user dependent data of the code
 *    do not inherit the GNU LGPL license. On the other hand, parts of the
 *    generated code that are a direct copy of source code from the
 *    ACADO Toolkit or the software tools it is based on, remain, as derived
 *    work, automatically covered by the LGPL license.
 *    
 *    ACADO Toolkit is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *    
 */


#include "acado_common.h"


void acado_rhs(const real_t* in, real_t* out)
{
const real_t* xd = in;
const real_t* u = in + 7;
/* Vector of auxiliary variables; number of elements: 2. */
real_t* a = acadoWorkspace.rhs_aux;

/* Compute intermediate quantities: */
a[0] = (cos(xd[2]));
a[1] = (sin(xd[2]));

/* Compute outputs: */
out[0] = ((real_t)(5.5000000000000000e+00)*a[0]);
out[1] = ((real_t)(5.5000000000000000e+00)*a[1]);
out[2] = (((((real_t)(5.5000000000000000e+00)*xd[4])+((real_t)(6.9000000000000006e-02)*xd[6]))/(real_t)(1.1200000000000001e+00))*(real_t)(9.2106099400288510e-01));
out[3] = xd[5];
out[4] = xd[6];
out[5] = ((((((((((((real_t)(-1.0372024387812040e+01)*xd[4])-((real_t)(-2.1895533943522744e+02)*xd[3]))+((real_t)(-2.6634658055195661e+01)*xd[3]))-((real_t)(-4.3012611787944657e+00)*xd[4]))+((real_t)(-3.8202122632392328e+00)*xd[5]))-((real_t)(1.5470065021923476e+00)*u[0]))+((real_t)(8.8916697517750549e+00)*xd[6]))-((real_t)(5.6072241491674799e+02)*xd[4]))+((real_t)(7.4033298532306205e+01)*xd[4]))-((real_t)(3.6329988266211920e+01)*xd[6]))/(real_t)(2.3293148594572894e+01));
out[6] = ((((((((((((real_t)(-1.3558350336798396e+03)*xd[3])-((real_t)(-1.7701783426398752e+03)*xd[3]))+((real_t)(-2.6634658055195661e+01)*xd[4]))-((real_t)(-2.5389689624170677e+02)*xd[5]))-((real_t)(-6.8933991578149460e+02)*xd[4]))+((real_t)(1.0281631551000001e+02)*u[0]))-((real_t)(5.9095338081233172e+02)*xd[6]))+((real_t)(3.4721559943441812e+03)*xd[4]))-((real_t)(4.9203613361394882e+03)*xd[4]))+((real_t)(2.2496583546015432e+02)*xd[6]))/(real_t)(2.3293148594572894e+01));
}



void acado_diffs(const real_t* in, real_t* out)
{
const real_t* xd = in;
/* Vector of auxiliary variables; number of elements: 7. */
real_t* a = acadoWorkspace.rhs_aux;

/* Compute intermediate quantities: */
a[0] = ((real_t)(-1.0000000000000000e+00)*(sin(xd[2])));
a[1] = (cos(xd[2]));
a[2] = ((real_t)(1.0000000000000000e+00)/(real_t)(1.1200000000000001e+00));
a[3] = ((real_t)(1.0000000000000000e+00)/(real_t)(2.3293148594572894e+01));
a[4] = ((real_t)(1.0000000000000000e+00)/(real_t)(2.3293148594572894e+01));
a[5] = ((real_t)(1.0000000000000000e+00)/(real_t)(2.3293148594572894e+01));
a[6] = ((real_t)(1.0000000000000000e+00)/(real_t)(2.3293148594572894e+01));

/* Compute outputs: */
out[0] = (real_t)(0.0000000000000000e+00);
out[1] = (real_t)(0.0000000000000000e+00);
out[2] = ((real_t)(5.5000000000000000e+00)*a[0]);
out[3] = (real_t)(0.0000000000000000e+00);
out[4] = (real_t)(0.0000000000000000e+00);
out[5] = (real_t)(0.0000000000000000e+00);
out[6] = (real_t)(0.0000000000000000e+00);
out[7] = (real_t)(0.0000000000000000e+00);
out[8] = (real_t)(0.0000000000000000e+00);
out[9] = (real_t)(0.0000000000000000e+00);
out[10] = ((real_t)(5.5000000000000000e+00)*a[1]);
out[11] = (real_t)(0.0000000000000000e+00);
out[12] = (real_t)(0.0000000000000000e+00);
out[13] = (real_t)(0.0000000000000000e+00);
out[14] = (real_t)(0.0000000000000000e+00);
out[15] = (real_t)(0.0000000000000000e+00);
out[16] = (real_t)(0.0000000000000000e+00);
out[17] = (real_t)(0.0000000000000000e+00);
out[18] = (real_t)(0.0000000000000000e+00);
out[19] = (real_t)(0.0000000000000000e+00);
out[20] = (((real_t)(5.5000000000000000e+00)*a[2])*(real_t)(9.2106099400288510e-01));
out[21] = (real_t)(0.0000000000000000e+00);
out[22] = (((real_t)(6.9000000000000006e-02)*a[2])*(real_t)(9.2106099400288510e-01));
out[23] = (real_t)(0.0000000000000000e+00);
out[24] = (real_t)(0.0000000000000000e+00);
out[25] = (real_t)(0.0000000000000000e+00);
out[26] = (real_t)(0.0000000000000000e+00);
out[27] = (real_t)(0.0000000000000000e+00);
out[28] = (real_t)(0.0000000000000000e+00);
out[29] = (real_t)(1.0000000000000000e+00);
out[30] = (real_t)(0.0000000000000000e+00);
out[31] = (real_t)(0.0000000000000000e+00);
out[32] = (real_t)(0.0000000000000000e+00);
out[33] = (real_t)(0.0000000000000000e+00);
out[34] = (real_t)(0.0000000000000000e+00);
out[35] = (real_t)(0.0000000000000000e+00);
out[36] = (real_t)(0.0000000000000000e+00);
out[37] = (real_t)(0.0000000000000000e+00);
out[38] = (real_t)(1.0000000000000000e+00);
out[39] = (real_t)(0.0000000000000000e+00);
out[40] = (real_t)(0.0000000000000000e+00);
out[41] = (real_t)(0.0000000000000000e+00);
out[42] = (real_t)(0.0000000000000000e+00);
out[43] = (((real_t)(1.9232068138003177e+02))*a[3]);
out[44] = (((real_t)(-4.9275987959345940e+02))*a[3]);
out[45] = ((real_t)(-3.8202122632392328e+00)*a[3]);
out[46] = (((real_t)(8.8916697517750549e+00)-(real_t)(3.6329988266211920e+01))*a[3]);
out[47] = (((real_t)(0.0000000000000000e+00)-(real_t)(1.5470065021923476e+00))*a[4]);
out[48] = (real_t)(0.0000000000000000e+00);
out[49] = (real_t)(0.0000000000000000e+00);
out[50] = (real_t)(0.0000000000000000e+00);
out[51] = (((real_t)(-1.3558350336798396e+03)-(real_t)(-1.7701783426398752e+03))*a[5]);
out[52] = ((((real_t)(4.1348612520704801e+03))-(real_t)(4.9203613361394882e+03))*a[5]);
out[53] = (((real_t)(0.0000000000000000e+00)-(real_t)(-2.5389689624170677e+02))*a[5]);
out[54] = (((real_t)(-3.6598754535217739e+02))*a[5]);
out[55] = ((real_t)(1.0281631551000001e+02)*a[6]);
}



void acado_solve_dim14_triangular( real_t* const A, real_t* const b )
{

b[13] = b[13]/A[195];
b[12] -= + A[181]*b[13];
b[12] = b[12]/A[180];
b[11] -= + A[167]*b[13];
b[11] -= + A[166]*b[12];
b[11] = b[11]/A[165];
b[10] -= + A[153]*b[13];
b[10] -= + A[152]*b[12];
b[10] -= + A[151]*b[11];
b[10] = b[10]/A[150];
b[9] -= + A[139]*b[13];
b[9] -= + A[138]*b[12];
b[9] -= + A[137]*b[11];
b[9] -= + A[136]*b[10];
b[9] = b[9]/A[135];
b[8] -= + A[125]*b[13];
b[8] -= + A[124]*b[12];
b[8] -= + A[123]*b[11];
b[8] -= + A[122]*b[10];
b[8] -= + A[121]*b[9];
b[8] = b[8]/A[120];
b[7] -= + A[111]*b[13];
b[7] -= + A[110]*b[12];
b[7] -= + A[109]*b[11];
b[7] -= + A[108]*b[10];
b[7] -= + A[107]*b[9];
b[7] -= + A[106]*b[8];
b[7] = b[7]/A[105];
b[6] -= + A[97]*b[13];
b[6] -= + A[96]*b[12];
b[6] -= + A[95]*b[11];
b[6] -= + A[94]*b[10];
b[6] -= + A[93]*b[9];
b[6] -= + A[92]*b[8];
b[6] -= + A[91]*b[7];
b[6] = b[6]/A[90];
b[5] -= + A[83]*b[13];
b[5] -= + A[82]*b[12];
b[5] -= + A[81]*b[11];
b[5] -= + A[80]*b[10];
b[5] -= + A[79]*b[9];
b[5] -= + A[78]*b[8];
b[5] -= + A[77]*b[7];
b[5] -= + A[76]*b[6];
b[5] = b[5]/A[75];
b[4] -= + A[69]*b[13];
b[4] -= + A[68]*b[12];
b[4] -= + A[67]*b[11];
b[4] -= + A[66]*b[10];
b[4] -= + A[65]*b[9];
b[4] -= + A[64]*b[8];
b[4] -= + A[63]*b[7];
b[4] -= + A[62]*b[6];
b[4] -= + A[61]*b[5];
b[4] = b[4]/A[60];
b[3] -= + A[55]*b[13];
b[3] -= + A[54]*b[12];
b[3] -= + A[53]*b[11];
b[3] -= + A[52]*b[10];
b[3] -= + A[51]*b[9];
b[3] -= + A[50]*b[8];
b[3] -= + A[49]*b[7];
b[3] -= + A[48]*b[6];
b[3] -= + A[47]*b[5];
b[3] -= + A[46]*b[4];
b[3] = b[3]/A[45];
b[2] -= + A[41]*b[13];
b[2] -= + A[40]*b[12];
b[2] -= + A[39]*b[11];
b[2] -= + A[38]*b[10];
b[2] -= + A[37]*b[9];
b[2] -= + A[36]*b[8];
b[2] -= + A[35]*b[7];
b[2] -= + A[34]*b[6];
b[2] -= + A[33]*b[5];
b[2] -= + A[32]*b[4];
b[2] -= + A[31]*b[3];
b[2] = b[2]/A[30];
b[1] -= + A[27]*b[13];
b[1] -= + A[26]*b[12];
b[1] -= + A[25]*b[11];
b[1] -= + A[24]*b[10];
b[1] -= + A[23]*b[9];
b[1] -= + A[22]*b[8];
b[1] -= + A[21]*b[7];
b[1] -= + A[20]*b[6];
b[1] -= + A[19]*b[5];
b[1] -= + A[18]*b[4];
b[1] -= + A[17]*b[3];
b[1] -= + A[16]*b[2];
b[1] = b[1]/A[15];
b[0] -= + A[13]*b[13];
b[0] -= + A[12]*b[12];
b[0] -= + A[11]*b[11];
b[0] -= + A[10]*b[10];
b[0] -= + A[9]*b[9];
b[0] -= + A[8]*b[8];
b[0] -= + A[7]*b[7];
b[0] -= + A[6]*b[6];
b[0] -= + A[5]*b[5];
b[0] -= + A[4]*b[4];
b[0] -= + A[3]*b[3];
b[0] -= + A[2]*b[2];
b[0] -= + A[1]*b[1];
b[0] = b[0]/A[0];
}

real_t acado_solve_dim14_system( real_t* const A, real_t* const b, int* const rk_perm )
{
real_t det;

int i;
int j;
int k;

int indexMax;

int intSwap;

real_t valueMax;

real_t temp;

for (i = 0; i < 14; ++i)
{
rk_perm[i] = i;
}
det = 1.0000000000000000e+00;
for( i=0; i < (13); i++ ) {
	indexMax = i;
	valueMax = fabs(A[i*14+i]);
	for( j=(i+1); j < 14; j++ ) {
		temp = fabs(A[j*14+i]);
		if( temp > valueMax ) {
			indexMax = j;
			valueMax = temp;
		}
	}
	if( indexMax > i ) {
for (k = 0; k < 14; ++k)
{
	acadoWorkspace.rk_dim14_swap = A[i*14+k];
	A[i*14+k] = A[indexMax*14+k];
	A[indexMax*14+k] = acadoWorkspace.rk_dim14_swap;
}
	acadoWorkspace.rk_dim14_swap = b[i];
	b[i] = b[indexMax];
	b[indexMax] = acadoWorkspace.rk_dim14_swap;
	intSwap = rk_perm[i];
	rk_perm[i] = rk_perm[indexMax];
	rk_perm[indexMax] = intSwap;
	}
	det *= A[i*14+i];
	for( j=i+1; j < 14; j++ ) {
		A[j*14+i] = -A[j*14+i]/A[i*14+i];
		for( k=i+1; k < 14; k++ ) {
			A[j*14+k] += A[j*14+i] * A[i*14+k];
		}
		b[j] += A[j*14+i] * b[i];
	}
}
det *= A[195];
det = fabs(det);
acado_solve_dim14_triangular( A, b );
return det;
}

void acado_solve_dim14_system_reuse( real_t* const A, real_t* const b, int* const rk_perm )
{

acadoWorkspace.rk_dim14_bPerm[0] = b[rk_perm[0]];
acadoWorkspace.rk_dim14_bPerm[1] = b[rk_perm[1]];
acadoWorkspace.rk_dim14_bPerm[2] = b[rk_perm[2]];
acadoWorkspace.rk_dim14_bPerm[3] = b[rk_perm[3]];
acadoWorkspace.rk_dim14_bPerm[4] = b[rk_perm[4]];
acadoWorkspace.rk_dim14_bPerm[5] = b[rk_perm[5]];
acadoWorkspace.rk_dim14_bPerm[6] = b[rk_perm[6]];
acadoWorkspace.rk_dim14_bPerm[7] = b[rk_perm[7]];
acadoWorkspace.rk_dim14_bPerm[8] = b[rk_perm[8]];
acadoWorkspace.rk_dim14_bPerm[9] = b[rk_perm[9]];
acadoWorkspace.rk_dim14_bPerm[10] = b[rk_perm[10]];
acadoWorkspace.rk_dim14_bPerm[11] = b[rk_perm[11]];
acadoWorkspace.rk_dim14_bPerm[12] = b[rk_perm[12]];
acadoWorkspace.rk_dim14_bPerm[13] = b[rk_perm[13]];
acadoWorkspace.rk_dim14_bPerm[1] += A[14]*acadoWorkspace.rk_dim14_bPerm[0];

acadoWorkspace.rk_dim14_bPerm[2] += A[28]*acadoWorkspace.rk_dim14_bPerm[0];
acadoWorkspace.rk_dim14_bPerm[2] += A[29]*acadoWorkspace.rk_dim14_bPerm[1];

acadoWorkspace.rk_dim14_bPerm[3] += A[42]*acadoWorkspace.rk_dim14_bPerm[0];
acadoWorkspace.rk_dim14_bPerm[3] += A[43]*acadoWorkspace.rk_dim14_bPerm[1];
acadoWorkspace.rk_dim14_bPerm[3] += A[44]*acadoWorkspace.rk_dim14_bPerm[2];

acadoWorkspace.rk_dim14_bPerm[4] += A[56]*acadoWorkspace.rk_dim14_bPerm[0];
acadoWorkspace.rk_dim14_bPerm[4] += A[57]*acadoWorkspace.rk_dim14_bPerm[1];
acadoWorkspace.rk_dim14_bPerm[4] += A[58]*acadoWorkspace.rk_dim14_bPerm[2];
acadoWorkspace.rk_dim14_bPerm[4] += A[59]*acadoWorkspace.rk_dim14_bPerm[3];

acadoWorkspace.rk_dim14_bPerm[5] += A[70]*acadoWorkspace.rk_dim14_bPerm[0];
acadoWorkspace.rk_dim14_bPerm[5] += A[71]*acadoWorkspace.rk_dim14_bPerm[1];
acadoWorkspace.rk_dim14_bPerm[5] += A[72]*acadoWorkspace.rk_dim14_bPerm[2];
acadoWorkspace.rk_dim14_bPerm[5] += A[73]*acadoWorkspace.rk_dim14_bPerm[3];
acadoWorkspace.rk_dim14_bPerm[5] += A[74]*acadoWorkspace.rk_dim14_bPerm[4];

acadoWorkspace.rk_dim14_bPerm[6] += A[84]*acadoWorkspace.rk_dim14_bPerm[0];
acadoWorkspace.rk_dim14_bPerm[6] += A[85]*acadoWorkspace.rk_dim14_bPerm[1];
acadoWorkspace.rk_dim14_bPerm[6] += A[86]*acadoWorkspace.rk_dim14_bPerm[2];
acadoWorkspace.rk_dim14_bPerm[6] += A[87]*acadoWorkspace.rk_dim14_bPerm[3];
acadoWorkspace.rk_dim14_bPerm[6] += A[88]*acadoWorkspace.rk_dim14_bPerm[4];
acadoWorkspace.rk_dim14_bPerm[6] += A[89]*acadoWorkspace.rk_dim14_bPerm[5];

acadoWorkspace.rk_dim14_bPerm[7] += A[98]*acadoWorkspace.rk_dim14_bPerm[0];
acadoWorkspace.rk_dim14_bPerm[7] += A[99]*acadoWorkspace.rk_dim14_bPerm[1];
acadoWorkspace.rk_dim14_bPerm[7] += A[100]*acadoWorkspace.rk_dim14_bPerm[2];
acadoWorkspace.rk_dim14_bPerm[7] += A[101]*acadoWorkspace.rk_dim14_bPerm[3];
acadoWorkspace.rk_dim14_bPerm[7] += A[102]*acadoWorkspace.rk_dim14_bPerm[4];
acadoWorkspace.rk_dim14_bPerm[7] += A[103]*acadoWorkspace.rk_dim14_bPerm[5];
acadoWorkspace.rk_dim14_bPerm[7] += A[104]*acadoWorkspace.rk_dim14_bPerm[6];

acadoWorkspace.rk_dim14_bPerm[8] += A[112]*acadoWorkspace.rk_dim14_bPerm[0];
acadoWorkspace.rk_dim14_bPerm[8] += A[113]*acadoWorkspace.rk_dim14_bPerm[1];
acadoWorkspace.rk_dim14_bPerm[8] += A[114]*acadoWorkspace.rk_dim14_bPerm[2];
acadoWorkspace.rk_dim14_bPerm[8] += A[115]*acadoWorkspace.rk_dim14_bPerm[3];
acadoWorkspace.rk_dim14_bPerm[8] += A[116]*acadoWorkspace.rk_dim14_bPerm[4];
acadoWorkspace.rk_dim14_bPerm[8] += A[117]*acadoWorkspace.rk_dim14_bPerm[5];
acadoWorkspace.rk_dim14_bPerm[8] += A[118]*acadoWorkspace.rk_dim14_bPerm[6];
acadoWorkspace.rk_dim14_bPerm[8] += A[119]*acadoWorkspace.rk_dim14_bPerm[7];

acadoWorkspace.rk_dim14_bPerm[9] += A[126]*acadoWorkspace.rk_dim14_bPerm[0];
acadoWorkspace.rk_dim14_bPerm[9] += A[127]*acadoWorkspace.rk_dim14_bPerm[1];
acadoWorkspace.rk_dim14_bPerm[9] += A[128]*acadoWorkspace.rk_dim14_bPerm[2];
acadoWorkspace.rk_dim14_bPerm[9] += A[129]*acadoWorkspace.rk_dim14_bPerm[3];
acadoWorkspace.rk_dim14_bPerm[9] += A[130]*acadoWorkspace.rk_dim14_bPerm[4];
acadoWorkspace.rk_dim14_bPerm[9] += A[131]*acadoWorkspace.rk_dim14_bPerm[5];
acadoWorkspace.rk_dim14_bPerm[9] += A[132]*acadoWorkspace.rk_dim14_bPerm[6];
acadoWorkspace.rk_dim14_bPerm[9] += A[133]*acadoWorkspace.rk_dim14_bPerm[7];
acadoWorkspace.rk_dim14_bPerm[9] += A[134]*acadoWorkspace.rk_dim14_bPerm[8];

acadoWorkspace.rk_dim14_bPerm[10] += A[140]*acadoWorkspace.rk_dim14_bPerm[0];
acadoWorkspace.rk_dim14_bPerm[10] += A[141]*acadoWorkspace.rk_dim14_bPerm[1];
acadoWorkspace.rk_dim14_bPerm[10] += A[142]*acadoWorkspace.rk_dim14_bPerm[2];
acadoWorkspace.rk_dim14_bPerm[10] += A[143]*acadoWorkspace.rk_dim14_bPerm[3];
acadoWorkspace.rk_dim14_bPerm[10] += A[144]*acadoWorkspace.rk_dim14_bPerm[4];
acadoWorkspace.rk_dim14_bPerm[10] += A[145]*acadoWorkspace.rk_dim14_bPerm[5];
acadoWorkspace.rk_dim14_bPerm[10] += A[146]*acadoWorkspace.rk_dim14_bPerm[6];
acadoWorkspace.rk_dim14_bPerm[10] += A[147]*acadoWorkspace.rk_dim14_bPerm[7];
acadoWorkspace.rk_dim14_bPerm[10] += A[148]*acadoWorkspace.rk_dim14_bPerm[8];
acadoWorkspace.rk_dim14_bPerm[10] += A[149]*acadoWorkspace.rk_dim14_bPerm[9];

acadoWorkspace.rk_dim14_bPerm[11] += A[154]*acadoWorkspace.rk_dim14_bPerm[0];
acadoWorkspace.rk_dim14_bPerm[11] += A[155]*acadoWorkspace.rk_dim14_bPerm[1];
acadoWorkspace.rk_dim14_bPerm[11] += A[156]*acadoWorkspace.rk_dim14_bPerm[2];
acadoWorkspace.rk_dim14_bPerm[11] += A[157]*acadoWorkspace.rk_dim14_bPerm[3];
acadoWorkspace.rk_dim14_bPerm[11] += A[158]*acadoWorkspace.rk_dim14_bPerm[4];
acadoWorkspace.rk_dim14_bPerm[11] += A[159]*acadoWorkspace.rk_dim14_bPerm[5];
acadoWorkspace.rk_dim14_bPerm[11] += A[160]*acadoWorkspace.rk_dim14_bPerm[6];
acadoWorkspace.rk_dim14_bPerm[11] += A[161]*acadoWorkspace.rk_dim14_bPerm[7];
acadoWorkspace.rk_dim14_bPerm[11] += A[162]*acadoWorkspace.rk_dim14_bPerm[8];
acadoWorkspace.rk_dim14_bPerm[11] += A[163]*acadoWorkspace.rk_dim14_bPerm[9];
acadoWorkspace.rk_dim14_bPerm[11] += A[164]*acadoWorkspace.rk_dim14_bPerm[10];

acadoWorkspace.rk_dim14_bPerm[12] += A[168]*acadoWorkspace.rk_dim14_bPerm[0];
acadoWorkspace.rk_dim14_bPerm[12] += A[169]*acadoWorkspace.rk_dim14_bPerm[1];
acadoWorkspace.rk_dim14_bPerm[12] += A[170]*acadoWorkspace.rk_dim14_bPerm[2];
acadoWorkspace.rk_dim14_bPerm[12] += A[171]*acadoWorkspace.rk_dim14_bPerm[3];
acadoWorkspace.rk_dim14_bPerm[12] += A[172]*acadoWorkspace.rk_dim14_bPerm[4];
acadoWorkspace.rk_dim14_bPerm[12] += A[173]*acadoWorkspace.rk_dim14_bPerm[5];
acadoWorkspace.rk_dim14_bPerm[12] += A[174]*acadoWorkspace.rk_dim14_bPerm[6];
acadoWorkspace.rk_dim14_bPerm[12] += A[175]*acadoWorkspace.rk_dim14_bPerm[7];
acadoWorkspace.rk_dim14_bPerm[12] += A[176]*acadoWorkspace.rk_dim14_bPerm[8];
acadoWorkspace.rk_dim14_bPerm[12] += A[177]*acadoWorkspace.rk_dim14_bPerm[9];
acadoWorkspace.rk_dim14_bPerm[12] += A[178]*acadoWorkspace.rk_dim14_bPerm[10];
acadoWorkspace.rk_dim14_bPerm[12] += A[179]*acadoWorkspace.rk_dim14_bPerm[11];

acadoWorkspace.rk_dim14_bPerm[13] += A[182]*acadoWorkspace.rk_dim14_bPerm[0];
acadoWorkspace.rk_dim14_bPerm[13] += A[183]*acadoWorkspace.rk_dim14_bPerm[1];
acadoWorkspace.rk_dim14_bPerm[13] += A[184]*acadoWorkspace.rk_dim14_bPerm[2];
acadoWorkspace.rk_dim14_bPerm[13] += A[185]*acadoWorkspace.rk_dim14_bPerm[3];
acadoWorkspace.rk_dim14_bPerm[13] += A[186]*acadoWorkspace.rk_dim14_bPerm[4];
acadoWorkspace.rk_dim14_bPerm[13] += A[187]*acadoWorkspace.rk_dim14_bPerm[5];
acadoWorkspace.rk_dim14_bPerm[13] += A[188]*acadoWorkspace.rk_dim14_bPerm[6];
acadoWorkspace.rk_dim14_bPerm[13] += A[189]*acadoWorkspace.rk_dim14_bPerm[7];
acadoWorkspace.rk_dim14_bPerm[13] += A[190]*acadoWorkspace.rk_dim14_bPerm[8];
acadoWorkspace.rk_dim14_bPerm[13] += A[191]*acadoWorkspace.rk_dim14_bPerm[9];
acadoWorkspace.rk_dim14_bPerm[13] += A[192]*acadoWorkspace.rk_dim14_bPerm[10];
acadoWorkspace.rk_dim14_bPerm[13] += A[193]*acadoWorkspace.rk_dim14_bPerm[11];
acadoWorkspace.rk_dim14_bPerm[13] += A[194]*acadoWorkspace.rk_dim14_bPerm[12];


acado_solve_dim14_triangular( A, acadoWorkspace.rk_dim14_bPerm );
b[0] = acadoWorkspace.rk_dim14_bPerm[0];
b[1] = acadoWorkspace.rk_dim14_bPerm[1];
b[2] = acadoWorkspace.rk_dim14_bPerm[2];
b[3] = acadoWorkspace.rk_dim14_bPerm[3];
b[4] = acadoWorkspace.rk_dim14_bPerm[4];
b[5] = acadoWorkspace.rk_dim14_bPerm[5];
b[6] = acadoWorkspace.rk_dim14_bPerm[6];
b[7] = acadoWorkspace.rk_dim14_bPerm[7];
b[8] = acadoWorkspace.rk_dim14_bPerm[8];
b[9] = acadoWorkspace.rk_dim14_bPerm[9];
b[10] = acadoWorkspace.rk_dim14_bPerm[10];
b[11] = acadoWorkspace.rk_dim14_bPerm[11];
b[12] = acadoWorkspace.rk_dim14_bPerm[12];
b[13] = acadoWorkspace.rk_dim14_bPerm[13];
}



/** Matrix of size: 2 x 2 (row major format) */
static const real_t acado_Ah_mat[ 4 ] = 
{ 1.5625000000000001e-03, 3.3667195912175808e-03, 
-2.4171959121758042e-04, 1.5625000000000001e-03 };


/* Fixed step size:0.00625 */
int acado_integrate( real_t* const rk_eta, int resetIntegrator )
{
int error;

int i;
int j;
int k;
int run;
int run1;
int tmp_index1;
int tmp_index2;

real_t det;

acadoWorkspace.rk_ttt = 0.0000000000000000e+00;
acadoWorkspace.rk_xxx[7] = rk_eta[63];

for (run = 0; run < 2; ++run)
{
if( run > 0 ) {
for (i = 0; i < 7; ++i)
{
acadoWorkspace.rk_diffsPrev2[i * 8] = rk_eta[i * 7 + 7];
acadoWorkspace.rk_diffsPrev2[i * 8 + 1] = rk_eta[i * 7 + 8];
acadoWorkspace.rk_diffsPrev2[i * 8 + 2] = rk_eta[i * 7 + 9];
acadoWorkspace.rk_diffsPrev2[i * 8 + 3] = rk_eta[i * 7 + 10];
acadoWorkspace.rk_diffsPrev2[i * 8 + 4] = rk_eta[i * 7 + 11];
acadoWorkspace.rk_diffsPrev2[i * 8 + 5] = rk_eta[i * 7 + 12];
acadoWorkspace.rk_diffsPrev2[i * 8 + 6] = rk_eta[i * 7 + 13];
acadoWorkspace.rk_diffsPrev2[i * 8 + 7] = rk_eta[i + 56];
}
}
if( resetIntegrator ) {
for (i = 0; i < 1; ++i)
{
for (run1 = 0; run1 < 2; ++run1)
{
for (j = 0; j < 7; ++j)
{
acadoWorkspace.rk_xxx[j] = rk_eta[j];
tmp_index1 = j;
acadoWorkspace.rk_xxx[j] += + acado_Ah_mat[run1 * 2]*acadoWorkspace.rk_kkk[tmp_index1 * 2];
acadoWorkspace.rk_xxx[j] += + acado_Ah_mat[run1 * 2 + 1]*acadoWorkspace.rk_kkk[tmp_index1 * 2 + 1];
}
acado_diffs( acadoWorkspace.rk_xxx, &(acadoWorkspace.rk_diffsTemp2[ run1 * 56 ]) );
for (j = 0; j < 7; ++j)
{
tmp_index1 = (run1 * 7) + (j);
acadoWorkspace.rk_A[tmp_index1 * 14] = + acado_Ah_mat[run1 * 2]*acadoWorkspace.rk_diffsTemp2[(run1 * 56) + (j * 8)];
acadoWorkspace.rk_A[tmp_index1 * 14 + 1] = + acado_Ah_mat[run1 * 2]*acadoWorkspace.rk_diffsTemp2[(run1 * 56) + (j * 8 + 1)];
acadoWorkspace.rk_A[tmp_index1 * 14 + 2] = + acado_Ah_mat[run1 * 2]*acadoWorkspace.rk_diffsTemp2[(run1 * 56) + (j * 8 + 2)];
acadoWorkspace.rk_A[tmp_index1 * 14 + 3] = + acado_Ah_mat[run1 * 2]*acadoWorkspace.rk_diffsTemp2[(run1 * 56) + (j * 8 + 3)];
acadoWorkspace.rk_A[tmp_index1 * 14 + 4] = + acado_Ah_mat[run1 * 2]*acadoWorkspace.rk_diffsTemp2[(run1 * 56) + (j * 8 + 4)];
acadoWorkspace.rk_A[tmp_index1 * 14 + 5] = + acado_Ah_mat[run1 * 2]*acadoWorkspace.rk_diffsTemp2[(run1 * 56) + (j * 8 + 5)];
acadoWorkspace.rk_A[tmp_index1 * 14 + 6] = + acado_Ah_mat[run1 * 2]*acadoWorkspace.rk_diffsTemp2[(run1 * 56) + (j * 8 + 6)];
if( 0 == run1 ) acadoWorkspace.rk_A[(tmp_index1 * 14) + (j)] -= 1.0000000000000000e+00;
acadoWorkspace.rk_A[tmp_index1 * 14 + 7] = + acado_Ah_mat[run1 * 2 + 1]*acadoWorkspace.rk_diffsTemp2[(run1 * 56) + (j * 8)];
acadoWorkspace.rk_A[tmp_index1 * 14 + 8] = + acado_Ah_mat[run1 * 2 + 1]*acadoWorkspace.rk_diffsTemp2[(run1 * 56) + (j * 8 + 1)];
acadoWorkspace.rk_A[tmp_index1 * 14 + 9] = + acado_Ah_mat[run1 * 2 + 1]*acadoWorkspace.rk_diffsTemp2[(run1 * 56) + (j * 8 + 2)];
acadoWorkspace.rk_A[tmp_index1 * 14 + 10] = + acado_Ah_mat[run1 * 2 + 1]*acadoWorkspace.rk_diffsTemp2[(run1 * 56) + (j * 8 + 3)];
acadoWorkspace.rk_A[tmp_index1 * 14 + 11] = + acado_Ah_mat[run1 * 2 + 1]*acadoWorkspace.rk_diffsTemp2[(run1 * 56) + (j * 8 + 4)];
acadoWorkspace.rk_A[tmp_index1 * 14 + 12] = + acado_Ah_mat[run1 * 2 + 1]*acadoWorkspace.rk_diffsTemp2[(run1 * 56) + (j * 8 + 5)];
acadoWorkspace.rk_A[tmp_index1 * 14 + 13] = + acado_Ah_mat[run1 * 2 + 1]*acadoWorkspace.rk_diffsTemp2[(run1 * 56) + (j * 8 + 6)];
if( 1 == run1 ) acadoWorkspace.rk_A[(tmp_index1 * 14) + (j + 7)] -= 1.0000000000000000e+00;
}
acado_rhs( acadoWorkspace.rk_xxx, acadoWorkspace.rk_rhsTemp );
acadoWorkspace.rk_b[run1 * 7] = acadoWorkspace.rk_kkk[run1] - acadoWorkspace.rk_rhsTemp[0];
acadoWorkspace.rk_b[run1 * 7 + 1] = acadoWorkspace.rk_kkk[run1 + 2] - acadoWorkspace.rk_rhsTemp[1];
acadoWorkspace.rk_b[run1 * 7 + 2] = acadoWorkspace.rk_kkk[run1 + 4] - acadoWorkspace.rk_rhsTemp[2];
acadoWorkspace.rk_b[run1 * 7 + 3] = acadoWorkspace.rk_kkk[run1 + 6] - acadoWorkspace.rk_rhsTemp[3];
acadoWorkspace.rk_b[run1 * 7 + 4] = acadoWorkspace.rk_kkk[run1 + 8] - acadoWorkspace.rk_rhsTemp[4];
acadoWorkspace.rk_b[run1 * 7 + 5] = acadoWorkspace.rk_kkk[run1 + 10] - acadoWorkspace.rk_rhsTemp[5];
acadoWorkspace.rk_b[run1 * 7 + 6] = acadoWorkspace.rk_kkk[run1 + 12] - acadoWorkspace.rk_rhsTemp[6];
}
det = acado_solve_dim14_system( acadoWorkspace.rk_A, acadoWorkspace.rk_b, acadoWorkspace.rk_dim14_perm );
for (j = 0; j < 2; ++j)
{
acadoWorkspace.rk_kkk[j] += acadoWorkspace.rk_b[j * 7];
acadoWorkspace.rk_kkk[j + 2] += acadoWorkspace.rk_b[j * 7 + 1];
acadoWorkspace.rk_kkk[j + 4] += acadoWorkspace.rk_b[j * 7 + 2];
acadoWorkspace.rk_kkk[j + 6] += acadoWorkspace.rk_b[j * 7 + 3];
acadoWorkspace.rk_kkk[j + 8] += acadoWorkspace.rk_b[j * 7 + 4];
acadoWorkspace.rk_kkk[j + 10] += acadoWorkspace.rk_b[j * 7 + 5];
acadoWorkspace.rk_kkk[j + 12] += acadoWorkspace.rk_b[j * 7 + 6];
}
}
}
for (i = 0; i < 5; ++i)
{
for (run1 = 0; run1 < 2; ++run1)
{
for (j = 0; j < 7; ++j)
{
acadoWorkspace.rk_xxx[j] = rk_eta[j];
tmp_index1 = j;
acadoWorkspace.rk_xxx[j] += + acado_Ah_mat[run1 * 2]*acadoWorkspace.rk_kkk[tmp_index1 * 2];
acadoWorkspace.rk_xxx[j] += + acado_Ah_mat[run1 * 2 + 1]*acadoWorkspace.rk_kkk[tmp_index1 * 2 + 1];
}
acado_rhs( acadoWorkspace.rk_xxx, acadoWorkspace.rk_rhsTemp );
acadoWorkspace.rk_b[run1 * 7] = acadoWorkspace.rk_kkk[run1] - acadoWorkspace.rk_rhsTemp[0];
acadoWorkspace.rk_b[run1 * 7 + 1] = acadoWorkspace.rk_kkk[run1 + 2] - acadoWorkspace.rk_rhsTemp[1];
acadoWorkspace.rk_b[run1 * 7 + 2] = acadoWorkspace.rk_kkk[run1 + 4] - acadoWorkspace.rk_rhsTemp[2];
acadoWorkspace.rk_b[run1 * 7 + 3] = acadoWorkspace.rk_kkk[run1 + 6] - acadoWorkspace.rk_rhsTemp[3];
acadoWorkspace.rk_b[run1 * 7 + 4] = acadoWorkspace.rk_kkk[run1 + 8] - acadoWorkspace.rk_rhsTemp[4];
acadoWorkspace.rk_b[run1 * 7 + 5] = acadoWorkspace.rk_kkk[run1 + 10] - acadoWorkspace.rk_rhsTemp[5];
acadoWorkspace.rk_b[run1 * 7 + 6] = acadoWorkspace.rk_kkk[run1 + 12] - acadoWorkspace.rk_rhsTemp[6];
}
acado_solve_dim14_system_reuse( acadoWorkspace.rk_A, acadoWorkspace.rk_b, acadoWorkspace.rk_dim14_perm );
for (j = 0; j < 2; ++j)
{
acadoWorkspace.rk_kkk[j] += acadoWorkspace.rk_b[j * 7];
acadoWorkspace.rk_kkk[j + 2] += acadoWorkspace.rk_b[j * 7 + 1];
acadoWorkspace.rk_kkk[j + 4] += acadoWorkspace.rk_b[j * 7 + 2];
acadoWorkspace.rk_kkk[j + 6] += acadoWorkspace.rk_b[j * 7 + 3];
acadoWorkspace.rk_kkk[j + 8] += acadoWorkspace.rk_b[j * 7 + 4];
acadoWorkspace.rk_kkk[j + 10] += acadoWorkspace.rk_b[j * 7 + 5];
acadoWorkspace.rk_kkk[j + 12] += acadoWorkspace.rk_b[j * 7 + 6];
}
}
for (run1 = 0; run1 < 2; ++run1)
{
for (j = 0; j < 7; ++j)
{
acadoWorkspace.rk_xxx[j] = rk_eta[j];
tmp_index1 = j;
acadoWorkspace.rk_xxx[j] += + acado_Ah_mat[run1 * 2]*acadoWorkspace.rk_kkk[tmp_index1 * 2];
acadoWorkspace.rk_xxx[j] += + acado_Ah_mat[run1 * 2 + 1]*acadoWorkspace.rk_kkk[tmp_index1 * 2 + 1];
}
acado_diffs( acadoWorkspace.rk_xxx, &(acadoWorkspace.rk_diffsTemp2[ run1 * 56 ]) );
for (j = 0; j < 7; ++j)
{
tmp_index1 = (run1 * 7) + (j);
acadoWorkspace.rk_A[tmp_index1 * 14] = + acado_Ah_mat[run1 * 2]*acadoWorkspace.rk_diffsTemp2[(run1 * 56) + (j * 8)];
acadoWorkspace.rk_A[tmp_index1 * 14 + 1] = + acado_Ah_mat[run1 * 2]*acadoWorkspace.rk_diffsTemp2[(run1 * 56) + (j * 8 + 1)];
acadoWorkspace.rk_A[tmp_index1 * 14 + 2] = + acado_Ah_mat[run1 * 2]*acadoWorkspace.rk_diffsTemp2[(run1 * 56) + (j * 8 + 2)];
acadoWorkspace.rk_A[tmp_index1 * 14 + 3] = + acado_Ah_mat[run1 * 2]*acadoWorkspace.rk_diffsTemp2[(run1 * 56) + (j * 8 + 3)];
acadoWorkspace.rk_A[tmp_index1 * 14 + 4] = + acado_Ah_mat[run1 * 2]*acadoWorkspace.rk_diffsTemp2[(run1 * 56) + (j * 8 + 4)];
acadoWorkspace.rk_A[tmp_index1 * 14 + 5] = + acado_Ah_mat[run1 * 2]*acadoWorkspace.rk_diffsTemp2[(run1 * 56) + (j * 8 + 5)];
acadoWorkspace.rk_A[tmp_index1 * 14 + 6] = + acado_Ah_mat[run1 * 2]*acadoWorkspace.rk_diffsTemp2[(run1 * 56) + (j * 8 + 6)];
if( 0 == run1 ) acadoWorkspace.rk_A[(tmp_index1 * 14) + (j)] -= 1.0000000000000000e+00;
acadoWorkspace.rk_A[tmp_index1 * 14 + 7] = + acado_Ah_mat[run1 * 2 + 1]*acadoWorkspace.rk_diffsTemp2[(run1 * 56) + (j * 8)];
acadoWorkspace.rk_A[tmp_index1 * 14 + 8] = + acado_Ah_mat[run1 * 2 + 1]*acadoWorkspace.rk_diffsTemp2[(run1 * 56) + (j * 8 + 1)];
acadoWorkspace.rk_A[tmp_index1 * 14 + 9] = + acado_Ah_mat[run1 * 2 + 1]*acadoWorkspace.rk_diffsTemp2[(run1 * 56) + (j * 8 + 2)];
acadoWorkspace.rk_A[tmp_index1 * 14 + 10] = + acado_Ah_mat[run1 * 2 + 1]*acadoWorkspace.rk_diffsTemp2[(run1 * 56) + (j * 8 + 3)];
acadoWorkspace.rk_A[tmp_index1 * 14 + 11] = + acado_Ah_mat[run1 * 2 + 1]*acadoWorkspace.rk_diffsTemp2[(run1 * 56) + (j * 8 + 4)];
acadoWorkspace.rk_A[tmp_index1 * 14 + 12] = + acado_Ah_mat[run1 * 2 + 1]*acadoWorkspace.rk_diffsTemp2[(run1 * 56) + (j * 8 + 5)];
acadoWorkspace.rk_A[tmp_index1 * 14 + 13] = + acado_Ah_mat[run1 * 2 + 1]*acadoWorkspace.rk_diffsTemp2[(run1 * 56) + (j * 8 + 6)];
if( 1 == run1 ) acadoWorkspace.rk_A[(tmp_index1 * 14) + (j + 7)] -= 1.0000000000000000e+00;
}
}
for (run1 = 0; run1 < 7; ++run1)
{
for (i = 0; i < 2; ++i)
{
acadoWorkspace.rk_b[i * 7] = - acadoWorkspace.rk_diffsTemp2[(i * 56) + (run1)];
acadoWorkspace.rk_b[i * 7 + 1] = - acadoWorkspace.rk_diffsTemp2[(i * 56) + (run1 + 8)];
acadoWorkspace.rk_b[i * 7 + 2] = - acadoWorkspace.rk_diffsTemp2[(i * 56) + (run1 + 16)];
acadoWorkspace.rk_b[i * 7 + 3] = - acadoWorkspace.rk_diffsTemp2[(i * 56) + (run1 + 24)];
acadoWorkspace.rk_b[i * 7 + 4] = - acadoWorkspace.rk_diffsTemp2[(i * 56) + (run1 + 32)];
acadoWorkspace.rk_b[i * 7 + 5] = - acadoWorkspace.rk_diffsTemp2[(i * 56) + (run1 + 40)];
acadoWorkspace.rk_b[i * 7 + 6] = - acadoWorkspace.rk_diffsTemp2[(i * 56) + (run1 + 48)];
}
if( 0 == run1 ) {
det = acado_solve_dim14_system( acadoWorkspace.rk_A, acadoWorkspace.rk_b, acadoWorkspace.rk_dim14_perm );
}
 else {
acado_solve_dim14_system_reuse( acadoWorkspace.rk_A, acadoWorkspace.rk_b, acadoWorkspace.rk_dim14_perm );
}
for (i = 0; i < 2; ++i)
{
acadoWorkspace.rk_diffK[i] = acadoWorkspace.rk_b[i * 7];
acadoWorkspace.rk_diffK[i + 2] = acadoWorkspace.rk_b[i * 7 + 1];
acadoWorkspace.rk_diffK[i + 4] = acadoWorkspace.rk_b[i * 7 + 2];
acadoWorkspace.rk_diffK[i + 6] = acadoWorkspace.rk_b[i * 7 + 3];
acadoWorkspace.rk_diffK[i + 8] = acadoWorkspace.rk_b[i * 7 + 4];
acadoWorkspace.rk_diffK[i + 10] = acadoWorkspace.rk_b[i * 7 + 5];
acadoWorkspace.rk_diffK[i + 12] = acadoWorkspace.rk_b[i * 7 + 6];
}
for (i = 0; i < 7; ++i)
{
acadoWorkspace.rk_diffsNew2[(i * 8) + (run1)] = (i == run1-0);
acadoWorkspace.rk_diffsNew2[(i * 8) + (run1)] += + acadoWorkspace.rk_diffK[i * 2]*(real_t)3.1250000000000002e-03 + acadoWorkspace.rk_diffK[i * 2 + 1]*(real_t)3.1250000000000002e-03;
}
}
for (run1 = 0; run1 < 1; ++run1)
{
for (i = 0; i < 2; ++i)
{
for (j = 0; j < 7; ++j)
{
tmp_index1 = (i * 7) + (j);
tmp_index2 = (run1) + (j * 8);
acadoWorkspace.rk_b[tmp_index1] = - acadoWorkspace.rk_diffsTemp2[(i * 56) + (tmp_index2 + 7)];
}
}
acado_solve_dim14_system_reuse( acadoWorkspace.rk_A, acadoWorkspace.rk_b, acadoWorkspace.rk_dim14_perm );
for (i = 0; i < 2; ++i)
{
acadoWorkspace.rk_diffK[i] = acadoWorkspace.rk_b[i * 7];
acadoWorkspace.rk_diffK[i + 2] = acadoWorkspace.rk_b[i * 7 + 1];
acadoWorkspace.rk_diffK[i + 4] = acadoWorkspace.rk_b[i * 7 + 2];
acadoWorkspace.rk_diffK[i + 6] = acadoWorkspace.rk_b[i * 7 + 3];
acadoWorkspace.rk_diffK[i + 8] = acadoWorkspace.rk_b[i * 7 + 4];
acadoWorkspace.rk_diffK[i + 10] = acadoWorkspace.rk_b[i * 7 + 5];
acadoWorkspace.rk_diffK[i + 12] = acadoWorkspace.rk_b[i * 7 + 6];
}
for (i = 0; i < 7; ++i)
{
acadoWorkspace.rk_diffsNew2[(i * 8) + (run1 + 7)] = + acadoWorkspace.rk_diffK[i * 2]*(real_t)3.1250000000000002e-03 + acadoWorkspace.rk_diffK[i * 2 + 1]*(real_t)3.1250000000000002e-03;
}
}
rk_eta[0] += + acadoWorkspace.rk_kkk[0]*(real_t)3.1250000000000002e-03 + acadoWorkspace.rk_kkk[1]*(real_t)3.1250000000000002e-03;
rk_eta[1] += + acadoWorkspace.rk_kkk[2]*(real_t)3.1250000000000002e-03 + acadoWorkspace.rk_kkk[3]*(real_t)3.1250000000000002e-03;
rk_eta[2] += + acadoWorkspace.rk_kkk[4]*(real_t)3.1250000000000002e-03 + acadoWorkspace.rk_kkk[5]*(real_t)3.1250000000000002e-03;
rk_eta[3] += + acadoWorkspace.rk_kkk[6]*(real_t)3.1250000000000002e-03 + acadoWorkspace.rk_kkk[7]*(real_t)3.1250000000000002e-03;
rk_eta[4] += + acadoWorkspace.rk_kkk[8]*(real_t)3.1250000000000002e-03 + acadoWorkspace.rk_kkk[9]*(real_t)3.1250000000000002e-03;
rk_eta[5] += + acadoWorkspace.rk_kkk[10]*(real_t)3.1250000000000002e-03 + acadoWorkspace.rk_kkk[11]*(real_t)3.1250000000000002e-03;
rk_eta[6] += + acadoWorkspace.rk_kkk[12]*(real_t)3.1250000000000002e-03 + acadoWorkspace.rk_kkk[13]*(real_t)3.1250000000000002e-03;
if( run == 0 ) {
for (i = 0; i < 7; ++i)
{
for (j = 0; j < 7; ++j)
{
tmp_index2 = (j) + (i * 7);
rk_eta[tmp_index2 + 7] = acadoWorkspace.rk_diffsNew2[(i * 8) + (j)];
}
for (j = 0; j < 1; ++j)
{
tmp_index2 = (j) + (i);
rk_eta[tmp_index2 + 56] = acadoWorkspace.rk_diffsNew2[(i * 8) + (j + 7)];
}
}
}
else {
for (i = 0; i < 7; ++i)
{
for (j = 0; j < 7; ++j)
{
tmp_index2 = (j) + (i * 7);
rk_eta[tmp_index2 + 7] = + acadoWorkspace.rk_diffsNew2[i * 8]*acadoWorkspace.rk_diffsPrev2[j];
rk_eta[tmp_index2 + 7] += + acadoWorkspace.rk_diffsNew2[i * 8 + 1]*acadoWorkspace.rk_diffsPrev2[j + 8];
rk_eta[tmp_index2 + 7] += + acadoWorkspace.rk_diffsNew2[i * 8 + 2]*acadoWorkspace.rk_diffsPrev2[j + 16];
rk_eta[tmp_index2 + 7] += + acadoWorkspace.rk_diffsNew2[i * 8 + 3]*acadoWorkspace.rk_diffsPrev2[j + 24];
rk_eta[tmp_index2 + 7] += + acadoWorkspace.rk_diffsNew2[i * 8 + 4]*acadoWorkspace.rk_diffsPrev2[j + 32];
rk_eta[tmp_index2 + 7] += + acadoWorkspace.rk_diffsNew2[i * 8 + 5]*acadoWorkspace.rk_diffsPrev2[j + 40];
rk_eta[tmp_index2 + 7] += + acadoWorkspace.rk_diffsNew2[i * 8 + 6]*acadoWorkspace.rk_diffsPrev2[j + 48];
}
for (j = 0; j < 1; ++j)
{
tmp_index2 = (j) + (i);
rk_eta[tmp_index2 + 56] = acadoWorkspace.rk_diffsNew2[(i * 8) + (j + 7)];
rk_eta[tmp_index2 + 56] += + acadoWorkspace.rk_diffsNew2[i * 8]*acadoWorkspace.rk_diffsPrev2[j + 7];
rk_eta[tmp_index2 + 56] += + acadoWorkspace.rk_diffsNew2[i * 8 + 1]*acadoWorkspace.rk_diffsPrev2[j + 15];
rk_eta[tmp_index2 + 56] += + acadoWorkspace.rk_diffsNew2[i * 8 + 2]*acadoWorkspace.rk_diffsPrev2[j + 23];
rk_eta[tmp_index2 + 56] += + acadoWorkspace.rk_diffsNew2[i * 8 + 3]*acadoWorkspace.rk_diffsPrev2[j + 31];
rk_eta[tmp_index2 + 56] += + acadoWorkspace.rk_diffsNew2[i * 8 + 4]*acadoWorkspace.rk_diffsPrev2[j + 39];
rk_eta[tmp_index2 + 56] += + acadoWorkspace.rk_diffsNew2[i * 8 + 5]*acadoWorkspace.rk_diffsPrev2[j + 47];
rk_eta[tmp_index2 + 56] += + acadoWorkspace.rk_diffsNew2[i * 8 + 6]*acadoWorkspace.rk_diffsPrev2[j + 55];
}
}
}
resetIntegrator = 0;
acadoWorkspace.rk_ttt += 5.0000000000000000e-01;
}
for (i = 0; i < 7; ++i)
{
}
if( det < 1e-12 ) {
error = 2;
} else if( det < 1e-6 ) {
error = 1;
} else {
error = 0;
}
return error;
}



