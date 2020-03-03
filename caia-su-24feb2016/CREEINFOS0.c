#include "dx.h"
void CREEINFOS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V=0,V12=0,V11=0;
int RN,HIST;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=17;
x[jvj+1]=11522;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1733&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
RN=pile[v[22]]; HIST=pile[v[22]+1]; v[22]+=2; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=868; pile[WZ1]=RN; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(868,RN,jvj+10)*/
if((x[jvj+10]!=25)) goto l8;
pile[v[22]]=RN; pile[WZ1]=jvj+11; 
(*f[1930])( );if(v[102]) goto l8;     /*DECTERMES0(RN,jvj+11)*/
x[jvj+12]=vo[16];z[jvj+12]=vz[16];
l4:if((x[jvj+11]<=0)) goto l8;
x[jvj+13]=s[x[jvj+11]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+11];
pile[v[22]]=100; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+13,jvj+14)*/
if((x[jvj+14]!=484)) goto l5;
pile[v[22]]=jvj+13; pile[WZ1]=jvj+15; 
(*f[200])( );if(v[102]) goto l5;     /*NDD0(jvj+13,jvj+15)*/
x[jvj+2]=x[jvj+15] ;z[jvj+2]=z[jvj+15];
pile[v[22]]=1369; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(1369,jvj+2,jvj+3)*/
pile[v[22]]=RN; pile[WZ1]=jvj+4; 
(*f[887])( );     /*VARND0(RN,jvj+4)*/
V12=x[jvj+3];
l1:if((V12>0)) goto l2;
pile[v[22]]=RN; pile[WZ1]=jvj+2; pile[WZ2]=486; pile[WZ3]=jvj+5; 
(*f[1931])( );if(v[102]) goto l5;     /*ISOLONS0(RN,jvj+2,486,jvj+5)*/
x[jvj+16]=incon;
if((v[244]<=0)) goto l9;
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[965])( );if(v[102]) goto l9;     /*NORM0(jvj+5,jvj+6)*/
pile[v[22]]=1879; pile[WZ1]=jvj+2; pile[WZ2]=1880; pile[WZ3]=jvj+6; pile[WZ4]=jvj+16; 
(*f[181])( );     /*QUADRI2(1879,jvj+2,1880,jvj+6,jvj+16)*/
l6:x[jvj+9]=x[jvj+16] ;z[jvj+9]=z[jvj+16];
if((v[244]<=0)) goto l7;
pile[v[22]]=jvj+5; pile[WZ1]=jvj+7; 
(*f[1361])( );     /*VAROBJ0(jvj+5,jvj+7)*/
for(i=x[jvj+7],V11=0;i>0;i=t[i],V11++)  ;
if((V11!=1)) goto l7;
x[jvj+17]=x[jvj+7] ;z[jvj+17]=z[jvj+7];
l3:if((x[jvj+17]<=0)) goto l7;
x[jvj+8]=s[x[jvj+17]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+17];
pile[v[22]]=1902; pile[WZ1]=jvj+8; pile[WZ2]=HIST; 
(*f[1365])( );     /*AJOUTER0(1902,jvj+8,HIST)*/
pile[v[22]]=jvj+8; 
(*f[1595])( );     /*CRETUND0(jvj+8)*/
pile[v[22]]=jvj+9; pile[WZ1]=1888; pile[WZ2]=jvj+8; 
(*f[35])( );     /*CHGC1(jvj+9,1888,jvj+8)*/
x[jvj+17]=t[x[jvj+17]];
goto l3;
l2:V=s[V12];
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==V) goto l5;
V12=t[V12];
goto l1;
l7:pile[v[22]]=RN; pile[WZ1]=1601; pile[WZ2]=jvj+9; 
(*f[36])( );     /*PLUSC0(RN,1601,jvj+9)*/
pile[v[22]]=jvj+12; 
(*f[36])( );     /*PLUSC0(jvj+12,1601,jvj+9)*/
l5:x[jvj+11]=t[x[jvj+11]];
goto l4;
l8:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l9:pile[v[22]]=447; pile[WZ1]=jvj+2; pile[WZ2]=459; pile[WZ3]=jvj+5; pile[WZ4]=jvj+16; 
(*f[181])( );     /*QUADRI2(447,jvj+2,459,jvj+5,jvj+16)*/
goto l6;
}
