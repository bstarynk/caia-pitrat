#include "dx.h"
void QZZA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=29;
x[jvj+1]=11278;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1759&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}

WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=vo[16];z[jvj+2]=vz[16];
pile[v[22]]=509; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(509,jvj+2,jvj+3)*/
l1:if((x[jvj+3]>0)) goto l2;
x[jvj+19]=vo[16];z[jvj+19]=vz[16];
pile[v[22]]=509; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(509,jvj+19,jvj+20)*/
l11:if((x[jvj+20]>0)) goto l12;
pile[v[22]]=454; pile[WZ1]=jvj+19; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(454,jvj+19,jvj+22)*/
l13:if((x[jvj+22]>0)) goto l14;
x[jvj+17]=0 ;z[jvj+17]=0;
x[jvj+15]=vo[16];z[jvj+15]=vz[16];
pile[v[22]]=509; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(509,jvj+15,jvj+16)*/
l10:if((x[jvj+16]<=0)) goto l17;
x[jvj+18]=s[x[jvj+16]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+16];
pile[v[22]]=jvj+17; pile[WZ1]=jvj+18; 
(*f[68])( );     /*PLUE0(jvj+17,jvj+18)*/
x[jvj+16]=t[x[jvj+16]];
goto l10;
l2:x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=1216; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(1216,jvj+4,jvj+5)*/
for(a=x[jvj+5];a>0;a=t[a]) if(s[a]==1215) goto l4;
for(a=x[jvj+5];a>0;a=t[a]) if(s[a]==1273) goto l4;
l3:x[jvj+3]=t[x[jvj+3]];
goto l1;
l4:pile[v[22]]=jvj+4; 
(*f[1949])( );     /*QZZB0(jvj+4)*/
goto l3;
l8:pile[v[22]]=jvj+11; pile[WZ1]=jvj+6; 
(*f[68])( );     /*PLUE0(jvj+11,jvj+6)*/
l6:x[jvj+9]=t[x[jvj+9]];
l5:if((x[jvj+9]<=0)) goto l21;
x[jvj+6]=s[x[jvj+9]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+9];
pile[v[22]]=191; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(191,jvj+6,jvj+7)*/
if((x[jvj+7]==68)) goto l6;
l7:pile[v[22]]=1216; pile[WZ1]=jvj+6; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(1216,jvj+6,jvj+10)*/
for(a=x[jvj+10];a>0;a=t[a]) if(s[a]==1215) goto l8;
for(a=x[jvj+10];a>0;a=t[a]) if(s[a]==1273) goto l8;
goto l6;
l9:pile[v[22]]=509; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[1950])( );     /*SUBNBVAL0(509,jvj+12,jvj+13)*/
l23:pile[v[22]]=jvj+13; pile[WZ1]=jvj+28; 
(*f[1951])( );     /*PREPNBV0(jvj+13,jvj+28)*/
(*f[1952])( );     /*TRNBVRAI0(jvj+13,jvj+28)*/
x[jvj+11]=t[x[jvj+11]];
l21:if((x[jvj+11]>0)) goto l22;
l24:x[jvj+1]=incon; v[0]=jvj; return;
l12:x[jvj+21]=s[x[jvj+20]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+20];
pile[v[22]]=687; pile[WZ1]=jvj+21; 
(*f[71])( );     /*ENLV0(687,jvj+21)*/
x[jvj+20]=t[x[jvj+20]];
goto l11;
l14:x[jvj+23]=s[x[jvj+22]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+22];
pile[v[22]]=480; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[33])( );     /*FNDE0(480,jvj+23,jvj+24)*/
x[jvj+29]=x[jvj+24] ;z[jvj+29]=z[jvj+24];
l15:if((x[jvj+29]>0)) goto l16;
x[jvj+22]=t[x[jvj+22]];
goto l13;
l16:x[jvj+25]=s[x[jvj+29]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+29];
pile[v[22]]=509; pile[WZ1]=jvj+25; 
(*f[71])( );     /*ENLV0(509,jvj+25)*/
x[jvj+29]=t[x[jvj+29]];
goto l15;
l18:x[jvj+26]=s[x[jvj+17]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+17];
pile[v[22]]=1216; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[33])( );     /*FNDE0(1216,jvj+26,jvj+27)*/
for(a=x[jvj+27];a>0;a=t[a]) if(s[a]==1214) goto l20;
l19:x[jvj+17]=t[x[jvj+17]];
l17:if((x[jvj+17]>0)) goto l18;
x[jvj+11]=0 ;z[jvj+11]=0;
x[jvj+8]=vo[16];z[jvj+8]=vz[16];
pile[v[22]]=509; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(509,jvj+8,jvj+9)*/
goto l5;
l20:pile[v[22]]=jvj+26; pile[WZ1]=206; 
(*f[1952])( );     /*TRNBVRAI0(jvj+26,206)*/
goto l19;
l22:x[jvj+13]=s[x[jvj+11]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+11];
x[jvj+12]=vo[16];z[jvj+12]=vz[16];
pile[v[22]]=1216; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(1216,jvj+13,jvj+14)*/
for(a=x[jvj+14];a>0;a=t[a]) if(s[a]==1273) goto l9;
goto l23;
}
