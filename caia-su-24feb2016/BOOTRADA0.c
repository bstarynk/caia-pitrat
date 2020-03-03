#include "dx.h"
void BOOTRADA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V20=0,V18=0,V19=0,V21=0,V16=0,V23=0;
int C,B,A;
int R;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=22;
x[jvj+1]=11707;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1503&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
C=pile[v[22]]; B=pile[v[22]+1]; A=pile[v[22]+2]; R=pile[v[22]+3]; v[22]+=4; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+3]=x[R]=incon;
pile[v[22]]=A; pile[WZ1]=B; pile[WZ2]=C; pile[WZ3]=jvj+3; 
(*f[1714])( );if(v[102]) goto l1;     /*BOOTRADB0(A,B,C,jvj+3)*/
if((x[jvj+3]==250)) goto l1;
x[R]=x[jvj+3] ;z[R]=z[jvj+3];
l1:x[jvj+19]=incon;
pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,A,jvj+2)*/
x[jvj+19]=x[jvj+2] ;z[jvj+19]=z[jvj+2];
l3:x[jvj+18]=x[jvj+19] ;z[jvj+18]=z[jvj+19];
if((x[jvj+18]!=250)) goto l4;
V20=x[A];
pile[v[22]]=20; pile[WZ1]=11707; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,11707,0,V18)*/
V18=pile[WZ3]; 
pile[WZ1]=V20; pile[WZ2]=V18; 
(*f[39])( );     /*SDX0(20,V20,V18,V19)*/
V19=pile[WZ3]; 
pile[v[22]]=V19; 
(*f[40])( );     /*SLG0(V19)*/
l4:if(x[jvj+3]==incon) goto l5;
if(x[R]!=incon) goto l17;
l16:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; v[102]=1;return;
l2:x[jvj+19]=250 ;z[jvj+19]=250;
goto l3;
l5:if(x[R]==incon) goto l18;
l7:x[jvj+20]=w[x[jvj+18]][9];
l8:if((x[jvj+20]>0)) goto l9;
x[jvj+21]=w[x[jvj+18]][8];
l12:if((x[jvj+21]<=0)) goto l17;
x[jvj+14]=s[x[jvj+21]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+21];
pile[v[22]]=jvj+14; pile[WZ1]=A; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(jvj+14,A,jvj+15)*/
x[jvj+22]=x[jvj+15] ;z[jvj+22]=z[jvj+15];
l13:if((x[jvj+22]>0)) goto l14;
x[jvj+21]=t[x[jvj+21]];
goto l12;
l6:x[jvj+12]=x[C] ;z[jvj+12]=z[C];
l11:pile[v[22]]=jvj+10; pile[WZ1]=A; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(jvj+10,A,jvj+11)*/
pile[v[22]]=jvj+12; pile[WZ1]=B; pile[WZ3]=jvj+13; 
(*f[1503])( );if(v[102]) goto l10;     /*BOOTRADA0(jvj+12,B,jvj+11,jvj+13)*/
pile[v[22]]=R; pile[WZ1]=jvj+10; pile[WZ2]=jvj+13; 
(*f[35])( );     /*CHGC1(R,jvj+10,jvj+13)*/
l10:x[jvj+20]=t[x[jvj+20]];
goto l8;
l9:x[jvj+10]=s[x[jvj+20]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+20];
x[jvj+12]=incon;
if((x[jvj+10]!=103)) goto l6;
pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,A,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+6,jvj+7)*/
pile[v[22]]=1045; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(1045,jvj+7,jvj+8)*/
if((x[jvj+8]!=68)) goto l6;
pile[v[22]]=447; pile[WZ1]=C; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(447,C,jvj+9)*/
pile[WZ1]=jvj+9; pile[WZ2]=459; pile[WZ3]=278; pile[WZ4]=jvj+12; 
(*f[181])( );     /*QUADRI2(447,jvj+9,459,278,jvj+12)*/
goto l11;
l14:x[jvj+16]=s[x[jvj+22]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+22];
pile[v[22]]=C; pile[WZ1]=B; pile[WZ2]=jvj+16; pile[WZ3]=jvj+17; 
(*f[1503])( );if(v[102]) goto l15;     /*BOOTRADA0(C,B,jvj+16,jvj+17)*/
pile[v[22]]=R; pile[WZ1]=jvj+14; pile[WZ2]=jvj+17; 
(*f[36])( );     /*PLUSC0(R,jvj+14,jvj+17)*/
l15:x[jvj+22]=t[x[jvj+22]];
goto l13;
l17:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; v[102]=0;return;
l18:pile[v[22]]=jvj+18; pile[WZ1]=100; pile[WZ2]=R; 
(*f[54])( );     /*TRI1(jvj+18,100,R)*/
if((x[jvj+4]=w[x[jvj+18]][3])==incon) goto l7;
pile[v[22]]=A; pile[WZ1]=jvj+4; pile[WZ3]=jvj+5; 
(*f[45])( );if(v[102]) goto l7;     /*FNDZ0(A,jvj+4,V21,jvj+5)*/
V21=pile[WZ2]; 
V16=V21;
V23=V16;
pile[v[22]]=R; pile[WZ2]=V23; 
(*f[43])( );     /*CHGC2(R,jvj+4,V23)*/
goto l7;
}
