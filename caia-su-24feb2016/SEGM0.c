#include "dx.h"
void SEGM0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,V4=0;
int BL;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=16;
x[jvj+1]=10224;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1104&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
BL=pile[v[22]]; v[22]+=1; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=1913; pile[WZ1]=BL; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(1913,BL,jvj+2)*/
pile[v[22]]=184; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(184,BL,jvj+3)*/
l1:if((x[jvj+3]>0)) goto l2;
pile[v[22]]=BL; 
(*f[302])( );if(v[102]) goto l10;     /*NBT0(BL,V4)*/
V4=pile[WZ1]; 
if((V4<=2000)) goto l10;
pile[v[22]]=565; pile[WZ1]=BL; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(565,BL,jvj+5)*/
l3:if((x[jvj+5]>0)) goto l4;
pile[v[22]]=BL; 
(*f[1420])( );     /*SEGT0(BL)*/
pile[v[22]]=109; pile[WZ1]=BL; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(109,BL,jvj+11)*/
pile[v[22]]=365; pile[WZ1]=jvj+11; 
(*f[71])( );     /*ENLV0(365,jvj+11)*/
l6:pile[v[22]]=184; pile[WZ1]=BL; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(184,BL,jvj+7)*/
l7:if((x[jvj+7]>0)) goto l8;
pile[v[22]]=565; pile[WZ1]=BL; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(565,BL,jvj+9)*/
l9:if((x[jvj+9]<=0)) goto l10;
x[jvj+10]=s[x[jvj+9]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+9];
pile[v[22]]=117; pile[WZ1]=jvj+10; 
(*f[71])( );     /*ENLV0(117,jvj+10)*/
x[jvj+9]=t[x[jvj+9]];
goto l9;
l2:x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=BL; pile[WZ1]=jvj+4; 
(*f[1419])( );     /*SEGA0(BL,jvj+4)*/
x[jvj+3]=t[x[jvj+3]];
goto l1;
l4:x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=jvj+6; 
(*f[302])( );if(v[102]) goto l5;     /*NBT0(jvj+6,V5)*/
V5=pile[WZ1]; 
pile[WZ1]=117; pile[WZ2]=V5; 
(*f[43])( );     /*CHGC2(jvj+6,117,V5)*/
l5:x[jvj+5]=t[x[jvj+5]];
goto l3;
l8:x[jvj+8]=s[x[jvj+7]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+7];
pile[v[22]]=117; pile[WZ1]=jvj+8; 
(*f[71])( );     /*ENLV0(117,jvj+8)*/
x[jvj+7]=t[x[jvj+7]];
goto l7;
l10:pile[v[22]]=1913; pile[WZ1]=BL; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(1913,BL,jvj+12)*/
x[jvj+15]=x[jvj+12] ;z[jvj+15]=z[jvj+12];
l11:if((x[jvj+15]>0)) goto l12;
x[jvj+16]=x[jvj+2] ;z[jvj+16]=z[jvj+2];
l13:if((x[jvj+16]>0)) goto l14;
l16:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l12:x[jvj+13]=s[x[jvj+15]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+15];
pile[v[22]]=jvj+13; pile[WZ1]=1913; 
(*f[294])( );     /*PLUK2(jvj+13,1913)*/
x[jvj+15]=t[x[jvj+15]];
goto l11;
l14:x[jvj+14]=s[x[jvj+16]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+16];
for(a=x[jvj+12];a>0;a=t[a]) if(s[a]==x[jvj+14]) goto l15;
pile[v[22]]=jvj+14; pile[WZ1]=67; 
(*f[377])( );     /*NVR0(jvj+14,67)*/
l15:x[jvj+16]=t[x[jvj+16]];
goto l13;
}
