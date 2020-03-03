#include "dx.h"
void ATOME66T2(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V6=0,V40=0,K=0,V46=0,V17=0,V23=0,V5=0;
int RR;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=38;
x[jvj+1]=20066;z[jvj+1]=(-100);
x[jvj+2]=2;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3181&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
RR=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=RR; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,RR,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+8,jvj+9)*/
if((x[jvj+9]!=25)) goto l12;
pile[v[22]]=870; pile[WZ1]=RR; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(870,RR,V6)*/
V6=pile[WZ2]; 
x[jvj+6]=0 ;z[jvj+6]=0;
pile[v[22]]=RR; pile[WZ1]=jvj+3; 
(*f[887])( );     /*VARND0(RR,jvj+3)*/
l1:if((x[jvj+3]>0)) goto l2;
x[jvj+10]=d[20];z[jvj+10]=0;
l6:if((x[jvj+10]<=0)) goto l12;
x[jvj+11]=s[x[jvj+10]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+10];
pile[v[22]]=268; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(268,jvj+11,jvj+12)*/
x[jvj+13]=d[20];z[jvj+13]=0;
l8:if((x[jvj+13]<=0)) goto l7;
x[jvj+14]=s[x[jvj+13]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+13];
pile[v[22]]=jvj+14; pile[WZ1]=RR; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(jvj+14,RR,jvj+15)*/
pile[v[22]]=111; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,jvj+15,jvj+16)*/
pile[v[22]]=101; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+16,jvj+17)*/
if((x[jvj+17]!=1273)) goto l9;
pile[v[22]]=102; pile[WZ1]=jvj+15; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(102,jvj+15,jvj+18)*/
pile[v[22]]=130; pile[WZ1]=jvj+18; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(130,jvj+18,V40)*/
V40=pile[WZ2]; 
pile[v[22]]=268; pile[WZ1]=jvj+14; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(268,jvj+14,jvj+19)*/
K=V40;
pile[v[22]]=jvj+19; pile[WZ1]=RR; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(jvj+19,RR,jvj+20)*/
pile[v[22]]=130; pile[WZ1]=jvj+20; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(130,jvj+20,V46)*/
V46=pile[WZ2]; 
pile[v[22]]=107; pile[WZ1]=jvj+15; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(107,jvj+15,jvj+21)*/
x[jvj+38]=x[jvj+6] ;z[jvj+38]=z[jvj+6];
l10:if((x[jvj+38]<=0)) goto l9;
x[jvj+22]=s[x[jvj+38]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+38];
if((x[jvj+22]==x[RR])) goto l11;
pile[v[22]]=111; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(111,jvj+22,jvj+23)*/
pile[v[22]]=101; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(101,jvj+23,jvj+24)*/
if((x[jvj+24]!=25)) goto l11;
pile[v[22]]=jvj+11; pile[WZ1]=jvj+22; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(jvj+11,jvj+22,jvj+25)*/
pile[v[22]]=111; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(111,jvj+25,jvj+26)*/
pile[v[22]]=101; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(101,jvj+26,jvj+27)*/
if((x[jvj+27]!=1273)) goto l11;
pile[v[22]]=102; pile[WZ1]=jvj+25; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(102,jvj+25,jvj+28)*/
pile[v[22]]=130; pile[WZ1]=jvj+28; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(130,jvj+28,V17)*/
V17=pile[WZ2]; 
if((K!=V17)) goto l11;
pile[v[22]]=jvj+12; pile[WZ1]=jvj+22; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(jvj+12,jvj+22,jvj+29)*/
pile[v[22]]=130; pile[WZ1]=jvj+29; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(130,jvj+29,V23)*/
V23=pile[WZ2]; 
pile[v[22]]=870; pile[WZ1]=jvj+22; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(870,jvj+22,V5)*/
V5=pile[WZ2]; 
if((V5>=V6)) goto l11;
pile[v[22]]=107; pile[WZ1]=jvj+25; pile[WZ2]=jvj+30; 
(*f[33])( );     /*FNDE0(107,jvj+25,jvj+30)*/
pile[v[22]]=101; pile[WZ1]=jvj+22; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+35; 
(*f[270])( );     /*QUADRI7(101,jvj+22,110,(-601),jvj+35)*/
pile[WZ1]=RR; pile[WZ3]=(-631); pile[WZ4]=jvj+36; 
(*f[270])( );     /*QUADRI7(101,RR,110,(-631),jvj+36)*/
pile[v[22]]=604; pile[WZ1]=715; pile[WZ2]=jvj+32; 
(*f[54])( );     /*TRI1(604,715,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+33; 
(*f[189])( );     /*TRI4(jvj+32,v[13],642,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=3178; pile[WZ2]=246; pile[WZ3]=jvj+34; 
(*f[189])( );     /*TRI4(jvj+33,3178,246,jvj+34)*/
pile[v[22]]=158; pile[WZ1]=289; pile[WZ2]=218; pile[WZ3]=20066; pile[WZ4]=jvj+34; pile[WZ5]=jvj+31; 
(*f[269])( );     /*QUADRI6(158,289,218,20066,jvj+34,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=159; pile[WZ2]=jvj+35; 
(*f[36])( );     /*PLUSC0(jvj+31,159,jvj+35)*/
pile[WZ2]=jvj+36; 
(*f[36])( );     /*PLUSC0(jvj+31,159,jvj+36)*/
(*f[481])( );     /*STOCKER0(jvj+31)*/
l11:x[jvj+38]=t[x[jvj+38]];
goto l10;
l2:x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=509; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[1969])( );     /*FNDEND0(509,jvj+4,jvj+5)*/
x[jvj+37]=x[jvj+5] ;z[jvj+37]=z[jvj+5];
l3:if((x[jvj+37]>0)) goto l4;
x[jvj+3]=t[x[jvj+3]];
goto l1;
l4:x[jvj+7]=s[x[jvj+37]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+37];
if((x[jvj+7]==x[RR])) goto l5;
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; 
(*f[68])( );     /*PLUE0(jvj+6,jvj+7)*/
l5:x[jvj+37]=t[x[jvj+37]];
goto l3;
l7:x[jvj+10]=t[x[jvj+10]];
goto l6;
l9:x[jvj+13]=t[x[jvj+13]];
goto l8;
l12:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
}
