#include "dx.h"
void EXAPBA1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,V12=0,V11=0;
int E;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=17;
x[jvj+1]=11219;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1192&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
E=pile[v[22]]; v[22]+=1; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+14]=0 ;z[jvj+14]=0;
x[jvj+9]=x[jvj+14] ;z[jvj+9]=z[jvj+14];
x[jvj+16]=x[E] ;z[jvj+16]=z[E];
l5:if((x[jvj+16]>0)) goto l6;
pile[v[22]]=jvj+9; pile[WZ1]=1041; 
(*f[857])( );     /*EXAPBMSG2(jvj+9,1041)*/
l8:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l3:x[jvj+3]=s[x[jvj+15]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+15];
pile[v[22]]=493; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(493,jvj+3,V4)*/
V4=pile[WZ2]; 
if((V4>0)) goto l7;
l1:pile[v[22]]=935; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(935,jvj+3,jvj+4)*/
if(x[jvj+4]==547||x[jvj+4]==325) goto l7;
l4:x[jvj+15]=t[x[jvj+15]];
l2:if((x[jvj+15]>0)) goto l3;
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[378])( );     /*CPI0(jvj+7,jvj+8)*/
pile[v[22]]=jvj+9; 
(*f[68])( );     /*PLUE0(jvj+9,jvj+8)*/
l7:x[jvj+16]=t[x[jvj+16]];
goto l5;
l6:x[jvj+7]=s[x[jvj+16]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+16];
pile[v[22]]=109; pile[WZ1]=jvj+7; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(109,jvj+7,jvj+10)*/
pile[v[22]]=983; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(983,jvj+10,jvj+11)*/
pile[v[22]]=878; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(878,jvj+11,jvj+12)*/
l9:if((x[jvj+12]<=0)) goto l7;
x[jvj+13]=s[x[jvj+12]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+12];
pile[v[22]]=163; pile[WZ1]=jvj+13; 
(*f[44])( );if(v[102]) goto l10;     /*FNDC1(163,jvj+13,V12)*/
V12=pile[WZ2]; 
pile[WZ1]=jvj+7; 
(*f[44])( );if(v[102]) goto l10;     /*FNDC1(163,jvj+7,V11)*/
V11=pile[WZ2]; 
if((V12==V11)) goto l10;
x[jvj+12]=t[x[jvj+12]];
goto l9;
l10:x[jvj+17]=x[jvj+13] ;z[jvj+17]=z[jvj+13];
x[jvj+5]=x[jvj+17] ;z[jvj+5]=z[jvj+17];
pile[v[22]]=944; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(944,jvj+5,jvj+6)*/
x[jvj+15]=x[jvj+6] ;z[jvj+15]=z[jvj+6];
goto l2;
}
