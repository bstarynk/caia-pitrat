#include "dx.h"
void BILSOL0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int RS=0,V4=0,V7=0,RR=0,V26=0,V28=0,V19=0,V30=0,V31=0;
int M,BL;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=37;
x[jvj+1]=11072;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1268&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
M=pile[v[22]]; BL=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+13]=d[94];z[jvj+13]=0;
l6:if((x[jvj+13]>0)) goto l7;
x[jvj+22]=d[94];z[jvj+22]=0;
l12:if((x[jvj+22]>0)) goto l13;
pile[v[22]]=117; pile[WZ1]=M; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(117,M,V28)*/
V28=pile[WZ2]; 
pile[v[22]]=120; pile[WZ1]=1263; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(120,1263,jvj+28)*/
pile[v[22]]=M; pile[WZ1]=120; 
(*f[35])( );     /*CHGC1(M,120,jvj+28)*/
l18:pile[v[22]]=V28; pile[WZ1]=1266; pile[WZ2]=BL; 
(*f[235])( );     /*PLUSC2(V28,1266,BL)*/
pile[v[22]]=1263; pile[WZ1]=120; pile[WZ2]=M; 
(*f[35])( );     /*CHGC1(1263,120,M)*/
l21:x[jvj+29]=d[94];z[jvj+29]=0;
l19:if((x[jvj+29]>0)) goto l20;
l23:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l2:x[jvj+4]=s[x[jvj+33]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+33];
pile[v[22]]=158; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(158,jvj+4,jvj+5)*/
if((x[jvj+5]==134)) goto l24;
l3:x[jvj+33]=t[x[jvj+33]];
l1:if((x[jvj+33]>0)) goto l2;
pile[v[22]]=256; pile[WZ1]=jvj+2; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(256,jvj+2,jvj+9)*/
x[jvj+34]=x[jvj+8] ;z[jvj+34]=z[jvj+8];
l4:if((x[jvj+34]<=0)) goto l24;
x[jvj+10]=s[x[jvj+34]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+34];
pile[v[22]]=jvj+9; pile[WZ1]=1258; pile[WZ2]=jvj+11; 
(*f[300])( );     /*TRI10(jvj+9,1258,jvj+11)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; 
(*f[30])( );if(v[102]) goto l5;     /*EVL0(jvj+10,jvj+11,RS)*/
RS=pile[WZ2]; 
if((RS!=134)) goto l5;
pile[v[22]]=V4; pile[WZ1]=510; pile[WZ2]=jvj+31; 
(*f[46])( );     /*TRI0(V4,510,jvj+31)*/
pile[v[22]]=158; pile[WZ1]=325; pile[WZ2]=208; pile[WZ3]=jvj+10; pile[WZ4]=jvj+31; pile[WZ5]=jvj+12; 
(*f[269])( );     /*QUADRI6(158,325,208,jvj+10,jvj+31,jvj+12)*/
pile[v[22]]=jvj+2; pile[WZ1]=1051; pile[WZ2]=jvj+12; 
(*f[36])( );     /*PLUSC0(jvj+2,1051,jvj+12)*/
l5:x[jvj+34]=t[x[jvj+34]];
goto l4;
l7:x[jvj+14]=s[x[jvj+13]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+13];
pile[v[22]]=268; pile[WZ1]=jvj+14; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(268,jvj+14,jvj+6)*/
pile[v[22]]=218; pile[WZ1]=jvj+6; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(218,jvj+6,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=M; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(jvj+15,M,V4)*/
V4=pile[WZ2]; 
pile[v[22]]=jvj+14; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(jvj+14,M,jvj+16)*/
pile[v[22]]=jvj+6; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(jvj+6,M,jvj+17)*/
x[jvj+35]=x[jvj+16] ;z[jvj+35]=z[jvj+16];
l9:if((x[jvj+35]<=0)) goto l8;
x[jvj+2]=s[x[jvj+35]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+35];
pile[v[22]]=493; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(493,jvj+2,V7)*/
V7=pile[WZ2]; 
pile[v[22]]=jvj+2; pile[WZ1]=jvj+17; 
(*f[401])( );     /*SOLDANS0(jvj+2,jvj+17,RR)*/
RR=pile[WZ2]; 
if((RR>=0)) goto l10;
pile[v[22]]=242; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(242,jvj+6,jvj+7)*/
pile[v[22]]=jvj+7; pile[WZ1]=M; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(jvj+7,M,jvj+8)*/
pile[v[22]]=1051; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(1051,jvj+2,jvj+3)*/
x[jvj+33]=x[jvj+3] ;z[jvj+33]=z[jvj+3];
goto l1;
l8:x[jvj+13]=t[x[jvj+13]];
goto l6;
l13:x[jvj+23]=s[x[jvj+22]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+22];
pile[v[22]]=jvj+23; pile[WZ1]=M; pile[WZ2]=jvj+24; 
(*f[33])( );     /*FNDE0(jvj+23,M,jvj+24)*/
x[jvj+37]=x[jvj+24] ;z[jvj+37]=z[jvj+24];
l14:if((x[jvj+37]>0)) goto l15;
x[jvj+22]=t[x[jvj+22]];
goto l12;
l15:x[jvj+25]=s[x[jvj+37]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+37];
pile[v[22]]=1051; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(1051,jvj+25,jvj+26)*/
if((x[jvj+26]!=0)) goto l16;
x[jvj+37]=t[x[jvj+37]];
goto l14;
l16:pile[v[22]]=117; pile[WZ1]=M; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(117,M,V26)*/
V26=pile[WZ2]; 
pile[v[22]]=120; pile[WZ1]=1264; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(120,1264,jvj+27)*/
pile[v[22]]=M; pile[WZ1]=120; 
(*f[35])( );     /*CHGC1(M,120,jvj+27)*/
l17:pile[v[22]]=V26; pile[WZ1]=1265; pile[WZ2]=M; 
(*f[235])( );     /*PLUSC2(V26,1265,M)*/
pile[v[22]]=1264; pile[WZ1]=120; 
(*f[35])( );     /*CHGC1(1264,120,M)*/
goto l21;
l20:x[jvj+19]=s[x[jvj+29]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+29];
pile[v[22]]=218; pile[WZ1]=jvj+19; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(218,jvj+19,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=M; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(jvj+30,M,V19)*/
V19=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=944; 
(*f[42])( );     /*SRA1(135,0,944,V30)*/
V30=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V19; pile[WZ2]=V30; 
(*f[39])( );     /*SDX0(41,V19,V30,V31)*/
V31=pile[WZ3]; 
pile[v[22]]=V31; 
(*f[40])( );     /*SLG0(V31)*/
pile[v[22]]=jvj+19; pile[WZ1]=M; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(jvj+19,M,jvj+20)*/
x[jvj+36]=x[jvj+20] ;z[jvj+36]=z[jvj+20];
l11:if((x[jvj+36]<=0)) goto l22;
x[jvj+21]=s[x[jvj+36]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+36];
pile[v[22]]=jvj+21; 
(*f[1537])( );     /*SORSOL0(jvj+21)*/
x[jvj+36]=t[x[jvj+36]];
goto l11;
l22:x[jvj+29]=t[x[jvj+29]];
goto l19;
l24:pile[v[22]]=V7; pile[WZ1]=515; pile[WZ2]=jvj+32; 
(*f[46])( );     /*TRI0(V7,515,jvj+32)*/
pile[v[22]]=158; pile[WZ1]=300; pile[WZ2]=510; pile[WZ3]=V4; pile[WZ4]=jvj+32; pile[WZ5]=jvj+18; 
(*f[47])( );     /*QUADRI0(158,300,510,V4,jvj+32,jvj+18)*/
pile[v[22]]=jvj+2; pile[WZ1]=1051; pile[WZ2]=jvj+18; 
(*f[36])( );     /*PLUSC0(jvj+2,1051,jvj+18)*/
l10:x[jvj+35]=t[x[jvj+35]];
goto l9;
}
