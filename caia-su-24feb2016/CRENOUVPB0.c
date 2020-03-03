#include "dx.h"
void CRENOUVPB0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V25=0,V28=0,RES=0,V24=0,V26=0,V27=0,V29=0,V30=0,V31=0,V9=0,D=0,V15=0,V12=0,V23=0,V14=0,RR=0;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=30;
x[jvj+1]=10835;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1531&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}

WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=250; pile[WZ1]=158; pile[WZ2]=jvj+8; 
(*f[54])( );     /*TRI1(250,158,jvj+8)*/
pile[v[22]]=jvj+2; 
(*f[1723])( );     /*ETATCREE1(jvj+2)*/
pile[v[22]]=159; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(159,jvj+2,jvj+3)*/
l1:if((x[jvj+3]>0)) goto l2;
pile[v[22]]=120; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(120,jvj+8,jvj+9)*/
pile[v[22]]=jvj+9; 
(*f[1523])( );     /*NUMEROTE0(jvj+9)*/
l4:pile[v[22]]=1092; pile[WZ1]=1099; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(1092,1099,jvj+10)*/
pile[v[22]]=645; pile[WZ1]=597; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(645,597,jvj+11)*/
l5:if((x[jvj+11]<=0)) goto l12;
x[jvj+12]=s[x[jvj+11]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+11];
pile[v[22]]=1092; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(1092,jvj+12,jvj+13)*/
if((x[jvj+13]!=x[jvj+10])) goto l6;
pile[v[22]]=683; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(683,jvj+12,V9)*/
V9=pile[WZ2]; 
D=V9;
pile[v[22]]=1167; pile[WZ1]=1097; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(1167,1097,V15)*/
V15=pile[WZ2]; 
l9:pile[v[22]]=120; pile[WZ1]=jvj+8; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(120,jvj+8,jvj+18)*/
pile[v[22]]=1110; pile[WZ1]=jvj+18; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(1110,jvj+18,V12)*/
V12=pile[WZ2]; 
if((V12>=10)) goto l10;
pile[v[22]]=698; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(698,jvj+18,jvj+19)*/
pile[v[22]]=204; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(204,jvj+18,V23)*/
V23=pile[WZ2]; 
x[jvj+14]=x[jvj+19] ;z[jvj+14]=z[jvj+19];
pile[v[22]]=109; pile[WZ1]=jvj+14; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(109,jvj+14,jvj+16)*/
pile[v[22]]=163; 
(*f[44])( );if(v[102]) goto l10;     /*FNDC1(163,jvj+14,V14)*/
V14=pile[WZ2]; 
x[jvj+27]=incon;
pile[v[22]]=449; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(449,jvj+14,jvj+15)*/
pile[v[22]]=896; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(896,jvj+16,jvj+17)*/
for(a=x[jvj+17];a>0;a=t[a]) if(s[a]==x[jvj+15]) goto l7;
x[jvj+30]=x[jvj+17] ;z[jvj+30]=z[jvj+17];
if((x[jvj+30]<=0)) goto l7;
x[jvj+29]=s[x[jvj+30]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+30];
x[jvj+27]=x[jvj+29] ;z[jvj+27]=z[jvj+29];
l7:if(x[jvj+27]==incon) goto l8;
l11:if(x[jvj+27]!=incon) goto l13;
l10:x[jvj+8]=x[jvj+18] ;z[jvj+8]=z[jvj+18];
goto l9;
l2:x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=163; pile[WZ1]=jvj+4; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(163,jvj+4,V3)*/
V3=pile[WZ2]; 
pile[v[22]]=449; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(449,jvj+4,jvj+5)*/
pile[v[22]]=109; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(109,jvj+4,jvj+6)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+2; pile[WZ2]=jvj+7; 
(*f[1724])( );     /*VALCREPB0(jvj+4,jvj+2,jvj+7)*/
V25=x[jvj+6];
V28=x[jvj+5];
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[1305])( );if(v[102]) goto l3;     /*VALGLO2(jvj+7,jvj+8,RES)*/
RES=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V25; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V25,0,V24)*/
V24=pile[WZ3]; 
pile[v[22]]=V24; pile[WZ1]=V3; 
(*f[37])( );     /*SRA0(V24,V3,V26)*/
V26=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V28; pile[WZ2]=V26; 
(*f[39])( );     /*SDX0(20,V28,V26,V27)*/
V27=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V27; pile[WZ2]=204; 
(*f[42])( );     /*SRA1(135,V27,204,V29)*/
V29=pile[WZ3]; 
pile[v[22]]=V29; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V29,58,V30)*/
V30=pile[WZ2]; 
pile[v[22]]=V30; pile[WZ1]=RES; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V30,RES,41,V31)*/
V31=pile[WZ3]; 
pile[v[22]]=V31; 
(*f[40])( );     /*SLG0(V31)*/
l3:x[jvj+3]=t[x[jvj+3]];
goto l1;
l6:x[jvj+11]=t[x[jvj+11]];
goto l5;
l8:x[jvj+27]=x[jvj+15] ;z[jvj+27]=z[jvj+15];
goto l11;
l12:x[jvj+1]=incon; v[0]=jvj; return;
l13:pile[v[22]]=V15; pile[WZ1]=1167; pile[WZ2]=jvj+21; 
(*f[46])( );     /*TRI0(V15,1167,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=1097; pile[WZ2]=1161; pile[WZ3]=jvj+22; 
(*f[58])( );     /*TRI3(jvj+21,1097,1161,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=V12; pile[WZ2]=1110; pile[WZ3]=jvj+23; 
(*f[189])( );     /*TRI4(jvj+22,V12,1110,jvj+23)*/
pile[v[22]]=1060; pile[WZ1]=(-20); pile[WZ2]=jvj+23; pile[WZ3]=1056; pile[WZ4]=jvj+24; 
(*f[298])( );     /*TRIENS1(1060,(-20),jvj+23,1056,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=228; pile[WZ2]=860; pile[WZ3]=jvj+25; 
(*f[58])( );     /*TRI3(jvj+24,228,860,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=D; pile[WZ2]=683; pile[WZ3]=jvj+26; 
(*f[189])( );     /*TRI4(jvj+25,D,683,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=jvj+27; pile[WZ2]=247; pile[WZ3]=jvj+28; 
(*f[58])( );     /*TRI3(jvj+26,jvj+27,247,jvj+28)*/
pile[v[22]]=109; pile[WZ1]=jvj+16; pile[WZ2]=163; pile[WZ3]=V14; pile[WZ4]=jvj+28; pile[WZ5]=jvj+20; 
(*f[599])( );     /*QUADRI12(109,jvj+16,163,V14,jvj+28,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=1230; 
(*f[1261])( );     /*NOUVSAUVE1(jvj+20,1230)*/
pile[WZ1]=1097; pile[WZ2]=V23; 
(*f[1725])( );if(v[102]) goto l10;     /*AJLONG0(jvj+20,1097,V23,RR)*/
RR=pile[WZ3]; 
goto l10;
}
