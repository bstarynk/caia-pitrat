#include "dx.h"
void ESSOB1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V1=0,V4=0,K=0,V14=0,V13=0,V15=0,V17=0,Q=0,MN=0,V21=0,V6=0,V10=0,V12=0,V11=0,V9=0,V26=0,V24=0,V25=0,V27=0,V45=0,V29=0,V34=0,V31=0,V32=0,V33=0,V35=0,V37=0,V40=0,V39=0,V5=0,V23=0,V44=0,V46=0,V47=0,V48=0,V49=0,V52=0,V50=0,V62=0,V59=0,V60=0,V61=0,V63=0,V82=0,V80=0,V79=0,V77=0,V78=0,V76=0,V75=0,V56=0,V69=0,V70=0,V71=0,V73=0,V74=0,V58=0,V54=0,V55=0,V64=0,V65=0,V66=0,V68=0;
int N,B,P;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=10;
if(v[0]>99700) (*f[6])( );

N=pile[v[22]]; B=pile[v[22]+1]; P=pile[v[22]+2]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V45=P;
V44=N;
l1:V2=z[V45];
if((V2!=(-100))) goto l9;
V1=x[V45];
if((V1<=sepbase)) goto l9;
if((V1>sepcte)) goto l9;
x[jvj+9]=V1 ;z[jvj+9]=(V1<=sepcte) ? V1 : 0;
V4=V44-1;
x[jvj+1]=x[jvj+9] ;z[jvj+1]=z[jvj+9];
K=V4;
V14=V45+1;
V13=z[V14];
if((V13==(-101))) goto l2;
pile[v[22]]=365; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(365,jvj+1,jvj+2)*/
if((x[jvj+2]<=0)) goto l10;
x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=130; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(130,jvj+3,Q)*/
Q=pile[WZ2]; 
V21=V45+1;
MN=V21;
l7:if((x[B]==39)) goto l8;
if((x[B]!=21)) goto l10;
pile[v[22]]=365; pile[WZ1]=jvj+1; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(365,jvj+1,jvj+4)*/
l3:if((x[jvj+4]<=0)) goto l10;
x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=130; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(130,jvj+5,V6)*/
V6=pile[WZ2]; 
if((V6!=Q)) goto l4;
V34=x[jvj+1];
pile[v[22]]=30; pile[WZ1]=0; pile[WZ2]=42; 
(*f[41])( );     /*SRB0(30,0,42,V31)*/
V31=pile[WZ3]; 
pile[v[22]]=V31; pile[WZ1]=(-1761); 
(*f[37])( );     /*SRA0(V31,(-1761),V32)*/
V32=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V34; pile[WZ2]=V32; 
(*f[39])( );     /*SDX0(20,V34,V32,V33)*/
V33=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=Q; pile[WZ2]=V33; 
(*f[39])( );     /*SDX0(41,Q,V33,V35)*/
V35=pile[WZ3]; 
pile[WZ1]=V45; pile[WZ2]=V35; 
(*f[39])( );     /*SDX0(41,V45,V35,V37)*/
V37=pile[WZ3]; 
V40=75-V37;
pile[v[22]]=V40; pile[WZ1]=V37; pile[WZ2]=42; 
(*f[41])( );     /*SRB0(V40,V37,42,V39)*/
V39=pile[WZ3]; 
pile[v[22]]=V39; 
(*f[40])( );     /*SLG0(V39)*/
fflush(stdout);
pile[v[22]]=441; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(441,jvj+5,jvj+6)*/
V10=V45-1;
l5:if((x[jvj+6]<=0)) goto l10;
x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=140; pile[WZ1]=jvj+7; 
(*f[44])( );if(v[102]) goto l6;     /*FNDC1(140,jvj+7,V12)*/
V12=pile[WZ2]; 
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(117,jvj+7,V11)*/
V11=pile[WZ2]; 
V9=V10+V11;
x[jvj+8]=incon;
V46=x[V9];
V47=V46;
V48=z[V9];
V49=V48;
if((V49<(-1))) goto l14;
if((V47<=sepcte)) goto l14;
x[jvj+10]=incon;
V52=r[V47];
if((V52>0)) goto l23;
x[jvj+10]=23 ;z[jvj+10]=23;
l13:x[jvj+8]=x[jvj+10] ;z[jvj+8]=z[jvj+10];
l14:if((V47<=0)) goto l22;
if((V47>sepcte)) goto l22;
if((V49<0)) goto l22;
V50=V47;
V62=V50;
pile[v[22]]=0; pile[WZ1]=42; 
(*f[38])( );     /*SPC0(0,42,V59)*/
V59=pile[WZ2]; 
pile[v[22]]=V59; pile[WZ1]=V12; 
(*f[37])( );     /*SRA0(V59,V12,V60)*/
V60=pile[WZ2]; 
pile[v[22]]=V60; pile[WZ1]=(-2941); 
(*f[37])( );     /*SRA0(V60,(-2941),V61)*/
V61=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V62; pile[WZ2]=V61; 
(*f[39])( );     /*SDX0(20,V62,V61,V63)*/
V63=pile[WZ3]; 
pile[v[22]]=V63; 
(*f[40])( );     /*SLG0(V63)*/
l15:fflush(stdout);
l16:if(x[jvj+8]!=incon) goto l21;
l6:x[jvj+6]=t[x[jvj+6]];
goto l5;
l2:V15=x[V14];
V17=V14+1;
Q=V15;
MN=V17;
goto l7;
l4:x[jvj+4]=t[x[jvj+4]];
goto l3;
l8:V26=x[jvj+1];
pile[v[22]]=0; pile[WZ1]=(-1761); 
(*f[37])( );     /*SRA0(0,(-1761),V24)*/
V24=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V26; pile[WZ2]=V24; 
(*f[39])( );     /*SDX0(20,V26,V24,V25)*/
V25=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=Q; pile[WZ2]=V25; 
(*f[39])( );     /*SDX0(41,Q,V25,V27)*/
V27=pile[WZ3]; 
pile[WZ1]=V45; pile[WZ2]=V27; 
(*f[39])( );     /*SDX0(41,V45,V27,V29)*/
V29=pile[WZ3]; 
pile[v[22]]=V29; 
(*f[40])( );     /*SLG0(V29)*/
fflush(stdout);
l10:if((K>0)) goto l11;
V5=V45-1;
v[69]=V5;
l11:if((V45<=sepcte)) goto l12;
if((K<=0)) goto l12;
V23=V45-1;
V44=K;
V45=V23;
goto l1;
l9:K=V44;
goto l11;
l12:v[0]=jvj; v[22]-=3; return;
l18:V78=x[jvj+8];
pile[v[22]]=0; pile[WZ1]=42; 
(*f[38])( );     /*SPC0(0,42,V75)*/
V75=pile[WZ2]; 
pile[v[22]]=V75; pile[WZ1]=V12; 
(*f[37])( );     /*SRA0(V75,V12,V76)*/
V76=pile[WZ2]; 
pile[v[22]]=V76; pile[WZ1]=(-2943); 
(*f[37])( );     /*SRA0(V76,(-2943),V77)*/
V77=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V78; pile[WZ2]=V77; 
(*f[39])( );     /*SDX0(20,V78,V77,V79)*/
V79=pile[WZ3]; 
pile[v[22]]=V79; pile[WZ1]=(-2941); 
(*f[37])( );     /*SRA0(V79,(-2941),V80)*/
V80=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V47; pile[WZ2]=V80; 
(*f[39])( );     /*SDX0(41,V47,V80,V82)*/
V82=pile[WZ3]; 
pile[v[22]]=V82; 
(*f[40])( );     /*SLG0(V82)*/
l17:fflush(stdout);
goto l6;
l20:V54=x[V56];
if((V54==V47)) goto l18;
V56++;
l19:if((V56<=V55)) goto l20;
pile[v[22]]=0; pile[WZ1]=42; 
(*f[38])( );     /*SPC0(0,42,V69)*/
V69=pile[WZ2]; 
pile[v[22]]=V69; pile[WZ1]=V12; 
(*f[37])( );     /*SRA0(V69,V12,V70)*/
V70=pile[WZ2]; 
pile[v[22]]=V70; pile[WZ1]=(-2941); 
(*f[37])( );     /*SRA0(V70,(-2941),V71)*/
V71=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V47; pile[WZ2]=V71; 
(*f[39])( );     /*SDX0(41,V47,V71,V73)*/
V73=pile[WZ3]; 
pile[v[22]]=V73; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V73,58,V74)*/
V74=pile[WZ2]; 
pile[v[22]]=V74; 
(*f[40])( );     /*SLG0(V74)*/
pile[v[22]]=0; pile[WZ1]=257; pile[WZ2]=V47; pile[WZ3]=jvj+8; 
(*f[238])( );     /*SDX2(0,257,V47,jvj+8,V58)*/
V58=pile[WZ4]; 
pile[v[22]]=V58; 
(*f[40])( );     /*SLG0(V58)*/
goto l17;
l21:V55=V9-1;
V56=MN;
goto l19;
l22:if((V49>=(-1))) goto l16;
if((V47<=(-1000000))) goto l16;
pile[v[22]]=0; pile[WZ1]=42; 
(*f[38])( );     /*SPC0(0,42,V64)*/
V64=pile[WZ2]; 
pile[v[22]]=V64; pile[WZ1]=V12; 
(*f[37])( );     /*SRA0(V64,V12,V65)*/
V65=pile[WZ2]; 
pile[v[22]]=V65; pile[WZ1]=(-2941); 
(*f[37])( );     /*SRA0(V65,(-2941),V66)*/
V66=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V47; pile[WZ2]=V66; 
(*f[39])( );     /*SDX0(41,V47,V66,V68)*/
V68=pile[WZ3]; 
pile[v[22]]=V68; 
(*f[40])( );     /*SLG0(V68)*/
goto l15;
l23:x[jvj+10]=20 ;z[jvj+10]=20;
goto l13;
}
