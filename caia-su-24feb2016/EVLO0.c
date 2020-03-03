#include "dx.h"
void EVLO0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int TZZ=0,A=0,V15=0,B=0,V2=0,V12=0,V13=0,V4=0,V19=0,C=0,V3=0,V8=0,V9=0,V10=0,V11=0,V1=0;
int Z,X,Y;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=13;
if(v[0]>99700) (*f[6])( );

Z=pile[v[22]]; X=pile[v[22]+1]; Y=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
A=B=C=incon;
if((x[Y]==12)) goto l1;
if((x[Y]==352)) goto l2;
if((x[Y]!=709)) goto l3;
fflush(stdout);
l3:pile[v[22]]=102; pile[WZ1]=Z; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,Z,jvj+1)*/
pile[v[22]]=jvj+1; pile[WZ1]=X; pile[WZ3]=jvj+2; 
(*f[80])( );if(v[102]) goto l6;     /*EVL1(jvj+1,X,A,jvj+2,TZZ)*/
A=pile[WZ2]; TZZ=pile[WZ4]; 
if((x[Y]==62)) goto l4;
if((x[Y]==227)) goto l5;
if((x[Y]!=249)) goto l6;
v[A]=system(c[4]);
l6:pile[v[22]]=103; pile[WZ1]=Z; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(103,Z,jvj+3)*/
pile[v[22]]=jvj+3; pile[WZ1]=X; pile[WZ3]=jvj+4; 
(*f[80])( );if(v[102]) goto l7;     /*EVL1(jvj+3,X,B,jvj+4,V15)*/
B=pile[WZ2]; V15=pile[WZ4]; 
l7:if(A!=incon) goto l8;
l22:pile[v[22]]=160; pile[WZ1]=Z; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(160,Z,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=X; pile[WZ3]=jvj+10; 
(*f[80])( );if(v[102]) goto l23;     /*EVL1(jvj+9,X,C,jvj+10,V19)*/
C=pile[WZ2]; V19=pile[WZ4]; 
l23:if(A!=incon) goto l24;
l39:v[0]=jvj; v[22]-=3; return;
l1:exit(0);
goto l3;
l2:putc('\f',fx[v[27]]);putc('\n',fx[v[27]]);
goto l3;
l4:putchar(A);
goto l6;
l5:depuis=vv[52]+600-(time(tzt)-inccc);ensuite=depuis+A;alarm((depuis>=0) ? 1 : (ensuite>0) ? ensuite : A);
goto l6;
l8:if(B!=incon) goto l9;
goto l22;
l9:if((x[Y]==31)) goto l10;
if((x[Y]==34)) goto l11;
if((x[Y]==75)) goto l12;
if((x[Y]==173)) goto l13;
if((x[Y]==174)) goto l14;
if((x[Y]==175)) goto l15;
if((x[Y]==266)) goto l16;
if((x[Y]==344)) goto l17;
if((x[Y]==467)) goto l18;
if((x[Y]==1011)) goto l19;
if((x[Y]==1155)) goto l20;
if((x[Y]==1794)) goto l21;
if((x[Y]!=1086)) goto l22;
x[jvj+5]=vo[14];z[jvj+5]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(642,jvj+5,V4)*/
V4=pile[WZ2]; 
x[jvj+7]=A ;z[jvj+7]=(A<=sepcte) ? A : 0;
x[jvj+8]=B ;z[jvj+8]=(B<=sepcte) ? B : 0;
pile[v[22]]=V4; pile[WZ1]=858; pile[WZ2]=jvj+11; 
(*f[46])( );     /*TRI0(V4,858,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+12; 
(*f[189])( );     /*TRI4(jvj+11,v[13],642,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=623; pile[WZ2]=246; pile[WZ3]=jvj+13; 
(*f[189])( );     /*TRI4(jvj+12,623,246,jvj+13)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=10514; pile[WZ4]=jvj+13; pile[WZ5]=jvj+6; 
(*f[269])( );     /*QUADRI6(158,1,218,10514,jvj+13,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[1047])( );     /*EVENEMENT0(jvj+6,jvj+7,jvj+8)*/
goto l22;
l10:v[A]=B;
goto l22;
l11:V2=A;
c[v[1]][B]=V2;
goto l22;
l12:bh[v[1]][B]=A;
goto l22;
l13:r[A]=B;
goto l22;
l14:s[A]=B;
goto l22;
l15:t[A]=B;
goto l22;
l16:s[A]=B;
goto l22;
l17:sy[A]=((B>>8)&0xff);sy[A+1]=(B&0xff);
goto l22;
l18:w[A][B]=incon;
goto l22;
l19:A|=B;
goto l22;
l20:vv[A]=B;
goto l22;
l21:V12=A;
V13=B;
;
goto l22;
l24:if(B!=incon) goto l25;
goto l39;
l25:if(C!=incon) goto l26;
goto l39;
l26:if((x[Y]==71)) goto l27;
if((x[Y]==200)) goto l28;
if((x[Y]==422)) goto l29;
if((x[Y]==456)) goto l30;
if((x[Y]==471)) goto l31;
if((x[Y]==503)) goto l32;
if((x[Y]==504)) goto l33;
if((x[Y]==505)) goto l34;
if((x[Y]==640)) goto l35;
if((x[Y]==1199)) goto l36;
if((x[Y]==1431)) goto l37;
if((x[Y]==1434)) goto l38;
if((x[Y]!=16)) goto l39;
V1=A;
pile[v[22]]=C; pile[WZ1]=B; pile[WZ2]=V1; 
(*f[1046])( );     /*EVLJ0(C,B,V1)*/
goto l39;
l27:for(i=1;i<=C;i++) putc(' ',fx[v[27]]);for(i=A;i<B;i++) putc(c[v[1]][i],fx[v[27]]);putc('\n',fx[v[27]]);
goto l39;
l28:x[A]=B;z[A]=C;
goto l39;
l29:V3=C;
vnd[A][B]=V3;
goto l39;
l30:w[A][B]=C;
goto l39;
l31:tnd[A][B]=C;
goto l39;
l32:if(C>0) s[C]=68;if(C==(-1)||(C>0&&v[122]!=0)) {ou[++v[14]]=A;pl[v[14]]=(-1);av[v[14]]=r[A];ty[v[14]]=0;};r[A]=B;
goto l39;
l33:if(C>0) s[C]=68;if(C==(-1)||(C>0&&v[122]!=0)) {ou[++v[14]]=A;pl[v[14]]=0;av[v[14]]=s[A];ty[v[14]]=(s[t[abs(r[ou[v[14]]])]]<=23) ? 1 : 0;};s[A]=B;
goto l39;
l34:if(C>0) s[C]=68;if(C==(-1)||(C>0&&v[122]!=0)) {ou[++v[14]]=A;pl[v[14]]=1;av[v[14]]=t[A];ty[v[14]]=1;};t[A]=B;
goto l39;
l35:vo[A]=B;vz[A]=C;
goto l39;
l36:V8=C;
c[A][B]=V8;
goto l39;
l37:V9=A;
V10=C;
cmt[V9][B]=V10;
goto l39;
l38:V11=C;
cmt[A][B]=V11;
goto l39;
}
