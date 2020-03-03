#include "dx.h"
void ATOME140T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V15=0,V48=0,V52=0,L=0,V57=0,V34=0,P=0;
int R;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=53;
x[jvj+1]=20140;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3580&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(111,R,jvj+27)*/
pile[v[22]]=101; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+27,jvj+28)*/
if((x[jvj+28]!=55)) goto l14;
pile[v[22]]=107; pile[WZ1]=R; pile[WZ2]=jvj+29; 
(*f[33])( );     /*FNDE0(107,R,jvj+29)*/
if((x[jvj+29]<=0)) goto l14;
x[jvj+30]=s[x[jvj+29]] ;z[jvj+30]=(x[jvj+30]<=sepcte) ? x[jvj+30] : z[jvj+29];
pile[v[22]]=111; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(111,jvj+30,jvj+31)*/
pile[v[22]]=101; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+31,jvj+32)*/
if((x[jvj+32]!=48)) goto l14;
pile[v[22]]=107; pile[WZ1]=jvj+30; pile[WZ2]=jvj+33; 
(*f[33])( );     /*FNDE0(107,jvj+30,jvj+33)*/
x[jvj+34]=vo[14];z[jvj+34]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+34; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(642,jvj+34,V57)*/
V57=pile[WZ2]; 
pile[v[22]]=1294; pile[WZ1]=R; pile[WZ2]=jvj+35; 
(*f[33])( );     /*FNDE0(1294,R,jvj+35)*/
for(a=x[jvj+35];a>0;a=t[a]) if(s[a]==1311) goto l12;
l14:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l4:x[jvj+2]=s[x[jvj+51]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+51];
pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(111,jvj+2,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+4]!=48)) goto l13;
pile[v[22]]=107; pile[WZ1]=jvj+2; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(107,jvj+2,jvj+5)*/
x[jvj+50]=x[jvj+5] ;z[jvj+50]=z[jvj+5];
l1:if((x[jvj+50]<=0)) goto l13;
x[jvj+6]=s[x[jvj+50]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+50];
pile[v[22]]=111; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,jvj+6,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+7,jvj+8)*/
if((x[jvj+8]!=1280)) goto l2;
pile[v[22]]=103; pile[WZ1]=jvj+6; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(103,jvj+6,jvj+9)*/
pile[v[22]]=130; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(130,jvj+9,V15)*/
V15=pile[WZ2]; 
if((P!=V15)) goto l2;
pile[v[22]]=160; pile[WZ1]=jvj+6; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(160,jvj+6,jvj+10)*/
pile[v[22]]=100; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,jvj+10,jvj+11)*/
if((x[jvj+11]!=41)) goto l2;
pile[v[22]]=102; pile[WZ1]=jvj+6; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(102,jvj+6,jvj+12)*/
pile[v[22]]=jvj+13; pile[WZ1]=jvj+12; pile[WZ2]=jvj+14; 
(*f[760])( );     /*MEMEX0(jvj+13,jvj+12,jvj+14)*/
if((x[jvj+14]==135)) goto l5;
l2:x[jvj+50]=t[x[jvj+50]];
goto l1;
l5:x[jvj+51]=t[x[jvj+51]];
l3:if((x[jvj+51]>0)) goto l4;
x[jvj+26]=0 ;z[jvj+26]=0;
x[jvj+52]=x[jvj+29] ;z[jvj+52]=z[jvj+29];
l6:if((x[jvj+52]>0)) goto l7;
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+48; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+48)*/
pile[v[22]]=V57; pile[WZ1]=858; pile[WZ2]=jvj+44; 
(*f[46])( );     /*TRI0(V57,858,jvj+44)*/
pile[v[22]]=jvj+44; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+45; 
(*f[189])( );     /*TRI4(jvj+44,v[13],642,jvj+45)*/
pile[v[22]]=jvj+45; pile[WZ1]=3580; pile[WZ2]=246; pile[WZ3]=jvj+46; 
(*f[189])( );     /*TRI4(jvj+45,3580,246,jvj+46)*/
pile[v[22]]=jvj+46; pile[WZ1]=20140; pile[WZ2]=218; pile[WZ3]=jvj+47; 
(*f[58])( );     /*TRI3(jvj+46,20140,218,jvj+47)*/
pile[v[22]]=jvj+48; pile[WZ1]=(-20); pile[WZ2]=jvj+47; pile[WZ3]=159; pile[WZ4]=jvj+49; 
(*f[298])( );     /*TRIENS1(jvj+48,(-20),jvj+47,159,jvj+49)*/
pile[v[22]]=jvj+49; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+43; 
(*f[58])( );     /*TRI3(jvj+49,1,158,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=jvj+13; pile[WZ2]=P; pile[WZ3]=jvj+26; 
(*f[3501])( );     /*AFP1(jvj+43,jvj+13,P,jvj+26)*/
l13:x[jvj+33]=t[x[jvj+33]];
l12:if((x[jvj+33]<=0)) goto l14;
x[jvj+36]=s[x[jvj+33]] ;z[jvj+36]=(x[jvj+36]<=sepcte) ? x[jvj+36] : z[jvj+33];
pile[v[22]]=111; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(111,jvj+36,jvj+37)*/
pile[v[22]]=101; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(101,jvj+37,jvj+38)*/
if((x[jvj+38]!=1280)) goto l13;
pile[v[22]]=103; pile[WZ1]=jvj+36; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(103,jvj+36,jvj+39)*/
pile[v[22]]=130; pile[WZ1]=jvj+39; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(130,jvj+39,V34)*/
V34=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+36; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(102,jvj+36,jvj+13)*/
pile[v[22]]=100; pile[WZ1]=jvj+13; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(100,jvj+13,jvj+40)*/
if((x[jvj+40]!=484)) goto l13;
pile[v[22]]=160; pile[WZ1]=jvj+36; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(160,jvj+36,jvj+41)*/
pile[v[22]]=100; pile[WZ1]=jvj+41; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(100,jvj+41,jvj+42)*/
if((x[jvj+42]!=41)) goto l13;
P=V34;
x[jvj+51]=x[jvj+29] ;z[jvj+51]=z[jvj+29];
goto l3;
l7:x[jvj+15]=s[x[jvj+52]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+52];
pile[v[22]]=111; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,jvj+15,jvj+16)*/
pile[v[22]]=101; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+16,jvj+17)*/
if((x[jvj+17]!=48)) goto l8;
pile[v[22]]=107; pile[WZ1]=jvj+15; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(107,jvj+15,jvj+18)*/
x[jvj+53]=x[jvj+18] ;z[jvj+53]=z[jvj+18];
l9:if((x[jvj+53]<=0)) goto l8;
x[jvj+19]=s[x[jvj+53]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+53];
pile[v[22]]=111; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,jvj+19,jvj+20)*/
pile[v[22]]=101; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+20,jvj+21)*/
if((x[jvj+21]!=1280)) goto l10;
pile[v[22]]=103; pile[WZ1]=jvj+19; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(103,jvj+19,jvj+22)*/
pile[v[22]]=130; pile[WZ1]=jvj+22; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(130,jvj+22,V48)*/
V48=pile[WZ2]; 
if((P!=V48)) goto l10;
pile[v[22]]=160; pile[WZ1]=jvj+19; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(160,jvj+19,jvj+23)*/
pile[v[22]]=130; pile[WZ1]=jvj+23; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(130,jvj+23,V52)*/
V52=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+19; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(102,jvj+19,jvj+24)*/
pile[v[22]]=jvj+13; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[760])( );     /*MEMEX0(jvj+13,jvj+24,jvj+25)*/
if((x[jvj+25]==135)) goto l11;
l10:x[jvj+53]=t[x[jvj+53]];
goto l9;
l8:x[jvj+52]=t[x[jvj+52]];
goto l6;
l11:L=V52;
pile[v[22]]=jvj+26; pile[WZ1]=L; 
(*f[207])( );     /*PLUE2(jvj+26,L)*/
goto l10;
}
