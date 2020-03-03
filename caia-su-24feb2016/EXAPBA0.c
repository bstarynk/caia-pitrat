#include "dx.h"
void EXAPBA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,V12=0,V11=0;
int E,EC;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=16;
x[jvj+1]=11219;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==518&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
E=pile[v[22]]; EC=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+13]=0 ;z[jvj+13]=0;
x[jvj+8]=x[jvj+13] ;z[jvj+8]=z[jvj+13];
x[jvj+15]=x[E] ;z[jvj+15]=z[E];
l5:if((x[jvj+15]>0)) goto l6;
pile[v[22]]=jvj+8; pile[WZ1]=1041; 
(*f[857])( );     /*EXAPBMSG2(jvj+8,1041)*/
l8:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; return;
l3:x[jvj+2]=s[x[jvj+14]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+14];
pile[v[22]]=493; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(493,jvj+2,V4)*/
V4=pile[WZ2]; 
if((V4>0)) goto l7;
l1:pile[v[22]]=935; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(935,jvj+2,jvj+3)*/
if(x[jvj+3]==547||x[jvj+3]==325) goto l7;
l4:x[jvj+14]=t[x[jvj+14]];
l2:if((x[jvj+14]>0)) goto l3;
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; 
(*f[378])( );     /*CPI0(jvj+6,jvj+7)*/
pile[v[22]]=jvj+8; 
(*f[68])( );     /*PLUE0(jvj+8,jvj+7)*/
l7:x[jvj+15]=t[x[jvj+15]];
goto l5;
l6:x[jvj+6]=s[x[jvj+15]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+15];
pile[v[22]]=109; pile[WZ1]=jvj+6; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(109,jvj+6,jvj+9)*/
pile[v[22]]=983; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(983,jvj+9,jvj+10)*/
pile[v[22]]=878; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(878,jvj+10,jvj+11)*/
l9:if((x[jvj+11]<=0)) goto l7;
x[jvj+12]=s[x[jvj+11]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+11];
pile[v[22]]=163; pile[WZ1]=jvj+12; 
(*f[44])( );if(v[102]) goto l10;     /*FNDC1(163,jvj+12,V12)*/
V12=pile[WZ2]; 
pile[WZ1]=jvj+6; 
(*f[44])( );if(v[102]) goto l10;     /*FNDC1(163,jvj+6,V11)*/
V11=pile[WZ2]; 
if((V12==V11)) goto l10;
x[jvj+11]=t[x[jvj+11]];
goto l9;
l10:x[jvj+16]=x[jvj+12] ;z[jvj+16]=z[jvj+12];
x[jvj+4]=x[jvj+16] ;z[jvj+4]=z[jvj+16];
pile[v[22]]=944; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(944,jvj+4,jvj+5)*/
x[jvj+14]=x[jvj+5] ;z[jvj+14]=z[jvj+5];
goto l2;
}
