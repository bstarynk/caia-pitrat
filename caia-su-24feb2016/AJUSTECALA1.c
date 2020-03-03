#include "dx.h"
void AJUSTECALA1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V16=0,V14=0,GG=0;
int A,R,BA,F;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=35;
x[jvj+1]=11798;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1707&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
A=pile[v[22]]; R=pile[v[22]+1]; BA=pile[v[22]+2]; F=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+13]=250 ;z[jvj+13]=250;
pile[v[22]]=436; pile[WZ1]=A; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(436,A,jvj+24)*/
pile[v[22]]=R; pile[WZ1]=436; 
(*f[35])( );     /*CHGC1(R,436,jvj+24)*/
l11:if((x[F]!=156)) goto l12;
pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(102,A,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=BA; pile[WZ2]=228; pile[WZ3]=jvj+26; 
(*f[1233])( );if(v[102]) goto l12;     /*MISENFORME0(jvj+25,BA,228,jvj+26)*/
pile[v[22]]=R; pile[WZ1]=102; pile[WZ2]=jvj+26; 
(*f[35])( );     /*CHGC1(R,102,jvj+26)*/
l12:pile[v[22]]=1045; pile[WZ1]=F; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(1045,F,jvj+27)*/
if((x[jvj+27]!=68)) goto l13;
pile[v[22]]=103; pile[WZ1]=A; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(103,A,jvj+28)*/
pile[v[22]]=R; pile[WZ1]=103; 
(*f[35])( );     /*CHGC1(R,103,jvj+28)*/
l13:pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+29; 
(*f[33])( );     /*FNDE0(107,A,jvj+29)*/
l14:if((x[jvj+29]>0)) goto l15;
if((x[F]==156)) goto l20;
x[jvj+35]=w[1659][9];
l17:if((x[jvj+35]<=0)) goto l20;
x[jvj+4]=s[x[jvj+35]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+35];
if((x[jvj+4]!=103)) goto l19;
pile[v[22]]=1045; pile[WZ1]=F; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(1045,F,jvj+3)*/
if((x[jvj+3]==68)) goto l18;
l19:pile[v[22]]=jvj+4; pile[WZ1]=A; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(jvj+4,A,jvj+30)*/
x[jvj+9]=x[jvj+30] ;z[jvj+9]=z[jvj+30];
V1=incon;
V1=68;
GG=V1;
if((GG==67)) goto l4;
if((GG!=68)) goto l18;
x[jvj+11]=incon;
pile[v[22]]=1877; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(1877,jvj+4,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=F; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(jvj+5,F,jvj+6)*/
x[jvj+31]=x[jvj+6] ;z[jvj+31]=z[jvj+6];
x[jvj+11]=x[jvj+31] ;z[jvj+11]=z[jvj+31];
l2:x[jvj+12]=incon;
pile[v[22]]=1878; pile[WZ1]=jvj+4; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(1878,jvj+4,jvj+7)*/
pile[v[22]]=jvj+7; pile[WZ1]=F; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(jvj+7,F,jvj+8)*/
x[jvj+32]=x[jvj+8] ;z[jvj+32]=z[jvj+8];
x[jvj+12]=x[jvj+32] ;z[jvj+12]=z[jvj+32];
l5:pile[v[22]]=jvj+9; pile[WZ1]=BA; pile[WZ2]=jvj+11; pile[WZ3]=jvj+12; pile[WZ4]=jvj+13; pile[WZ5]=jvj+14; 
(*f[1712])( );if(v[102]) goto l18;     /*AJUSTECAL1(jvj+9,BA,jvj+11,jvj+12,jvj+13,jvj+14)*/
pile[v[22]]=R; pile[WZ1]=jvj+4; pile[WZ2]=jvj+14; 
(*f[35])( );     /*CHGC1(R,jvj+4,jvj+14)*/
l18:x[jvj+35]=t[x[jvj+35]];
goto l17;
l1:x[jvj+11]=250 ;z[jvj+11]=250;
goto l2;
l3:x[jvj+12]=250 ;z[jvj+12]=250;
goto l5;
l4:pile[v[22]]=jvj+9; pile[WZ1]=BA; pile[WZ2]=228; pile[WZ3]=jvj+10; 
(*f[1233])( );if(v[102]) goto l18;     /*MISENFORME0(jvj+9,BA,228,jvj+10)*/
pile[v[22]]=A; pile[WZ1]=jvj+4; pile[WZ2]=jvj+10; 
(*f[35])( );     /*CHGC1(A,jvj+4,jvj+10)*/
goto l18;
l6:x[jvj+21]=250 ;z[jvj+21]=250;
l7:x[jvj+22]=incon;
pile[v[22]]=1878; pile[WZ1]=107; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(1878,107,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=F; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(jvj+17,F,jvj+18)*/
x[jvj+34]=x[jvj+18] ;z[jvj+34]=z[jvj+18];
x[jvj+22]=x[jvj+34] ;z[jvj+22]=z[jvj+34];
l10:pile[v[22]]=jvj+19; pile[WZ1]=BA; pile[WZ2]=jvj+21; pile[WZ3]=jvj+22; pile[WZ4]=jvj+13; pile[WZ5]=jvj+23; 
(*f[1712])( );if(v[102]) goto l16;     /*AJUSTECAL1(jvj+19,BA,jvj+21,jvj+22,jvj+13,jvj+23)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+23; 
(*f[36])( );     /*PLUSC0(R,107,jvj+23)*/
l16:x[jvj+29]=t[x[jvj+29]];
goto l14;
l8:x[jvj+22]=250 ;z[jvj+22]=250;
goto l10;
l9:pile[v[22]]=jvj+19; pile[WZ1]=BA; pile[WZ2]=228; pile[WZ3]=jvj+13; pile[WZ4]=jvj+20; 
(*f[1500])( );if(v[102]) goto l16;     /*MISENFORME1(jvj+19,BA,228,jvj+13,jvj+20)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+20; 
(*f[36])( );     /*PLUSC0(R,107,jvj+20)*/
goto l16;
l15:x[jvj+19]=s[x[jvj+29]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+29];
V16=incon;
V16=68;
V14=V16;
if((V14==67)) goto l9;
if((V14!=68)) goto l16;
x[jvj+21]=incon;
pile[v[22]]=1877; pile[WZ1]=107; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(1877,107,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=F; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(jvj+15,F,jvj+16)*/
x[jvj+33]=x[jvj+16] ;z[jvj+33]=z[jvj+16];
x[jvj+21]=x[jvj+33] ;z[jvj+21]=z[jvj+33];
goto l7;
l20:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=4; return;
}
