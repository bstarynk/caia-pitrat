#include "dx.h"
void ATOME75T2(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,V13=0,V14=0,V16=0;
int RX;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=22;
x[jvj+1]=20075;z[jvj+1]=(-100);
x[jvj+2]=2;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3221&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
RX=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+8]=0 ;z[jvj+8]=0;
pile[v[22]]=RX; pile[WZ1]=jvj+4; 
(*f[887])( );     /*VARND0(RX,jvj+4)*/
l1:if((x[jvj+4]<=0)) goto l5;
x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=509; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[1969])( );     /*FNDEND0(509,jvj+5,jvj+6)*/
x[jvj+22]=x[jvj+6] ;z[jvj+22]=z[jvj+6];
l2:if((x[jvj+22]>0)) goto l3;
x[jvj+4]=t[x[jvj+4]];
goto l1;
l3:x[jvj+7]=s[x[jvj+22]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+22];
if((x[jvj+7]==x[RX])) goto l4;
pile[v[22]]=870; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(870,jvj+7,V13)*/
V13=pile[WZ2]; 
if((V13!=1)) goto l4;
pile[v[22]]=jvj+8; 
(*f[68])( );     /*PLUE0(jvj+8,jvj+7)*/
l4:x[jvj+22]=t[x[jvj+22]];
goto l2;
l6:x[jvj+3]=s[x[jvj+8]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+8];
pile[v[22]]=111; pile[WZ1]=jvj+3; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,jvj+3,jvj+9)*/
pile[v[22]]=101; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+9,jvj+10)*/
if((x[jvj+10]!=25)) goto l7;
pile[v[22]]=1274; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(1274,jvj+3,V4)*/
V4=pile[WZ2]; 
if((V4!=0)) goto l7;
l9:x[jvj+11]=d[20];z[jvj+11]=0;
l8:if((x[jvj+11]<=0)) goto l7;
x[jvj+12]=s[x[jvj+11]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+11];
pile[v[22]]=jvj+3; pile[WZ1]=jvj+12; pile[WZ3]=jvj+13; 
(*f[45])( );if(v[102]) goto l10;     /*FNDZ0(jvj+3,jvj+12,V14,jvj+13)*/
V14=pile[WZ2]; 
pile[v[22]]=268; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(268,jvj+12,jvj+14)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+14; pile[WZ3]=jvj+15; 
(*f[45])( );if(v[102]) goto l10;     /*FNDZ0(jvj+3,jvj+14,V16,jvj+15)*/
V16=pile[WZ2]; 
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+20; 
(*f[270])( );     /*QUADRI7(101,jvj+3,110,(-601),jvj+20)*/
pile[WZ1]=RX; pile[WZ3]=(-675); pile[WZ4]=jvj+21; 
(*f[270])( );     /*QUADRI7(101,RX,110,(-675),jvj+21)*/
pile[v[22]]=206; pile[WZ1]=715; pile[WZ2]=jvj+17; 
(*f[54])( );     /*TRI1(206,715,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+18; 
(*f[189])( );     /*TRI4(jvj+17,v[13],642,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=3129; pile[WZ2]=246; pile[WZ3]=jvj+19; 
(*f[189])( );     /*TRI4(jvj+18,3129,246,jvj+19)*/
pile[v[22]]=158; pile[WZ1]=289; pile[WZ2]=218; pile[WZ3]=20075; pile[WZ4]=jvj+19; pile[WZ5]=jvj+16; 
(*f[269])( );     /*QUADRI6(158,289,218,20075,jvj+19,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=159; pile[WZ2]=jvj+20; 
(*f[36])( );     /*PLUSC0(jvj+16,159,jvj+20)*/
pile[WZ2]=jvj+21; 
(*f[36])( );     /*PLUSC0(jvj+16,159,jvj+21)*/
(*f[481])( );     /*STOCKER0(jvj+16)*/
l10:x[jvj+11]=t[x[jvj+11]];
goto l8;
l7:x[jvj+8]=t[x[jvj+8]];
l5:if((x[jvj+8]>0)) goto l6;
l11:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
}
