#include "dx.h"
void LFACTA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V34=0,V36=0,V37=0,DB=0,V40=0,V38=0,V39=0,DT=0,V18=0,DV=0,V2=0,DC=0,V61=0,V62=0,V8=0,V24=0,DD=0,D=0;
int DR;
int EX,DY;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=43;
x[jvj+1]=11692;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1372&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
DR=pile[v[22]]; EX=pile[v[22]+1]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
DY=x[jvj+12]=x[jvj+11]=DB=x[jvj+35]=DD=incon;
pile[v[22]]=1736; pile[WZ1]=100; pile[WZ2]=EX; 
(*f[54])( );     /*TRI1(1736,100,EX)*/
pile[v[22]]=DR; pile[WZ1]=64; pile[WZ2]=66; pile[WZ3]=jvj+5; 
(*f[666])( );if(v[102]) goto l1;     /*SMA3(DR,64,66,jvj+5)*/
if((x[jvj+5]!=1736)) goto l1;
pile[WZ1]=jvj+6; 
(*f[1057])( );if(v[102]) goto l1;     /*LELT0(DR,jvj+6,DY)*/
DY=pile[WZ2]; 
pile[v[22]]=EX; pile[WZ1]=102; pile[WZ2]=jvj+6; 
(*f[35])( );     /*CHGC1(EX,102,jvj+6)*/
l36:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=3; pile[v[22]+2]=DY; v[102]=0;return;
l1:pile[v[22]]=DR; 
(*f[107])( );     /*CRC0(DR,V34)*/
V34=pile[WZ1]; 
V36=bh[v[1]][V34];
if((V36!=40)) goto l3;
V37=DR-1;
pile[v[22]]=V37; pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+7; 
(*f[78])( );if(v[102]) goto l3;     /*SMA0(V37,64,67,jvj+7)*/
pile[v[22]]=1671; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(1671,jvj+7,jvj+8)*/
for(a=x[jvj+8];a>0;a=t[a]) if(s[a]==11) goto l2;
l3:pile[v[22]]=DR; pile[WZ1]=64; pile[WZ2]=66; pile[WZ3]=jvj+3; 
(*f[666])( );if(v[102]) goto l5;     /*SMA3(DR,64,66,jvj+3)*/
pile[v[22]]=1731; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(1731,jvj+3,jvj+4)*/
if((x[jvj+4]==68)) goto l5;
l4:pile[v[22]]=1671; pile[WZ1]=jvj+3; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(1671,jvj+3,jvj+10)*/
for(a=x[jvj+10];a>0;a=t[a]) if(s[a]==1718) goto l5;
x[jvj+12]=x[jvj+3] ;z[jvj+12]=z[jvj+3];
l6:if(DY==incon) goto l7;
l17:if(x[jvj+11]!=incon) goto l18;
l28:if(DY==incon) goto l29;
goto l36;
l2:pile[v[22]]=DR; pile[WZ2]=jvj+9; 
(*f[267])( );if(v[102]) goto l3;     /*LEXP1(DR,DY,jvj+9)*/
DY=pile[WZ1]; 
pile[v[22]]=EX; pile[WZ1]=102; 
(*f[35])( );     /*CHGC1(EX,102,jvj+9)*/
goto l3;
l5:pile[v[22]]=DR; pile[WZ1]=jvj+11; 
(*f[1057])( );if(v[102]) goto l6;     /*LELT0(DR,jvj+11,DB)*/
DB=pile[WZ2]; 
goto l6;
l7:if(x[jvj+12]!=incon) goto l8;
goto l17;
l8:pile[v[22]]=DR; 
(*f[667])( );if(v[102]) goto l17;     /*CRK0(DR,V40)*/
V40=pile[WZ1]; 
pile[v[22]]=1671; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(1671,jvj+12,jvj+13)*/
for(a=x[jvj+13];a>0;a=t[a]) if(s[a]==1726) goto l9;
l11:for(a=x[jvj+13];a>0;a=t[a]) if(s[a]==1701) goto l12;
l15:pile[v[22]]=218; pile[WZ1]=jvj+12; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(218,jvj+12,jvj+20)*/
for(a=x[jvj+13];a>0;a=t[a]) if(s[a]==1744) goto l16;
goto l17;
l9:for(a=x[jvj+13];a>0;a=t[a]) if(s[a]==1736) goto l10;
goto l11;
l10:pile[v[22]]=V40; pile[WZ1]=jvj+14; 
(*f[1058])( );if(v[102]) goto l11;     /*LFACT0(V40,jvj+14,V38)*/
V38=pile[WZ2]; 
pile[v[22]]=V38; pile[WZ1]=EX; 
(*f[1370])( );if(v[102]) goto l11;     /*LTAKING0(V38,EX,V39)*/
V39=pile[WZ2]; 
pile[v[22]]=V39; 
(*f[1371])( );if(v[102]) goto l11;     /*LASLONGAS0(V39,EX,DY)*/
DY=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+12; pile[WZ4]=jvj+15; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+12,jvj+15)*/
pile[v[22]]=EX; pile[WZ1]=111; pile[WZ2]=jvj+15; 
(*f[35])( );     /*CHGC1(EX,111,jvj+15)*/
pile[WZ1]=102; pile[WZ2]=jvj+14; 
(*f[35])( );     /*CHGC1(EX,102,jvj+14)*/
goto l17;
l12:for(a=x[jvj+13];a>0;a=t[a]) if(s[a]==129) goto l13;
l14:for(a=x[jvj+13];a>0;a=t[a]) if(s[a]==1736) goto l37;
goto l15;
l13:pile[v[22]]=V40; pile[WZ1]=jvj+16; 
(*f[1057])( );if(v[102]) goto l14;     /*LELT0(V40,jvj+16,DY)*/
DY=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+12; pile[WZ4]=jvj+17; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+12,jvj+17)*/
pile[v[22]]=EX; pile[WZ1]=111; pile[WZ2]=jvj+17; 
(*f[35])( );     /*CHGC1(EX,111,jvj+17)*/
pile[WZ1]=102; pile[WZ2]=jvj+16; 
(*f[35])( );     /*CHGC1(EX,102,jvj+16)*/
goto l17;
l16:pile[v[22]]=V40; pile[WZ1]=jvj+21; 
(*f[1057])( );if(v[102]) goto l17;     /*LELT0(V40,jvj+21,DT)*/
DT=pile[WZ2]; 
pile[v[22]]=DT; 
(*f[667])( );if(v[102]) goto l17;     /*CRK0(DT,V18)*/
V18=pile[WZ1]; 
pile[WZ1]=64; pile[WZ2]=66; pile[WZ3]=jvj+22; 
(*f[666])( );if(v[102]) goto l17;     /*SMA3(DT,64,66,jvj+22)*/
if((x[jvj+22]!=1645)) goto l17;
pile[v[22]]=V18; pile[WZ1]=jvj+23; 
(*f[1057])( );if(v[102]) goto l17;     /*LELT0(V18,jvj+23,DV)*/
DV=pile[WZ2]; 
pile[v[22]]=DV; pile[WZ1]=64; pile[WZ2]=66; pile[WZ3]=jvj+24; 
(*f[666])( );if(v[102]) goto l17;     /*SMA3(DV,64,66,jvj+24)*/
if((x[jvj+24]!=x[jvj+20])) goto l17;
pile[WZ1]=EX; 
(*f[1596])( );     /*LSUCHTHAT0(DV,EX,DY)*/
DY=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+12; pile[WZ4]=jvj+25; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+12,jvj+25)*/
pile[v[22]]=EX; pile[WZ1]=111; pile[WZ2]=jvj+25; 
(*f[35])( );     /*CHGC1(EX,111,jvj+25)*/
pile[WZ1]=102; pile[WZ2]=jvj+21; 
(*f[35])( );     /*CHGC1(EX,102,jvj+21)*/
pile[WZ1]=103; pile[WZ2]=jvj+23; 
(*f[35])( );     /*CHGC1(EX,103,jvj+23)*/
goto l17;
l18:if(DB!=incon) goto l19;
goto l28;
l19:pile[v[22]]=DB; 
(*f[667])( );if(v[102]) goto l21;     /*CRK0(DB,V2)*/
V2=pile[WZ1]; 
pile[WZ1]=64; pile[WZ2]=66; pile[WZ3]=jvj+26; 
(*f[666])( );if(v[102]) goto l21;     /*SMA3(DB,64,66,jvj+26)*/
pile[v[22]]=1671; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[33])( );     /*FNDE0(1671,jvj+26,jvj+27)*/
for(a=x[jvj+27];a>0;a=t[a]) if(s[a]==145) goto l20;
for(a=x[jvj+27];a>0;a=t[a]) if(s[a]==1647) goto l20;
l21:pile[v[22]]=DB; pile[WZ1]=64; pile[WZ2]=66; pile[WZ3]=jvj+29; 
(*f[666])( );if(v[102]) goto l22;     /*SMA3(DB,64,66,jvj+29)*/
if((145!=x[jvj+29])) goto l22;
x[jvj+35]=25 ;z[jvj+35]=25;
pile[WZ2]=jvj+30; 
(*f[267])( );if(v[102]) goto l28;     /*LEXP1(DB,DC,jvj+30)*/
DC=pile[WZ1]; 
pile[v[22]]=EX; pile[WZ1]=102; pile[WZ2]=jvj+11; 
(*f[35])( );     /*CHGC1(EX,102,jvj+11)*/
pile[WZ1]=111; pile[WZ2]=jvj+30; 
(*f[35])( );     /*CHGC1(EX,111,jvj+30)*/
l24:pile[v[22]]=1673; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[33])( );     /*FNDE0(1673,jvj+35,jvj+36)*/
for(a=x[jvj+36];a>0;a=t[a]) if(s[a]==1683) goto l25;
l27:DD=DC;
goto l28;
l20:x[jvj+35]=x[jvj+26] ;z[jvj+35]=z[jvj+26];
DC=V2;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+26; pile[WZ4]=jvj+28; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+26,jvj+28)*/
pile[v[22]]=EX; pile[WZ1]=111; pile[WZ2]=jvj+28; 
(*f[35])( );     /*CHGC1(EX,111,jvj+28)*/
pile[WZ1]=102; pile[WZ2]=jvj+11; 
(*f[35])( );     /*CHGC1(EX,102,jvj+11)*/
goto l24;
l22:V61=bh[v[1]][DB];
if((V61!=42)) goto l28;
V62=DB+1;
pile[v[22]]=V62; pile[WZ1]=64; pile[WZ2]=66; pile[WZ3]=jvj+31; 
(*f[666])( );if(v[102]) goto l28;     /*SMA3(V62,64,66,jvj+31)*/
if((145!=x[jvj+31])) goto l28;
x[jvj+35]=25 ;z[jvj+35]=25;
pile[WZ2]=jvj+32; 
(*f[267])( );if(v[102]) goto l28;     /*LEXP1(V62,DC,jvj+32)*/
DC=pile[WZ1]; 
pile[v[22]]=jvj+32; pile[WZ1]=jvj+33; 
(*f[255])( );     /*COPEXP0(jvj+32,jvj+33)*/
pile[v[22]]=EX; pile[WZ1]=102; pile[WZ2]=jvj+11; 
(*f[35])( );     /*CHGC1(EX,102,jvj+11)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=651; pile[WZ4]=jvj+42; 
(*f[181])( );     /*QUADRI2(100,20,101,651,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=111; pile[WZ2]=jvj+43; 
(*f[54])( );     /*TRI1(jvj+42,111,jvj+43)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+33; pile[WZ4]=jvj+43; pile[WZ5]=jvj+34; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+33,jvj+43,jvj+34)*/
pile[v[22]]=EX; pile[WZ1]=111; pile[WZ2]=jvj+34; 
(*f[35])( );     /*CHGC1(EX,111,jvj+34)*/
goto l24;
l25:V24=w[x[jvj+35]][8];
for(a=V24;a>0;a=t[a]) if(s[a]==1736) goto l26;
l23:V8=w[x[jvj+35]][8];
for(a=V8;a>0;a=t[a]) if(s[a]==1736) goto l27;
pile[v[22]]=DC; pile[WZ1]=jvj+38; 
(*f[1057])( );if(v[102]) goto l27;     /*LELT0(DC,jvj+38,DD)*/
DD=pile[WZ2]; 
pile[v[22]]=EX; pile[WZ1]=103; pile[WZ2]=jvj+38; 
(*f[35])( );     /*CHGC1(EX,103,jvj+38)*/
goto l28;
l26:pile[v[22]]=DC; pile[WZ1]=jvj+37; 
(*f[1058])( );if(v[102]) goto l23;     /*LFACT0(DC,jvj+37,DD)*/
DD=pile[WZ2]; 
pile[v[22]]=EX; pile[WZ1]=103; pile[WZ2]=jvj+37; 
(*f[35])( );     /*CHGC1(EX,103,jvj+37)*/
goto l28;
l29:if(x[jvj+35]!=incon) goto l30;
l35:x[EX]=DY=incon;
l34:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
l30:if(DD!=incon) goto l31;
goto l35;
l31:pile[v[22]]=1673; pile[WZ1]=jvj+35; pile[WZ2]=jvj+39; 
(*f[33])( );     /*FNDE0(1673,jvj+35,jvj+39)*/
for(a=x[jvj+39];a>0;a=t[a]) if(s[a]==1678) goto l32;
DY=DD;
goto l36;
l32:for(a=x[jvj+39];a>0;a=t[a]) if(s[a]==1678) goto l33;
goto l35;
l33:pile[v[22]]=1678; pile[WZ1]=jvj+35; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(1678,jvj+35,jvj+40)*/
pile[v[22]]=DD; pile[WZ1]=jvj+40; 
(*f[266])( );if(v[102]) goto l35;     /*FOBJ0(DD,jvj+40,D)*/
D=pile[WZ2]; 
pile[v[22]]=D; pile[WZ1]=jvj+41; 
(*f[1057])( );if(v[102]) goto l35;     /*LELT0(D,jvj+41,DY)*/
DY=pile[WZ2]; 
pile[v[22]]=EX; pile[WZ1]=1678; pile[WZ2]=jvj+41; 
(*f[35])( );     /*CHGC1(EX,1678,jvj+41)*/
goto l36;
l37:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+12; pile[WZ4]=jvj+18; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+12,jvj+18)*/
pile[v[22]]=EX; pile[WZ1]=111; pile[WZ2]=jvj+18; 
(*f[35])( );     /*CHGC1(EX,111,jvj+18)*/
pile[v[22]]=V40; pile[WZ1]=jvj+19; 
(*f[1372])( );if(v[102]) goto l15;     /*LFACTA0(V40,jvj+19,DY)*/
DY=pile[WZ2]; 
pile[v[22]]=EX; pile[WZ1]=102; pile[WZ2]=jvj+19; 
(*f[35])( );     /*CHGC1(EX,102,jvj+19)*/
goto l17;
}
