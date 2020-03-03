#include "dx.h"
void ATOME75T5(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,V16=0,V18=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=26;
x[jvj+1]=20075;z[jvj+1]=(-100);
x[jvj+2]=5;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3395&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(111,R,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(101,jvj+11,jvj+12)*/
if((x[jvj+12]!=25)) goto l11;
pile[v[22]]=1274; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(1274,R,V4)*/
V4=pile[WZ2]; 
if((V4!=0)) goto l11;
l1:x[jvj+10]=0 ;z[jvj+10]=0;
pile[v[22]]=R; pile[WZ1]=jvj+7; 
(*f[887])( );     /*VARND0(R,jvj+7)*/
l2:if((x[jvj+7]>0)) goto l3;
x[jvj+13]=d[20];z[jvj+13]=0;
l8:if((x[jvj+13]<=0)) goto l11;
x[jvj+14]=s[x[jvj+13]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+13];
pile[v[22]]=R; pile[WZ1]=jvj+14; pile[WZ3]=jvj+15; 
(*f[45])( );if(v[102]) goto l9;     /*FNDZ0(R,jvj+14,V16,jvj+15)*/
V16=pile[WZ2]; 
pile[v[22]]=268; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(268,jvj+14,jvj+16)*/
pile[v[22]]=R; pile[WZ1]=jvj+16; pile[WZ3]=jvj+17; 
(*f[45])( );if(v[102]) goto l9;     /*FNDZ0(R,jvj+16,V18,jvj+17)*/
V18=pile[WZ2]; 
x[jvj+26]=x[jvj+10] ;z[jvj+26]=z[jvj+10];
l10:if((x[jvj+26]<=0)) goto l9;
x[jvj+24]=s[x[jvj+26]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+26];
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+22; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+22)*/
pile[WZ1]=jvj+24; pile[WZ3]=(-675); pile[WZ4]=jvj+23; 
(*f[270])( );     /*QUADRI7(101,jvj+24,110,(-675),jvj+23)*/
pile[v[22]]=605; pile[WZ1]=715; pile[WZ2]=jvj+19; 
(*f[54])( );     /*TRI1(605,715,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+20; 
(*f[189])( );     /*TRI4(jvj+19,v[13],642,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=3394; pile[WZ2]=246; pile[WZ3]=jvj+21; 
(*f[189])( );     /*TRI4(jvj+20,3394,246,jvj+21)*/
pile[v[22]]=158; pile[WZ1]=289; pile[WZ2]=218; pile[WZ3]=20075; pile[WZ4]=jvj+21; pile[WZ5]=jvj+18; 
(*f[269])( );     /*QUADRI6(158,289,218,20075,jvj+21,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=159; pile[WZ2]=jvj+22; 
(*f[36])( );     /*PLUSC0(jvj+18,159,jvj+22)*/
pile[WZ2]=jvj+23; 
(*f[36])( );     /*PLUSC0(jvj+18,159,jvj+23)*/
(*f[481])( );     /*STOCKER0(jvj+18)*/
x[jvj+26]=t[x[jvj+26]];
goto l10;
l3:x[jvj+8]=s[x[jvj+7]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+7];
pile[v[22]]=509; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[1969])( );     /*FNDEND0(509,jvj+8,jvj+9)*/
x[jvj+25]=x[jvj+9] ;z[jvj+25]=z[jvj+9];
l4:if((x[jvj+25]>0)) goto l5;
x[jvj+7]=t[x[jvj+7]];
goto l2;
l5:x[jvj+3]=s[x[jvj+25]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+25];
if((x[jvj+3]==x[R])) goto l6;
pile[v[22]]=1417; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1417,jvj+3,jvj+4)*/
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==226) goto l7;
x[jvj+5]=vo[14];z[jvj+5]=vz[14];
pile[v[22]]=1545; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(1545,jvj+5,jvj+6)*/
for(a=x[jvj+6];a>0;a=t[a]) if(s[a]==226) goto l7;
l6:x[jvj+25]=t[x[jvj+25]];
goto l4;
l7:pile[v[22]]=jvj+10; pile[WZ1]=jvj+3; 
(*f[68])( );     /*PLUE0(jvj+10,jvj+3)*/
goto l6;
l9:x[jvj+13]=t[x[jvj+13]];
goto l8;
l11:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
}
