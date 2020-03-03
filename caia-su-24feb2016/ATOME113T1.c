#include "dx.h"
void ATOME113T1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int DA=0,V25=0,V5=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=30;
x[jvj+1]=20113;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3724&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(111,R,jvj+14)*/
pile[v[22]]=101; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(101,jvj+14,jvj+15)*/
if((x[jvj+15]!=408)) goto l11;
pile[v[22]]=103; pile[WZ1]=R; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(103,R,jvj+16)*/
pile[v[22]]=111; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(111,jvj+16,jvj+17)*/
pile[v[22]]=101; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(101,jvj+17,jvj+18)*/
if((x[jvj+18]!=485)) goto l11;
pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(102,R,jvj+19)*/
pile[v[22]]=100; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(100,jvj+19,jvj+20)*/
if((x[jvj+20]!=484)) goto l11;
x[jvj+13]=0 ;z[jvj+13]=0;
pile[v[22]]=R; pile[WZ1]=jvj+10; 
(*f[887])( );     /*VARND0(R,jvj+10)*/
l4:if((x[jvj+10]<=0)) goto l9;
x[jvj+11]=s[x[jvj+10]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+10];
pile[v[22]]=509; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[1969])( );     /*FNDEND0(509,jvj+11,jvj+12)*/
x[jvj+30]=x[jvj+12] ;z[jvj+30]=z[jvj+12];
l5:if((x[jvj+30]>0)) goto l6;
x[jvj+10]=t[x[jvj+10]];
goto l4;
l2:DA=s[V25];
for(a=x[jvj+3];a>0;a=t[a]) if(s[a]==DA) goto l3;
l10:x[jvj+13]=t[x[jvj+13]];
l9:if((x[jvj+13]<=0)) goto l11;
x[jvj+4]=s[x[jvj+13]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+13];
pile[v[22]]=111; pile[WZ1]=jvj+4; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,jvj+4,jvj+21)*/
pile[v[22]]=101; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+21,jvj+22)*/
if((x[jvj+22]!=25)) goto l10;
pile[v[22]]=869; pile[WZ1]=jvj+4; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(869,jvj+4,jvj+23)*/
if((x[jvj+23]!=769)) goto l10;
pile[v[22]]=870; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(870,jvj+4,V5)*/
V5=pile[WZ2]; 
if((V5>3)) goto l10;
pile[v[22]]=R; pile[WZ1]=jvj+3; 
(*f[887])( );     /*VARND0(R,jvj+3)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[887])( );     /*VARND0(jvj+4,jvj+5)*/
V25=x[jvj+5];
l1:if((V25>0)) goto l2;
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+28; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+28)*/
pile[WZ1]=jvj+4; pile[WZ3]=(-631); pile[WZ4]=jvj+29; 
(*f[270])( );     /*QUADRI7(101,jvj+4,110,(-631),jvj+29)*/
pile[v[22]]=605; pile[WZ1]=715; pile[WZ2]=jvj+25; 
(*f[54])( );     /*TRI1(605,715,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+26; 
(*f[189])( );     /*TRI4(jvj+25,v[13],642,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=3723; pile[WZ2]=246; pile[WZ3]=jvj+27; 
(*f[189])( );     /*TRI4(jvj+26,3723,246,jvj+27)*/
pile[v[22]]=158; pile[WZ1]=289; pile[WZ2]=218; pile[WZ3]=20113; pile[WZ4]=jvj+27; pile[WZ5]=jvj+24; 
(*f[269])( );     /*QUADRI6(158,289,218,20113,jvj+27,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=159; pile[WZ2]=jvj+28; 
(*f[36])( );     /*PLUSC0(jvj+24,159,jvj+28)*/
pile[WZ2]=jvj+29; 
(*f[36])( );     /*PLUSC0(jvj+24,159,jvj+29)*/
(*f[481])( );     /*STOCKER0(jvj+24)*/
goto l10;
l3:V25=t[V25];
goto l1;
l6:x[jvj+6]=s[x[jvj+30]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+30];
if((x[jvj+6]==x[R])) goto l7;
pile[v[22]]=1417; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(1417,jvj+6,jvj+7)*/
for(a=x[jvj+7];a>0;a=t[a]) if(s[a]==340) goto l8;
x[jvj+8]=vo[14];z[jvj+8]=vz[14];
pile[v[22]]=1545; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(1545,jvj+8,jvj+9)*/
for(a=x[jvj+9];a>0;a=t[a]) if(s[a]==340) goto l8;
l7:x[jvj+30]=t[x[jvj+30]];
goto l5;
l8:pile[v[22]]=jvj+13; pile[WZ1]=jvj+6; 
(*f[68])( );     /*PLUE0(jvj+13,jvj+6)*/
goto l7;
l11:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
}
