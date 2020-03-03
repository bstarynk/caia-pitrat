#include "dx.h"
void SIMPCT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int F=0,SA=0,SB=0,V8=0,V9=0,V10=0,V11=0;
int R;
int RES;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=15;
x[jvj+1]=11395;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1159&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; RES=pile[v[22]+1]; v[22]+=2; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
SA=SB=x[jvj+8]=x[jvj+9]=incon;
pile[v[22]]=100; pile[WZ1]=R; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(100,R,jvj+2)*/
if((x[jvj+2]!=22)) goto l17;
pile[v[22]]=111; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(111,R,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(101,jvj+3,jvj+4)*/
pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(102,R,jvj+5)*/
pile[v[22]]=103; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(103,R,jvj+6)*/
x[jvj+7]=x[jvj+5] ;z[jvj+7]=z[jvj+5];
F=x[jvj+4];
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[1464])( );if(v[102]) goto l1;     /*SIMPCTA0(jvj+7,jvj+8,SA)*/
SA=pile[WZ2]; 
l1:pile[v[22]]=jvj+6; pile[WZ1]=jvj+9; 
(*f[1464])( );if(v[102]) goto l4;     /*SIMPCTA0(jvj+6,jvj+9,SB)*/
SB=pile[WZ2]; 
l4:if(SA!=incon) goto l5;
l8:if(x[jvj+8]!=incon) goto l9;
l12:if(SA!=incon) goto l13;
l17:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; v[102]=1;return;
l3:x[jvj+14]=t[x[jvj+14]];
l2:if((x[jvj+14]<=0)) goto l7;
x[jvj+11]=s[x[jvj+14]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+14];
pile[v[22]]=515; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(515,jvj+11,V9)*/
V9=pile[WZ2]; 
if((V8!=V9)) goto l3;
x[jvj+15]=t[x[jvj+15]];
l11:if((x[jvj+15]<=0)) goto l12;
x[jvj+10]=s[x[jvj+15]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+15];
pile[v[22]]=515; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(515,jvj+10,V8)*/
V8=pile[WZ2]; 
x[jvj+14]=x[jvj+9] ;z[jvj+14]=z[jvj+9];
goto l2;
l5:if(SB!=incon) goto l6;
goto l8;
l6:if((SA!=SB)) goto l7;
goto l8;
l7:x[jvj+12]=134 ;z[jvj+12]=134;
l15:x[jvj+13]=incon;
if((F==25)) goto l16;
pile[v[22]]=201; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(201,jvj+12,jvj+13)*/
l19:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+13; pile[WZ4]=RES; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+13,RES)*/
l18:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; v[102]=0;return;
l9:if(x[jvj+9]!=incon) goto l10;
goto l12;
l10:for(i=x[jvj+8],V10=0;i>0;i=t[i],V10++)  ;
for(i=x[jvj+9],V11=0;i>0;i=t[i],V11++)  ;
if((V10!=V11)) goto l7;
x[jvj+15]=x[jvj+8] ;z[jvj+15]=z[jvj+8];
goto l11;
l13:if(SB!=incon) goto l14;
goto l17;
l14:if((SA!=SB)) goto l17;
x[jvj+12]=135 ;z[jvj+12]=135;
goto l15;
l16:x[jvj+13]=x[jvj+12] ;z[jvj+13]=z[jvj+12];
goto l19;
}
