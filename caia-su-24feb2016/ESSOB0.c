#include "dx.h"
void ESSOB0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V1=0,V4=0,K=0,V14=0,V13=0,V15=0,V17=0,Q=0,MN=0,V21=0,V6=0,V10=0,V12=0,V11=0,V9=0,V26=0,V24=0,V25=0,V27=0,V29=0,V34=0,V31=0,V32=0,V33=0,V35=0,V37=0,V40=0,V39=0,V5=0,V23=0,V44=0,V45=0,V46=0,V47=0,V50=0,V48=0,V60=0,V57=0,V58=0,V59=0,V61=0,V80=0,V78=0,V77=0,V75=0,V76=0,V74=0,V73=0,V54=0,V67=0,V68=0,V69=0,V71=0,V72=0,V56=0,V52=0,V53=0,V62=0,V63=0,V64=0,V66=0;
int N,P,B;
int BL;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=9;
if(v[0]>99700) (*f[6])( );

N=pile[v[22]]; P=pile[v[22]+1]; B=pile[v[22]+2]; BL=pile[v[22]+3]; v[22]+=4; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[BL]=incon;
V2=z[P];
if((V2!=(-100))) goto l8;
V1=x[P];
if((V1<=sepbase)) goto l8;
if((V1>sepcte)) goto l8;
x[jvj+8]=V1 ;z[jvj+8]=(V1<=sepcte) ? V1 : 0;
V4=N-1;
x[BL]=x[jvj+8] ;z[BL]=z[jvj+8];
K=V4;
V14=P+1;
V13=z[V14];
if((V13==(-101))) goto l1;
pile[v[22]]=365; pile[WZ1]=BL; pile[WZ2]=jvj+1; 
(*f[33])( );     /*FNDE0(365,BL,jvj+1)*/
if((x[jvj+1]<=0)) goto l9;
x[jvj+2]=s[x[jvj+1]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+1];
pile[v[22]]=130; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(130,jvj+2,Q)*/
Q=pile[WZ2]; 
V21=P+1;
MN=V21;
l6:if((x[B]==39)) goto l7;
if((x[B]!=21)) goto l9;
pile[v[22]]=365; pile[WZ1]=BL; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(365,BL,jvj+3)*/
l2:if((x[jvj+3]<=0)) goto l9;
x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=130; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(130,jvj+4,V6)*/
V6=pile[WZ2]; 
if((V6!=Q)) goto l3;
V34=x[BL];
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
pile[WZ1]=P; pile[WZ2]=V35; 
(*f[39])( );     /*SDX0(41,P,V35,V37)*/
V37=pile[WZ3]; 
V40=75-V37;
pile[v[22]]=V40; pile[WZ1]=V37; pile[WZ2]=42; 
(*f[41])( );     /*SRB0(V40,V37,42,V39)*/
V39=pile[WZ3]; 
pile[v[22]]=V39; 
(*f[40])( );     /*SLG0(V39)*/
fflush(stdout);
pile[v[22]]=441; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(441,jvj+4,jvj+5)*/
V10=P-1;
l4:if((x[jvj+5]<=0)) goto l9;
x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=140; pile[WZ1]=jvj+6; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(140,jvj+6,V12)*/
V12=pile[WZ2]; 
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(117,jvj+6,V11)*/
V11=pile[WZ2]; 
V9=V10+V11;
x[jvj+7]=incon;
V44=x[V9];
V45=V44;
V46=z[V9];
V47=V46;
if((V47<(-1))) goto l14;
if((V45<=sepcte)) goto l14;
x[jvj+9]=incon;
V50=r[V45];
if((V50>0)) goto l23;
x[jvj+9]=23 ;z[jvj+9]=23;
l13:x[jvj+7]=x[jvj+9] ;z[jvj+7]=z[jvj+9];
l14:if((V45<=0)) goto l22;
if((V45>sepcte)) goto l22;
if((V47<0)) goto l22;
V48=V45;
V60=V48;
pile[v[22]]=0; pile[WZ1]=42; 
(*f[38])( );     /*SPC0(0,42,V57)*/
V57=pile[WZ2]; 
pile[v[22]]=V57; pile[WZ1]=V12; 
(*f[37])( );     /*SRA0(V57,V12,V58)*/
V58=pile[WZ2]; 
pile[v[22]]=V58; pile[WZ1]=(-2941); 
(*f[37])( );     /*SRA0(V58,(-2941),V59)*/
V59=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V60; pile[WZ2]=V59; 
(*f[39])( );     /*SDX0(20,V60,V59,V61)*/
V61=pile[WZ3]; 
pile[v[22]]=V61; 
(*f[40])( );     /*SLG0(V61)*/
l15:fflush(stdout);
l16:if(x[jvj+7]!=incon) goto l21;
l5:x[jvj+5]=t[x[jvj+5]];
goto l4;
l1:V15=x[V14];
V17=V14+1;
Q=V15;
MN=V17;
goto l6;
l3:x[jvj+3]=t[x[jvj+3]];
goto l2;
l7:V26=x[BL];
pile[v[22]]=0; pile[WZ1]=(-1761); 
(*f[37])( );     /*SRA0(0,(-1761),V24)*/
V24=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V26; pile[WZ2]=V24; 
(*f[39])( );     /*SDX0(20,V26,V24,V25)*/
V25=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=Q; pile[WZ2]=V25; 
(*f[39])( );     /*SDX0(41,Q,V25,V27)*/
V27=pile[WZ3]; 
pile[WZ1]=P; pile[WZ2]=V27; 
(*f[39])( );     /*SDX0(41,P,V27,V29)*/
V29=pile[WZ3]; 
pile[v[22]]=V29; 
(*f[40])( );     /*SLG0(V29)*/
fflush(stdout);
l9:if((K>0)) goto l10;
V5=P-1;
v[69]=V5;
l10:if((P<=sepcte)) goto l11;
if((K<=0)) goto l11;
V23=P-1;
pile[v[22]]=K; pile[WZ1]=B; pile[WZ2]=V23; 
(*f[237])( );     /*ESSOB1(K,B,V23)*/
l11:if(x[BL]!=incon) goto l12;
v[0]=jvj; v[22]-=4; v[102]=1;return;
l8:K=N;
goto l10;
l12:v[0]=jvj; v[22]-=4; v[102]=0;return;
l18:V76=x[jvj+7];
pile[v[22]]=0; pile[WZ1]=42; 
(*f[38])( );     /*SPC0(0,42,V73)*/
V73=pile[WZ2]; 
pile[v[22]]=V73; pile[WZ1]=V12; 
(*f[37])( );     /*SRA0(V73,V12,V74)*/
V74=pile[WZ2]; 
pile[v[22]]=V74; pile[WZ1]=(-2943); 
(*f[37])( );     /*SRA0(V74,(-2943),V75)*/
V75=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V76; pile[WZ2]=V75; 
(*f[39])( );     /*SDX0(20,V76,V75,V77)*/
V77=pile[WZ3]; 
pile[v[22]]=V77; pile[WZ1]=(-2941); 
(*f[37])( );     /*SRA0(V77,(-2941),V78)*/
V78=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V45; pile[WZ2]=V78; 
(*f[39])( );     /*SDX0(41,V45,V78,V80)*/
V80=pile[WZ3]; 
pile[v[22]]=V80; 
(*f[40])( );     /*SLG0(V80)*/
l17:fflush(stdout);
goto l5;
l20:V52=x[V54];
if((V52==V45)) goto l18;
V54++;
l19:if((V54<=V53)) goto l20;
pile[v[22]]=0; pile[WZ1]=42; 
(*f[38])( );     /*SPC0(0,42,V67)*/
V67=pile[WZ2]; 
pile[v[22]]=V67; pile[WZ1]=V12; 
(*f[37])( );     /*SRA0(V67,V12,V68)*/
V68=pile[WZ2]; 
pile[v[22]]=V68; pile[WZ1]=(-2941); 
(*f[37])( );     /*SRA0(V68,(-2941),V69)*/
V69=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V45; pile[WZ2]=V69; 
(*f[39])( );     /*SDX0(41,V45,V69,V71)*/
V71=pile[WZ3]; 
pile[v[22]]=V71; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V71,58,V72)*/
V72=pile[WZ2]; 
pile[v[22]]=V72; 
(*f[40])( );     /*SLG0(V72)*/
pile[v[22]]=0; pile[WZ1]=257; pile[WZ2]=V45; pile[WZ3]=jvj+7; 
(*f[238])( );     /*SDX2(0,257,V45,jvj+7,V56)*/
V56=pile[WZ4]; 
pile[v[22]]=V56; 
(*f[40])( );     /*SLG0(V56)*/
goto l17;
l21:V53=V9-1;
V54=MN;
goto l19;
l22:if((V47>=(-1))) goto l16;
if((V45<=(-1000000))) goto l16;
pile[v[22]]=0; pile[WZ1]=42; 
(*f[38])( );     /*SPC0(0,42,V62)*/
V62=pile[WZ2]; 
pile[v[22]]=V62; pile[WZ1]=V12; 
(*f[37])( );     /*SRA0(V62,V12,V63)*/
V63=pile[WZ2]; 
pile[v[22]]=V63; pile[WZ1]=(-2941); 
(*f[37])( );     /*SRA0(V63,(-2941),V64)*/
V64=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V45; pile[WZ2]=V64; 
(*f[39])( );     /*SDX0(41,V45,V64,V66)*/
V66=pile[WZ3]; 
pile[v[22]]=V66; 
(*f[40])( );     /*SLG0(V66)*/
goto l15;
l23:x[jvj+9]=20 ;z[jvj+9]=20;
goto l13;
}
