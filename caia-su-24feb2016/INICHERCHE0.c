#include "dx.h"
void INICHERCHE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=14;
x[jvj+1]=10878;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1689&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}

WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+3]=incon;
x[jvj+2]=vo[12];z[jvj+2]=vz[12];
pile[v[22]]=576; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(576,jvj+2,jvj+3)*/
l1:pile[v[22]]=907; pile[WZ1]=jvj+2; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(907,jvj+2,jvj+4)*/
x[jvj+5]=vo[13];z[jvj+5]=vz[13];
l2:if((x[jvj+4]>0)) goto l3;
if(x[jvj+3]!=incon) goto l4;
l7:x[jvj+1]=incon; v[0]=jvj; return;
l3:x[jvj+6]=s[x[jvj+4]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+4];
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; 
(*f[255])( );     /*COPEXP0(jvj+6,jvj+7)*/
pile[v[22]]=jvj+5; pile[WZ1]=907; pile[WZ2]=jvj+7; 
(*f[36])( );     /*PLUSC0(jvj+5,907,jvj+7)*/
x[jvj+4]=t[x[jvj+4]];
goto l2;
l4:pile[v[22]]=111; pile[WZ1]=jvj+3; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,jvj+3,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+8,jvj+9)*/
if((x[jvj+9]==25)) goto l5;
if((x[jvj+9]==26)) goto l6;
if((x[jvj+9]!=149)) goto l7;
pile[v[22]]=102; pile[WZ1]=jvj+3; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,jvj+3,jvj+12)*/
pile[v[22]]=101; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+12,jvj+13)*/
if((x[jvj+13]!=134)) goto l7;
x[jvj+14]=vo[14];z[jvj+14]=vz[14];
pile[v[22]]=jvj+14; pile[WZ1]=1196; pile[WZ2]=580; 
(*f[35])( );     /*CHGC1(jvj+14,1196,580)*/
goto l7;
l5:x[jvj+10]=vo[14];z[jvj+10]=vz[14];
pile[v[22]]=jvj+10; pile[WZ1]=1196; pile[WZ2]=489; 
(*f[35])( );     /*CHGC1(jvj+10,1196,489)*/
goto l7;
l6:x[jvj+11]=vo[14];z[jvj+11]=vz[14];
pile[v[22]]=jvj+11; pile[WZ1]=1196; pile[WZ2]=365; 
(*f[35])( );     /*CHGC1(jvj+11,1196,365)*/
goto l7;
}
