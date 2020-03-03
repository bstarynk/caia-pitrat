#include "dx.h"
void ATOME75T1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,V13=0,V15=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=23;
x[jvj+1]=20075;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3131&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,R,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+8,jvj+9)*/
if((x[jvj+9]!=25)) goto l10;
pile[v[22]]=1274; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(1274,R,V4)*/
V4=pile[WZ2]; 
if((V4!=0)) goto l10;
l1:x[jvj+6]=0 ;z[jvj+6]=0;
pile[v[22]]=R; pile[WZ1]=jvj+3; 
(*f[887])( );     /*VARND0(R,jvj+3)*/
l2:if((x[jvj+3]>0)) goto l3;
x[jvj+10]=d[20];z[jvj+10]=0;
l7:if((x[jvj+10]<=0)) goto l10;
x[jvj+11]=s[x[jvj+10]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+10];
pile[v[22]]=R; pile[WZ1]=jvj+11; pile[WZ3]=jvj+12; 
(*f[45])( );if(v[102]) goto l8;     /*FNDZ0(R,jvj+11,V13,jvj+12)*/
V13=pile[WZ2]; 
pile[v[22]]=268; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(268,jvj+11,jvj+13)*/
pile[v[22]]=R; pile[WZ1]=jvj+13; pile[WZ3]=jvj+14; 
(*f[45])( );if(v[102]) goto l8;     /*FNDZ0(R,jvj+13,V15,jvj+14)*/
V15=pile[WZ2]; 
x[jvj+23]=x[jvj+6] ;z[jvj+23]=z[jvj+6];
l9:if((x[jvj+23]<=0)) goto l8;
x[jvj+21]=s[x[jvj+23]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+23];
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+19; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+19)*/
pile[WZ1]=jvj+21; pile[WZ3]=(-675); pile[WZ4]=jvj+20; 
(*f[270])( );     /*QUADRI7(101,jvj+21,110,(-675),jvj+20)*/
pile[v[22]]=607; pile[WZ1]=715; pile[WZ2]=jvj+16; 
(*f[54])( );     /*TRI1(607,715,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+17; 
(*f[189])( );     /*TRI4(jvj+16,v[13],642,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=3129; pile[WZ2]=246; pile[WZ3]=jvj+18; 
(*f[189])( );     /*TRI4(jvj+17,3129,246,jvj+18)*/
pile[v[22]]=158; pile[WZ1]=289; pile[WZ2]=218; pile[WZ3]=20075; pile[WZ4]=jvj+18; pile[WZ5]=jvj+15; 
(*f[269])( );     /*QUADRI6(158,289,218,20075,jvj+18,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=159; pile[WZ2]=jvj+19; 
(*f[36])( );     /*PLUSC0(jvj+15,159,jvj+19)*/
pile[WZ2]=jvj+20; 
(*f[36])( );     /*PLUSC0(jvj+15,159,jvj+20)*/
(*f[481])( );     /*STOCKER0(jvj+15)*/
x[jvj+23]=t[x[jvj+23]];
goto l9;
l3:x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=509; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[1969])( );     /*FNDEND0(509,jvj+4,jvj+5)*/
x[jvj+22]=x[jvj+5] ;z[jvj+22]=z[jvj+5];
l4:if((x[jvj+22]>0)) goto l5;
x[jvj+3]=t[x[jvj+3]];
goto l2;
l5:x[jvj+7]=s[x[jvj+22]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+22];
if((x[jvj+7]==x[R])) goto l6;
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; 
(*f[68])( );     /*PLUE0(jvj+6,jvj+7)*/
l6:x[jvj+22]=t[x[jvj+22]];
goto l4;
l8:x[jvj+10]=t[x[jvj+10]];
goto l7;
l10:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
}
