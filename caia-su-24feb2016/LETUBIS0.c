#include "dx.h"
void LETUBIS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V20=0,V22=0,V21=0,A=0,V2=0,V23=0,V24=0,V1=0,V4=0,V28=0,V27=0,V29=0,V30=0,V7=0,V9=0,V32=0,V33=0,V34=0,V8=0,B=0,V37=0,V38=0,V39=0,V10=0,V43=0,V44=0,V42=0,V45=0,V46=0,V47=0,V48=0,V49=0,V50=0;
int R,LL;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=8;
x[jvj+1]=11355;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1315&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; LL=pile[v[22]+1]; v[22]+=2; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V22=x[R];
if((LL!=0)) goto l1;
pile[v[22]]=0; pile[WZ1]=2; 
(*f[178])( );     /*SPLO0(0,2,V20)*/
V20=pile[WZ2]; 
pile[v[22]]=V20; 
(*f[40])( );     /*SLG0(V20)*/
l1:pile[v[22]]=20; pile[WZ1]=V22; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V22,0,V21)*/
V21=pile[WZ3]; 
pile[v[22]]=V21; 
(*f[40])( );     /*SLG0(V21)*/
pile[v[22]]=1587; pile[WZ1]=R; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(1587,R,jvj+2)*/
pile[v[22]]=870; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(870,jvj+2,V4)*/
V4=pile[WZ2]; 
pile[v[22]]=868; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(868,jvj+2,jvj+3)*/
V28=x[jvj+3];
pile[v[22]]=20; pile[WZ1]=V28; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V28,0,V27)*/
V27=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V27; pile[WZ2]=870; 
(*f[42])( );     /*SRA1(135,V27,870,V29)*/
V29=pile[WZ3]; 
pile[v[22]]=V29; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V29,58,V30)*/
V30=pile[WZ2]; 
pile[v[22]]=V30; pile[WZ1]=V4; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V30,V4,41,V2)*/
V2=pile[WZ3]; 
V1=incon;
pile[v[22]]=1101; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(1101,jvj+2,A)*/
A=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V2; pile[WZ2]=1101; 
(*f[42])( );     /*SRA1(135,V2,1101,V23)*/
V23=pile[WZ3]; 
pile[v[22]]=V23; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V23,58,V24)*/
V24=pile[WZ2]; 
pile[v[22]]=V24; pile[WZ1]=A; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V24,A,41,V1)*/
V1=pile[WZ3]; 
l3:pile[v[22]]=V1; 
(*f[40])( );     /*SLG0(V1)*/
l7:pile[v[22]]=1588; pile[WZ1]=jvj+2; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1588,jvj+2,jvj+4)*/
pile[v[22]]=1300; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(1300,jvj+2,jvj+5)*/
V43=x[jvj+5];
V44=x[jvj+4];
pile[v[22]]=23; pile[WZ1]=V43; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(23,V43,0,V42)*/
V42=pile[WZ3]; 
pile[WZ1]=V44; pile[WZ2]=V42; 
(*f[39])( );     /*SDX0(23,V44,V42,V9)*/
V9=pile[WZ3]; 
V8=incon;
pile[v[22]]=1181; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(1181,jvj+2,V7)*/
V7=pile[WZ2]; 
pile[v[22]]=V9; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V9,44,V32)*/
V32=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V32; pile[WZ2]=1181; 
(*f[42])( );     /*SRA1(135,V32,1181,V33)*/
V33=pile[WZ3]; 
pile[v[22]]=V33; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V33,58,V34)*/
V34=pile[WZ2]; 
pile[v[22]]=V34; pile[WZ1]=V7; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V34,V7,41,V8)*/
V8=pile[WZ3]; 
l5:V10=incon;
pile[v[22]]=1589; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(1589,jvj+2,B)*/
B=pile[WZ2]; 
pile[v[22]]=V8; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V8,44,V37)*/
V37=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V37; pile[WZ2]=1589; 
(*f[42])( );     /*SRA1(135,V37,1589,V38)*/
V38=pile[WZ3]; 
pile[v[22]]=V38; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V38,58,V39)*/
V39=pile[WZ2]; 
pile[v[22]]=V39; pile[WZ1]=B; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V39,B,41,V10)*/
V10=pile[WZ3]; 
l8:pile[v[22]]=V10; 
(*f[40])( );     /*SLG0(V10)*/
pile[v[22]]=868; pile[WZ1]=jvj+2; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(868,jvj+2,jvj+8)*/
if(x[jvj+8]!=55&&x[jvj+8]!=48) goto l11;
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=893; 
(*f[42])( );     /*SRA1(135,0,893,V45)*/
V45=pile[WZ3]; 
pile[v[22]]=V45; pile[WZ1]=(-10831); 
(*f[37])( );     /*SRA0(V45,(-10831),V46)*/
V46=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V46; pile[WZ2]=jvj+8; 
(*f[42])( );     /*SRA1(135,V46,jvj+8,V47)*/
V47=pile[WZ3]; 
pile[v[22]]=V47; 
(*f[40])( );     /*SLG0(V47)*/
pile[v[22]]=107; pile[WZ1]=R; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(107,R,jvj+6)*/
l9:if((x[jvj+6]>0)) goto l10;
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=80; 
(*f[42])( );     /*SRA1(135,0,80,V48)*/
V48=pile[WZ3]; 
pile[v[22]]=V48; pile[WZ1]=(-10831); 
(*f[37])( );     /*SRA0(V48,(-10831),V49)*/
V49=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V49; pile[WZ2]=jvj+8; 
(*f[42])( );     /*SRA1(135,V49,jvj+8,V50)*/
V50=pile[WZ3]; 
pile[v[22]]=V50; 
(*f[40])( );     /*SLG0(V50)*/
l11:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l2:V1=V2;
goto l3;
l4:V8=V9;
goto l5;
l6:V10=V8;
goto l8;
l10:x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=jvj+7; pile[WZ1]=1; 
(*f[1315])( );     /*LETUBIS0(jvj+7,1)*/
x[jvj+6]=t[x[jvj+6]];
goto l9;
}
