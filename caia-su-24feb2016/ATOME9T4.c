#include "dx.h"
void ATOME9T4(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V13=0,V12=0;
int RR;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=34;
x[jvj+1]=20009;z[jvj+1]=(-100);
x[jvj+2]=4;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3352&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
RR=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=RR; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(111,RR,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(101,jvj+11,jvj+12)*/
if((x[jvj+12]!=55)) goto l13;
pile[v[22]]=107; pile[WZ1]=RR; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(107,RR,jvj+13)*/
pile[v[22]]=870; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(870,RR,V13)*/
V13=pile[WZ2]; 
x[jvj+14]=vo[16];z[jvj+14]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[1948])( );if(v[102]) goto l13;     /*FNDOND0(498,jvj+14,jvj+15)*/
x[jvj+10]=0 ;z[jvj+10]=0;
pile[v[22]]=RR; pile[WZ1]=jvj+7; 
(*f[887])( );     /*VARND0(RR,jvj+7)*/
l1:if((x[jvj+7]>0)) goto l2;
pile[v[22]]=1216; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(1216,jvj+15,jvj+16)*/
for(a=x[jvj+16];a>0;a=t[a]) if(s[a]==1291) goto l7;
l13:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l2:x[jvj+8]=s[x[jvj+7]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+7];
pile[v[22]]=509; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[1969])( );     /*FNDEND0(509,jvj+8,jvj+9)*/
x[jvj+33]=x[jvj+9] ;z[jvj+33]=z[jvj+9];
l3:if((x[jvj+33]>0)) goto l4;
x[jvj+7]=t[x[jvj+7]];
goto l1;
l4:x[jvj+3]=s[x[jvj+33]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+33];
if((x[jvj+3]==x[RR])) goto l5;
pile[v[22]]=1417; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1417,jvj+3,jvj+4)*/
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==27) goto l6;
x[jvj+5]=vo[14];z[jvj+5]=vz[14];
pile[v[22]]=1545; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(1545,jvj+5,jvj+6)*/
for(a=x[jvj+6];a>0;a=t[a]) if(s[a]==27) goto l6;
l5:x[jvj+33]=t[x[jvj+33]];
goto l3;
l6:pile[v[22]]=jvj+10; pile[WZ1]=jvj+3; 
(*f[68])( );     /*PLUE0(jvj+10,jvj+3)*/
goto l5;
l7:for(a=x[jvj+16];a>0;a=t[a]) if(s[a]==1301) goto l8;
goto l13;
l8:pile[v[22]]=1294; pile[WZ1]=RR; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(1294,RR,jvj+17)*/
for(a=x[jvj+17];a>0;a=t[a]) if(s[a]==1291) goto l9;
goto l13;
l10:x[jvj+13]=t[x[jvj+13]];
l9:if((x[jvj+13]<=0)) goto l13;
x[jvj+18]=s[x[jvj+13]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+13];
pile[v[22]]=111; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,jvj+18,jvj+19)*/
pile[v[22]]=101; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+19,jvj+20)*/
if((x[jvj+20]!=48)) goto l10;
pile[v[22]]=107; pile[WZ1]=jvj+18; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(107,jvj+18,jvj+21)*/
x[jvj+34]=x[jvj+10] ;z[jvj+34]=z[jvj+10];
l11:if((x[jvj+34]<=0)) goto l10;
x[jvj+22]=s[x[jvj+34]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+34];
pile[v[22]]=111; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,jvj+22,jvj+23)*/
pile[v[22]]=101; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+23,jvj+24)*/
if((x[jvj+24]!=55)) goto l12;
pile[v[22]]=870; pile[WZ1]=jvj+22; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(870,jvj+22,V12)*/
V12=pile[WZ2]; 
if((V12>V13)) goto l12;
pile[v[22]]=107; pile[WZ2]=jvj+25; 
(*f[33])( );     /*FNDE0(107,jvj+22,jvj+25)*/
pile[v[22]]=1294; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(1294,jvj+22,jvj+26)*/
for(a=x[jvj+26];a>0;a=t[a]) if(s[a]==1301) goto l14;
l12:x[jvj+34]=t[x[jvj+34]];
goto l11;
l14:pile[v[22]]=101; pile[WZ1]=jvj+22; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+31; 
(*f[270])( );     /*QUADRI7(101,jvj+22,110,(-601),jvj+31)*/
pile[WZ1]=RR; pile[WZ3]=(-631); pile[WZ4]=jvj+32; 
(*f[270])( );     /*QUADRI7(101,RR,110,(-631),jvj+32)*/
pile[v[22]]=206; pile[WZ1]=715; pile[WZ2]=jvj+28; 
(*f[54])( );     /*TRI1(206,715,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+29; 
(*f[189])( );     /*TRI4(jvj+28,v[13],642,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=3350; pile[WZ2]=246; pile[WZ3]=jvj+30; 
(*f[189])( );     /*TRI4(jvj+29,3350,246,jvj+30)*/
pile[v[22]]=158; pile[WZ1]=289; pile[WZ2]=218; pile[WZ3]=20009; pile[WZ4]=jvj+30; pile[WZ5]=jvj+27; 
(*f[269])( );     /*QUADRI6(158,289,218,20009,jvj+30,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=159; pile[WZ2]=jvj+31; 
(*f[36])( );     /*PLUSC0(jvj+27,159,jvj+31)*/
pile[WZ2]=jvj+32; 
(*f[36])( );     /*PLUSC0(jvj+27,159,jvj+32)*/
(*f[481])( );     /*STOCKER0(jvj+27)*/
goto l12;
}
