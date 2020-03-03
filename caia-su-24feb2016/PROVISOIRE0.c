#include "dx.h"
void PROVISOIRE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V7=0,V8=0,V24=0,V2=0,V1=0,V9=0,V10=0,V26=0,V4=0,V3=0,V11=0,V12=0,V28=0,V6=0,V5=0,V13=0,V15=0,V14=0,V16=0,V17=0,V18=0,V20=0,V19=0,V22=0,V21=0,V34=0,V39=0,V59=0,V29=0,V30=0,V31=0,V32=0,V33=0,V35=0,V36=0,V37=0,V38=0,V40=0,V41=0,V42=0,V43=0,V45=0,V46=0,V47=0,V48=0,V50=0,V51=0,V52=0,V53=0,V55=0,V56=0,V57=0,V58=0,V60=0,V61=0,V62=0,V63=0,V64=0,V65=0,V66=0,V67=0,V68=0,V69=0;
int NR;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=1;
x[jvj+1]=11158;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==161&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NR=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V13=cta5[NR];
V15=cta1[NR];
V14=V15;
V16=cts[NR];
V17=ctn[NR];
V18=ctm[NR];
V20=ctp[NR];
V19=V20;
V22=ctt[NR];
V21=V22;
V34=V21;
V39=V19;
V59=V14;
pile[v[22]]=20; pile[WZ1]=11158; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,11158,0,V29)*/
V29=pile[WZ3]; 
pile[v[22]]=V29; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V29,44,V30)*/
V30=pile[WZ2]; 
pile[v[22]]=V30; pile[WZ1]=(-8174); 
(*f[37])( );     /*SRA0(V30,(-8174),V31)*/
V31=pile[WZ2]; 
pile[v[22]]=V31; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V31,58,V32)*/
V32=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V34; pile[WZ2]=V32; 
(*f[39])( );     /*SDX0(20,V34,V32,V33)*/
V33=pile[WZ3]; 
pile[v[22]]=V33; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V33,44,V35)*/
V35=pile[WZ2]; 
pile[v[22]]=V35; pile[WZ1]=(-8175); 
(*f[37])( );     /*SRA0(V35,(-8175),V36)*/
V36=pile[WZ2]; 
pile[v[22]]=V36; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V36,58,V37)*/
V37=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V39; pile[WZ2]=V37; 
(*f[39])( );     /*SDX0(20,V39,V37,V38)*/
V38=pile[WZ3]; 
pile[v[22]]=V38; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V38,44,V40)*/
V40=pile[WZ2]; 
pile[v[22]]=V40; pile[WZ1]=(-8176); 
(*f[37])( );     /*SRA0(V40,(-8176),V41)*/
V41=pile[WZ2]; 
pile[v[22]]=V41; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V41,58,V42)*/
V42=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V18; pile[WZ2]=V42; 
(*f[39])( );     /*SDX0(41,V18,V42,V43)*/
V43=pile[WZ3]; 
pile[v[22]]=V43; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V43,44,V45)*/
V45=pile[WZ2]; 
pile[v[22]]=V45; pile[WZ1]=(-8177); 
(*f[37])( );     /*SRA0(V45,(-8177),V46)*/
V46=pile[WZ2]; 
pile[v[22]]=V46; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V46,58,V47)*/
V47=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V17; pile[WZ2]=V47; 
(*f[39])( );     /*SDX0(41,V17,V47,V48)*/
V48=pile[WZ3]; 
pile[v[22]]=V48; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V48,44,V50)*/
V50=pile[WZ2]; 
pile[v[22]]=V50; pile[WZ1]=(-8187); 
(*f[37])( );     /*SRA0(V50,(-8187),V51)*/
V51=pile[WZ2]; 
pile[v[22]]=V51; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V51,58,V52)*/
V52=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V16; pile[WZ2]=V52; 
(*f[39])( );     /*SDX0(41,V16,V52,V53)*/
V53=pile[WZ3]; 
pile[v[22]]=V53; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V53,44,V55)*/
V55=pile[WZ2]; 
pile[v[22]]=V55; pile[WZ1]=(-8178); 
(*f[37])( );     /*SRA0(V55,(-8178),V56)*/
V56=pile[WZ2]; 
pile[v[22]]=V56; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V56,58,V57)*/
V57=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V59; pile[WZ2]=V57; 
(*f[39])( );     /*SDX0(20,V59,V57,V58)*/
V58=pile[WZ3]; 
pile[v[22]]=V58; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V58,44,V60)*/
V60=pile[WZ2]; 
pile[v[22]]=V60; pile[WZ1]=(-8179); 
(*f[37])( );     /*SRA0(V60,(-8179),V61)*/
V61=pile[WZ2]; 
pile[v[22]]=V61; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V61,58,V2)*/
V2=pile[WZ2]; 
V1=incon;
V7=cta2[NR];
if((V7>sepcte)) goto l1;
V1=V2;
l4:pile[v[22]]=V1; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V1,44,V62)*/
V62=pile[WZ2]; 
pile[v[22]]=V62; pile[WZ1]=(-8180); 
(*f[37])( );     /*SRA0(V62,(-8180),V63)*/
V63=pile[WZ2]; 
pile[v[22]]=V63; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V63,58,V4)*/
V4=pile[WZ2]; 
V3=incon;
V9=cta3[NR];
if((V9>sepcte)) goto l2;
V3=V4;
l5:pile[v[22]]=V3; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V3,44,V64)*/
V64=pile[WZ2]; 
pile[v[22]]=V64; pile[WZ1]=(-8181); 
(*f[37])( );     /*SRA0(V64,(-8181),V65)*/
V65=pile[WZ2]; 
pile[v[22]]=V65; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V65,58,V6)*/
V6=pile[WZ2]; 
V5=incon;
V11=cta4[NR];
if((V11>sepcte)) goto l3;
V5=V6;
l6:pile[v[22]]=V5; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V5,44,V66)*/
V66=pile[WZ2]; 
pile[v[22]]=V66; pile[WZ1]=(-8182); 
(*f[37])( );     /*SRA0(V66,(-8182),V67)*/
V67=pile[WZ2]; 
pile[v[22]]=V67; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V67,58,V68)*/
V68=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V13; pile[WZ2]=V68; 
(*f[39])( );     /*SDX0(41,V13,V68,V69)*/
V69=pile[WZ3]; 
pile[v[22]]=V69; 
(*f[40])( );     /*SLG0(V69)*/
l7:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l1:V8=V7;
V24=V8;
pile[v[22]]=20; pile[WZ1]=V24; pile[WZ2]=V2; 
(*f[39])( );     /*SDX0(20,V24,V2,V1)*/
V1=pile[WZ3]; 
goto l4;
l2:V10=V9;
V26=V10;
pile[v[22]]=20; pile[WZ1]=V26; pile[WZ2]=V4; 
(*f[39])( );     /*SDX0(20,V26,V4,V3)*/
V3=pile[WZ3]; 
goto l5;
l3:V12=V11;
V28=V12;
pile[v[22]]=20; pile[WZ1]=V28; pile[WZ2]=V6; 
(*f[39])( );     /*SDX0(20,V28,V6,V5)*/
V5=pile[WZ3]; 
goto l6;
}
