#include "dx.h"
void AJUSTECALA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V16=0,V14=0,GG=0;
int A,R,BA,F,XD;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=40;
x[jvj+1]=11798;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1706&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
A=pile[v[22]]; R=pile[v[22]+1]; BA=pile[v[22]+2]; F=pile[v[22]+3]; XD=pile[v[22]+4]; v[22]+=5; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=436; pile[WZ1]=A; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(436,A,jvj+29)*/
pile[v[22]]=R; pile[WZ1]=436; 
(*f[35])( );     /*CHGC1(R,436,jvj+29)*/
l15:if((x[F]!=156)) goto l16;
pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(102,A,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=BA; pile[WZ2]=228; pile[WZ3]=jvj+31; 
(*f[1233])( );if(v[102]) goto l16;     /*MISENFORME0(jvj+30,BA,228,jvj+31)*/
pile[v[22]]=R; pile[WZ1]=102; pile[WZ2]=jvj+31; 
(*f[35])( );     /*CHGC1(R,102,jvj+31)*/
l16:pile[v[22]]=1045; pile[WZ1]=F; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(1045,F,jvj+32)*/
if((x[jvj+32]!=68)) goto l17;
pile[v[22]]=103; pile[WZ1]=A; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(103,A,jvj+33)*/
pile[v[22]]=R; pile[WZ1]=103; 
(*f[35])( );     /*CHGC1(R,103,jvj+33)*/
l17:pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+34; 
(*f[33])( );     /*FNDE0(107,A,jvj+34)*/
l18:if((x[jvj+34]>0)) goto l19;
if((x[F]==156)) goto l26;
x[jvj+40]=w[1659][9];
l22:if((x[jvj+40]<=0)) goto l26;
x[jvj+4]=s[x[jvj+40]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+40];
if((x[jvj+4]!=103)) goto l24;
pile[v[22]]=1045; pile[WZ1]=F; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(1045,F,jvj+3)*/
if((x[jvj+3]==68)) goto l23;
l24:pile[v[22]]=jvj+4; pile[WZ1]=A; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(jvj+4,A,jvj+35)*/
x[jvj+7]=x[jvj+35] ;z[jvj+7]=z[jvj+35];
V1=incon;
if((x[XD]!=228)) goto l2;
pile[v[22]]=1877; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(1877,jvj+4,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=F; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(jvj+5,F,jvj+6)*/
pile[v[22]]=jvj+7; pile[WZ1]=BA; pile[WZ3]=XD; pile[WZ4]=jvj+8; 
(*f[1498])( );     /*CALCULABLE0(jvj+7,BA,jvj+6,XD,jvj+8)*/
if((x[jvj+8]==67)) goto l1;
l2:V1=68;
l25:GG=V1;
if((GG==67)) goto l6;
if((GG!=68)) goto l23;
x[jvj+14]=incon;
pile[v[22]]=1877; pile[WZ1]=jvj+4; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(1877,jvj+4,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=F; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(jvj+9,F,jvj+10)*/
x[jvj+36]=x[jvj+10] ;z[jvj+36]=z[jvj+10];
x[jvj+14]=x[jvj+36] ;z[jvj+14]=z[jvj+36];
l4:x[jvj+15]=incon;
pile[v[22]]=1878; pile[WZ1]=jvj+4; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(1878,jvj+4,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=F; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+11,F,jvj+12)*/
x[jvj+37]=x[jvj+12] ;z[jvj+37]=z[jvj+12];
x[jvj+15]=x[jvj+37] ;z[jvj+15]=z[jvj+37];
l7:pile[v[22]]=jvj+7; pile[WZ1]=BA; pile[WZ2]=jvj+14; pile[WZ3]=jvj+15; pile[WZ4]=XD; pile[WZ5]=jvj+16; 
(*f[1712])( );if(v[102]) goto l23;     /*AJUSTECAL1(jvj+7,BA,jvj+14,jvj+15,XD,jvj+16)*/
pile[v[22]]=R; pile[WZ1]=jvj+4; pile[WZ2]=jvj+16; 
(*f[35])( );     /*CHGC1(R,jvj+4,jvj+16)*/
l23:x[jvj+40]=t[x[jvj+40]];
goto l22;
l1:V1=67;
goto l25;
l3:x[jvj+14]=250 ;z[jvj+14]=250;
goto l4;
l5:x[jvj+15]=250 ;z[jvj+15]=250;
goto l7;
l6:pile[v[22]]=jvj+7; pile[WZ1]=BA; pile[WZ2]=228; pile[WZ3]=jvj+13; 
(*f[1233])( );if(v[102]) goto l23;     /*MISENFORME0(jvj+7,BA,228,jvj+13)*/
pile[v[22]]=A; pile[WZ1]=jvj+4; pile[WZ2]=jvj+13; 
(*f[35])( );     /*CHGC1(A,jvj+4,jvj+13)*/
goto l23;
l8:V16=67;
l21:V14=V16;
if((V14==67)) goto l13;
if((V14!=68)) goto l20;
x[jvj+26]=incon;
pile[v[22]]=1877; pile[WZ1]=107; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(1877,107,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=F; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(jvj+21,F,jvj+22)*/
x[jvj+38]=x[jvj+22] ;z[jvj+38]=z[jvj+22];
x[jvj+26]=x[jvj+38] ;z[jvj+26]=z[jvj+38];
l11:x[jvj+27]=incon;
pile[v[22]]=1878; pile[WZ1]=107; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(1878,107,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=F; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(jvj+23,F,jvj+24)*/
x[jvj+39]=x[jvj+24] ;z[jvj+39]=z[jvj+24];
x[jvj+27]=x[jvj+39] ;z[jvj+27]=z[jvj+39];
l14:pile[v[22]]=jvj+19; pile[WZ1]=BA; pile[WZ2]=jvj+26; pile[WZ3]=jvj+27; pile[WZ4]=XD; pile[WZ5]=jvj+28; 
(*f[1712])( );if(v[102]) goto l20;     /*AJUSTECAL1(jvj+19,BA,jvj+26,jvj+27,XD,jvj+28)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+28; 
(*f[36])( );     /*PLUSC0(R,107,jvj+28)*/
l20:x[jvj+34]=t[x[jvj+34]];
goto l18;
l10:x[jvj+26]=250 ;z[jvj+26]=250;
goto l11;
l12:x[jvj+27]=250 ;z[jvj+27]=250;
goto l14;
l13:pile[v[22]]=jvj+19; pile[WZ1]=BA; pile[WZ2]=228; pile[WZ3]=XD; pile[WZ4]=jvj+25; 
(*f[1500])( );if(v[102]) goto l20;     /*MISENFORME1(jvj+19,BA,228,XD,jvj+25)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+25; 
(*f[36])( );     /*PLUSC0(R,107,jvj+25)*/
goto l20;
l19:x[jvj+19]=s[x[jvj+34]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+34];
V16=incon;
if((x[XD]!=228)) goto l9;
pile[v[22]]=1877; pile[WZ1]=107; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(1877,107,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=F; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(jvj+17,F,jvj+18)*/
pile[v[22]]=jvj+19; pile[WZ1]=BA; pile[WZ3]=XD; pile[WZ4]=jvj+20; 
(*f[1498])( );     /*CALCULABLE0(jvj+19,BA,jvj+18,XD,jvj+20)*/
if((x[jvj+20]==67)) goto l8;
l9:V16=68;
goto l21;
l26:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=5; return;
}
