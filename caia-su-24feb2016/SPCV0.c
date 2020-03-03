#include "dx.h"
void SPCV0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V80=0,V81=0,T=0,V19=0,V23=0,V2=0,V3=0,V6=0,V7=0,V8=0,V4=0,V5=0,V13=0,V15=0,V16=0,V14=0,V9=0,V10=0,V11=0,V12=0,V54=0,V59=0,V61=0,V62=0,V27=0,V28=0,V31=0,V32=0,V33=0,V29=0,V30=0,V38=0,V42=0,V43=0,V40=0,V41=0,V44=0,V45=0,V39=0,V34=0,V35=0,V36=0,V37=0,V50=0,V52=0,V53=0,V51=0,V46=0,V47=0,V48=0,V49=0,V76=0,V67=0,V68=0,V71=0,V72=0,V73=0,V69=0,V70=0,V83=0,V88=0,V89=0,V91=0,V92=0;
int X,I,V;
int J;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=15;
x[jvj+1]=10453;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2220&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
X=pile[v[22]]; I=pile[v[22]+1]; V=pile[v[22]+2]; v[22]+=4; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,X,jvj+2)*/
pile[v[22]]=V; pile[WZ1]=I; 
(*f[2077])( );     /*SPR0(V,I,V80)*/
V80=pile[WZ2]; 
pile[v[22]]=V80; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V80,61,V81)*/
V81=pile[WZ2]; 
pile[v[22]]=jvj+2; pile[WZ1]=V81; 
(*f[2077])( );     /*SPR0(jvj+2,V81,T)*/
T=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(103,X,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(101,jvj+3,jvj+5)*/
if((x[jvj+5]!=20)) goto l1;
pile[v[22]]=140; pile[WZ1]=V; 
(*f[44])( );if(v[102]) goto l1;     /*FNDC1(140,V,V19)*/
V19=pile[WZ2]; 
x[jvj+6]=vo[15];z[jvj+6]=vz[15];
pile[v[22]]=299; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(299,jvj+6,jvj+7)*/
for(a=x[jvj+7];a>0;a=t[a]) if(s[a]==V19) goto l1;
pile[v[22]]=241; pile[WZ1]=30; 
(*f[44])( );if(v[102]) goto l1;     /*FNDC1(241,30,V23)*/
V23=pile[WZ2]; 
pile[v[22]]=T; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(T,32,V2)*/
V2=pile[WZ2]; 
pile[v[22]]=V2; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V2,59,V3)*/
V3=pile[WZ2]; 
pile[v[22]]=(-1729); pile[WZ1]=V3; 
(*f[64])( );     /*SRA2((-1729),V3,V6)*/
V6=pile[WZ2]; 
pile[v[22]]=V6; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V6,91,V7)*/
V7=pile[WZ2]; 
pile[v[22]]=V7; pile[WZ1]=3; pile[WZ2]=V; 
(*f[2147])( );     /*SPP0(V7,3,V,V8)*/
V8=pile[WZ3]; 
pile[v[22]]=V8; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V8,93,V4)*/
V4=pile[WZ2]; 
pile[v[22]]=V4; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V4,61,V5)*/
V5=pile[WZ2]; 
pile[v[22]]=V5; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V5,40,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=jvj+2; pile[WZ1]=V13; 
(*f[2077])( );     /*SPR0(jvj+2,V13,V15)*/
V15=pile[WZ2]; 
pile[v[22]]=V23; pile[WZ1]=V15; 
(*f[64])( );     /*SRA2(V23,V15,V16)*/
V16=pile[WZ2]; 
pile[v[22]]=(-5048); pile[WZ1]=V16; 
(*f[64])( );     /*SRA2((-5048),V16,V14)*/
V14=pile[WZ2]; 
pile[v[22]]=V14; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V14,41,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=(-2601); pile[WZ1]=V9; 
(*f[64])( );     /*SRA2((-2601),V9,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=jvj+2; pile[WZ1]=V10; 
(*f[2077])( );     /*SPR0(jvj+2,V10,V11)*/
V11=pile[WZ2]; 
pile[v[22]]=(-2602); pile[WZ1]=V11; 
(*f[64])( );     /*SRA2((-2602),V11,V12)*/
V12=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=V12; 
(*f[99])( );     /*SPM0(0,V12,J)*/
J=pile[WZ2]; 
l7:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; pile[v[22]+3]=J; v[102]=0;return;
l1:pile[v[22]]=140; pile[WZ1]=V; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(140,V,V54)*/
V54=pile[WZ2]; 
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+3,jvj+4)*/
l3:pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(103,X,jvj+10)*/
pile[v[22]]=101; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+10,jvj+11)*/
if(x[jvj+11]==89||x[jvj+11]==41||x[jvj+11]==96||x[jvj+11]==1317) goto l4;
if((x[jvj+11]!=23)) goto l5;
pile[v[22]]=140; pile[WZ1]=V; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(140,V,V76)*/
V76=pile[WZ2]; 
x[jvj+12]=vo[15];z[jvj+12]=vz[15];
pile[v[22]]=299; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(299,jvj+12,jvj+13)*/
for(a=x[jvj+13];a>0;a=t[a]) if(s[a]==V76) goto l5;
pile[v[22]]=T; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(T,32,V67)*/
V67=pile[WZ2]; 
pile[v[22]]=V67; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V67,59,V68)*/
V68=pile[WZ2]; 
pile[v[22]]=(-1729); pile[WZ1]=V68; 
(*f[64])( );     /*SRA2((-1729),V68,V71)*/
V71=pile[WZ2]; 
pile[v[22]]=V71; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V71,91,V72)*/
V72=pile[WZ2]; 
pile[v[22]]=V72; pile[WZ1]=3; pile[WZ2]=V; 
(*f[2147])( );     /*SPP0(V72,3,V,V73)*/
V73=pile[WZ3]; 
pile[v[22]]=V73; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V73,93,V69)*/
V69=pile[WZ2]; 
pile[v[22]]=V69; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V69,61,V70)*/
V70=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=V70; 
(*f[99])( );     /*SPM0(0,V70,J)*/
J=pile[WZ2]; 
goto l7;
l2:x[jvj+8]=vo[15];z[jvj+8]=vz[15];
pile[v[22]]=299; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(299,jvj+8,jvj+9)*/
for(a=x[jvj+9];a>0;a=t[a]) if(s[a]==V54) goto l3;
pile[v[22]]=241; pile[WZ1]=25; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(241,25,V59)*/
V59=pile[WZ2]; 
pile[WZ1]=30; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(241,30,V61)*/
V61=pile[WZ2]; 
pile[WZ1]=143; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(241,143,V62)*/
V62=pile[WZ2]; 
pile[v[22]]=T; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(T,32,V27)*/
V27=pile[WZ2]; 
pile[v[22]]=V27; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V27,59,V28)*/
V28=pile[WZ2]; 
pile[v[22]]=(-1729); pile[WZ1]=V28; 
(*f[64])( );     /*SRA2((-1729),V28,V31)*/
V31=pile[WZ2]; 
pile[v[22]]=V31; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V31,91,V32)*/
V32=pile[WZ2]; 
pile[v[22]]=V32; pile[WZ1]=3; pile[WZ2]=V; 
(*f[2147])( );     /*SPP0(V32,3,V,V33)*/
V33=pile[WZ3]; 
pile[v[22]]=V33; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V33,93,V29)*/
V29=pile[WZ2]; 
pile[v[22]]=V29; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V29,61,V30)*/
V30=pile[WZ2]; 
pile[v[22]]=V30; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V30,40,V38)*/
V38=pile[WZ2]; 
pile[v[22]]=jvj+3; pile[WZ1]=V38; 
(*f[2077])( );     /*SPR0(jvj+3,V38,V42)*/
V42=pile[WZ2]; 
pile[v[22]]=V59; pile[WZ1]=V42; 
(*f[64])( );     /*SRA2(V59,V42,V43)*/
V43=pile[WZ2]; 
V88=20;
V89=V88;
pile[v[22]]=V89; pile[WZ1]=V43; 
(*f[221])( );     /*SRN0(V89,V43,V40)*/
V40=pile[WZ2]; 
pile[v[22]]=V62; pile[WZ1]=V40; 
(*f[64])( );     /*SRA2(V62,V40,V41)*/
V41=pile[WZ2]; 
pile[v[22]]=jvj+2; pile[WZ1]=V41; 
(*f[2077])( );     /*SPR0(jvj+2,V41,V44)*/
V44=pile[WZ2]; 
pile[v[22]]=V61; pile[WZ1]=V44; 
(*f[64])( );     /*SRA2(V61,V44,V45)*/
V45=pile[WZ2]; 
pile[v[22]]=(-5048); pile[WZ1]=V45; 
(*f[64])( );     /*SRA2((-5048),V45,V39)*/
V39=pile[WZ2]; 
pile[v[22]]=V39; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V39,41,V34)*/
V34=pile[WZ2]; 
pile[v[22]]=(-2601); pile[WZ1]=V34; 
(*f[64])( );     /*SRA2((-2601),V34,V35)*/
V35=pile[WZ2]; 
pile[v[22]]=jvj+2; pile[WZ1]=V35; 
(*f[2077])( );     /*SPR0(jvj+2,V35,V36)*/
V36=pile[WZ2]; 
pile[v[22]]=(-2602); pile[WZ1]=V36; 
(*f[64])( );     /*SRA2((-2602),V36,V37)*/
V37=pile[WZ2]; 
pile[v[22]]=V37; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V37,40,V50)*/
V50=pile[WZ2]; 
pile[v[22]]=jvj+3; pile[WZ1]=V50; 
(*f[2077])( );     /*SPR0(jvj+3,V50,V52)*/
V52=pile[WZ2]; 
pile[v[22]]=V59; pile[WZ1]=V52; 
(*f[64])( );     /*SRA2(V59,V52,V53)*/
V53=pile[WZ2]; 
V91=41;
V92=V91;
pile[v[22]]=V92; pile[WZ1]=V53; 
(*f[221])( );     /*SRN0(V92,V53,V51)*/
V51=pile[WZ2]; 
pile[v[22]]=V51; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V51,41,V46)*/
V46=pile[WZ2]; 
pile[v[22]]=(-2601); pile[WZ1]=V46; 
(*f[64])( );     /*SRA2((-2601),V46,V47)*/
V47=pile[WZ2]; 
pile[v[22]]=(-1000); pile[WZ1]=V47; 
(*f[99])( );     /*SPM0((-1000),V47,V48)*/
V48=pile[WZ2]; 
pile[v[22]]=(-2602); pile[WZ1]=V48; 
(*f[64])( );     /*SRA2((-2602),V48,V49)*/
V49=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=V49; 
(*f[99])( );     /*SPM0(0,V49,J)*/
J=pile[WZ2]; 
goto l7;
l4:J=T;
goto l7;
l5:pile[v[22]]=140; pile[WZ1]=V; 
(*f[44])( );if(v[102]) goto l6;     /*FNDC1(140,V,V83)*/
V83=pile[WZ2]; 
x[jvj+14]=vo[15];z[jvj+14]=vz[15];
pile[v[22]]=299; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(299,jvj+14,jvj+15)*/
for(a=x[jvj+15];a>0;a=t[a]) if(s[a]==V83) goto l4;
l6:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; v[102]=1;return;
}
