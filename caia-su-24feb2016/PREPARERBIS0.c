#include "dx.h"
void PREPARERBIS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int DX=0,V14=0,V24=0,V25=0,V27=0;
int L;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=34;
x[jvj+1]=11574;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1912&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
L=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+10]=x[jvj+6]=x[jvj+3]=x[jvj+2]=incon;
pile[v[22]]=287; pile[WZ1]=L; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(287,L,jvj+2)*/
pile[v[22]]=319; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(319,jvj+2,jvj+3)*/
l1:pile[v[22]]=120; pile[WZ1]=jvj+2; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(120,jvj+2,jvj+4)*/
x[jvj+10]=x[jvj+4] ;z[jvj+10]=z[jvj+4];
l2:pile[v[22]]=102; pile[WZ1]=jvj+2; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,jvj+2,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+5,jvj+6)*/
l3:if(x[jvj+10]==incon) goto l4;
if((x[jvj+10]==250)) goto l4;
pile[v[22]]=L; pile[WZ1]=287; pile[WZ2]=jvj+10; 
(*f[35])( );     /*CHGC1(L,287,jvj+10)*/
l9:if(x[jvj+6]!=incon) goto l10;
l14:if(x[jvj+3]!=incon) goto l15;
l19:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l4:x[jvj+34]=incon;
pile[v[22]]=120; pile[WZ1]=L; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(120,L,jvj+7)*/
x[jvj+34]=x[jvj+7] ;z[jvj+34]=z[jvj+7];
l6:x[jvj+13]=x[jvj+34] ;z[jvj+13]=z[jvj+34];
pile[v[22]]=218; pile[WZ1]=L; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(218,L,jvj+8)*/
if((x[jvj+8]!=696)) goto l7;
pile[v[22]]=158; pile[WZ1]=1201; pile[WZ2]=218; pile[WZ3]=206; pile[WZ4]=jvj+9; 
(*f[181])( );     /*QUADRI2(158,1201,218,206,jvj+9)*/
pile[v[22]]=jvj+9; 
(*f[605])( );     /*MONITEUR0(jvj+9)*/
l7:if((x[jvj+13]==250)) goto l8;
x[jvj+12]=vo[13];z[jvj+12]=vz[13];
pile[v[22]]=jvj+12; pile[WZ1]=120; pile[WZ2]=jvj+13; 
(*f[35])( );     /*CHGC1(jvj+12,120,jvj+13)*/
goto l9;
l5:x[jvj+34]=250 ;z[jvj+34]=250;
goto l6;
l8:x[jvj+11]=vo[13];z[jvj+11]=vz[13];
pile[v[22]]=120; pile[WZ1]=jvj+11; 
(*f[71])( );     /*ENLV0(120,jvj+11)*/
goto l9;
l10:if((x[jvj+6]!=1196)) goto l14;
x[jvj+14]=vo[14];z[jvj+14]=vz[14];
pile[v[22]]=jvj+14; pile[WZ1]=893; pile[WZ2]=12; 
(*f[35])( );     /*CHGC1(jvj+14,893,12)*/
goto l14;
l12:x[jvj+33]=x[jvj+3] ;z[jvj+33]=z[jvj+3];
l20:pile[v[22]]=101; pile[WZ1]=jvj+33; pile[WZ2]=110; pile[WZ3]=V25; pile[WZ4]=jvj+31; 
(*f[270])( );     /*QUADRI7(101,jvj+33,110,V25,jvj+31)*/
pile[v[22]]=V27; pile[WZ1]=642; pile[WZ2]=jvj+28; 
(*f[46])( );     /*TRI0(V27,642,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=V24; pile[WZ2]=246; pile[WZ3]=jvj+29; 
(*f[189])( );     /*TRI4(jvj+28,V24,246,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=jvj+20; pile[WZ2]=218; pile[WZ3]=jvj+30; 
(*f[58])( );     /*TRI3(jvj+29,jvj+20,218,jvj+30)*/
pile[v[22]]=jvj+31; pile[WZ1]=(-20); pile[WZ2]=jvj+30; pile[WZ3]=159; pile[WZ4]=jvj+32; 
(*f[298])( );     /*TRIENS1(jvj+31,(-20),jvj+30,159,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=jvj+6; pile[WZ2]=158; pile[WZ3]=jvj+27; 
(*f[58])( );     /*TRI3(jvj+32,jvj+6,158,jvj+27)*/
pile[v[22]]=jvj+27; 
(*f[545])( );     /*AGIR0(jvj+27)*/
goto l19;
l13:V14=(-1);
l11:if((V14<0)) goto l18;
pile[v[22]]=1417; pile[WZ1]=jvj+3; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(1417,jvj+3,jvj+15)*/
for(a=x[jvj+15];a>0;a=t[a]) if(s[a]==V14) goto l18;
x[jvj+16]=vo[14];z[jvj+16]=vz[14];
pile[v[22]]=1545; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(1545,jvj+16,jvj+17)*/
for(a=x[jvj+17];a>0;a=t[a]) if(s[a]==V14) goto l18;
goto l19;
l15:if(x[jvj+6]!=incon) goto l16;
goto l19;
l16:if(x[jvj+2]!=incon) goto l17;
goto l19;
l17:if(x[jvj+6]!=44&&x[jvj+6]!=187&&x[jvj+6]!=696) goto l19;
pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(111,jvj+2,jvj+19)*/
pile[v[22]]=101; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(101,jvj+19,jvj+20)*/
x[jvj+21]=vo[12];z[jvj+21]=vz[12];
pile[v[22]]=901; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(901,jvj+21,jvj+22)*/
for(a=x[jvj+22];a>0;a=t[a]) if(s[a]==x[jvj+20]) goto l19;
x[jvj+23]=vo[13];z[jvj+23]=vz[13];
pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[33])( );     /*FNDE0(901,jvj+23,jvj+24)*/
for(a=x[jvj+24];a>0;a=t[a]) if(s[a]==x[jvj+20]) goto l19;
V14=incon;
pile[v[22]]=1547; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(1547,jvj+2,DX)*/
DX=pile[WZ2]; 
V14=DX;
goto l11;
l18:pile[v[22]]=103; pile[WZ1]=jvj+2; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(103,jvj+2,jvj+25)*/
pile[v[22]]=746; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(746,jvj+2,jvj+26)*/
pile[v[22]]=246; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(246,jvj+2,V24)*/
V24=pile[WZ2]; 
pile[v[22]]=140; pile[WZ1]=jvj+25; 
(*f[44])( );if(v[102]) goto l19;     /*FNDC1(140,jvj+25,V25)*/
V25=pile[WZ2]; 
pile[v[22]]=642; pile[WZ1]=jvj+26; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(642,jvj+26,V27)*/
V27=pile[WZ2]; 
x[jvj+33]=incon;
pile[v[22]]=319; pile[WZ1]=jvj+2; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(319,jvj+2,jvj+18)*/
x[jvj+33]=x[jvj+18] ;z[jvj+33]=z[jvj+18];
goto l20;
}
