#include "dx.h"
void ATOME543T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V25=0,V15=0,V28=0;
int NNNI;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=52;
x[jvj+1]=20543;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3823&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNI=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=NNNI; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(111,NNNI,jvj+9)*/
pile[v[22]]=101; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+9,jvj+10)*/
if((x[jvj+10]!=25)) goto l14;
x[jvj+6]=vo[14];z[jvj+6]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(642,jvj+6,V28)*/
V28=pile[WZ2]; 
x[jvj+7]=0 ;z[jvj+7]=0;
pile[v[22]]=929; 
(*f[1975])( );if(v[102]) goto l8;     /*FNDCND0(929,jvj+6,V25)*/
V25=pile[WZ2]; 
pile[v[22]]=jvj+7; pile[WZ1]=V25; 
(*f[207])( );     /*PLUE2(jvj+7,V25)*/
l8:pile[v[22]]=1006; pile[WZ1]=NNNI; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(1006,NNNI,jvj+8)*/
l9:if((x[jvj+8]>0)) goto l10;
x[jvj+11]=d[20];z[jvj+11]=0;
l11:if((x[jvj+11]<=0)) goto l14;
x[jvj+12]=s[x[jvj+11]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+11];
pile[v[22]]=268; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(268,jvj+12,jvj+13)*/
pile[v[22]]=jvj+12; pile[WZ1]=NNNI; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(jvj+12,NNNI,jvj+14)*/
pile[v[22]]=jvj+13; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(jvj+13,NNNI,jvj+15)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+16; 
(*f[1967])( );     /*SETFACTORS0(jvj+14,jvj+16)*/
pile[v[22]]=jvj+15; pile[WZ1]=jvj+17; 
(*f[1967])( );     /*SETFACTORS0(jvj+15,jvj+17)*/
x[jvj+51]=x[jvj+16] ;z[jvj+51]=z[jvj+16];
x[jvj+52]=x[jvj+17] ;z[jvj+52]=z[jvj+17];
x[jvj+50]=x[jvj+51] ;z[jvj+50]=z[jvj+51];
l1:if((x[jvj+50]<=0)) goto l12;
x[jvj+18]=s[x[jvj+50]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+50];
for(a=x[jvj+52];a>0;a=t[a]) if(s[a]==x[jvj+18]) goto l13;
x[jvj+50]=t[x[jvj+50]];
goto l1;
l3:x[jvj+3]=s[x[jvj+51]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+51];
if((x[jvj+3]==x[jvj+18])) goto l4;
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[68])( );     /*PLUE0(jvj+2,jvj+3)*/
l4:x[jvj+51]=t[x[jvj+51]];
l2:if((x[jvj+51]>0)) goto l3;
pile[v[22]]=jvj+2; pile[WZ1]=jvj+20; 
(*f[299])( );     /*COPEL0(jvj+2,jvj+20)*/
x[jvj+4]=0 ;z[jvj+4]=0;
l5:if((x[jvj+52]>0)) goto l6;
pile[v[22]]=jvj+4; pile[WZ1]=jvj+21; 
(*f[299])( );     /*COPEL0(jvj+4,jvj+21)*/
x[jvj+31]=x[jvj+19] ;z[jvj+31]=z[jvj+19];
x[jvj+39]=x[jvj+20] ;z[jvj+39]=z[jvj+20];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+24; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+24)*/
pile[WZ3]=25; pile[WZ4]=jvj+27; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+27)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+29; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+29)*/
pile[v[22]]=jvj+27; pile[WZ1]=111; pile[WZ2]=jvj+28; 
(*f[54])( );     /*TRI1(jvj+27,111,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=jvj+29; pile[WZ2]=103; pile[WZ3]=jvj+30; 
(*f[58])( );     /*TRI3(jvj+28,jvj+29,103,jvj+30)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+31; pile[WZ4]=jvj+30; pile[WZ5]=jvj+25; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+31,jvj+30,jvj+25)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+32; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+32)*/
pile[WZ3]=486; pile[WZ4]=jvj+37; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=111; pile[WZ2]=jvj+38; 
(*f[54])( );     /*TRI1(jvj+37,111,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=jvj+39; pile[WZ2]=107; pile[WZ3]=jvj+40; 
(*f[301])( );     /*TRI11(jvj+38,jvj+39,107,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+36; 
(*f[58])( );     /*TRI3(jvj+40,22,100,jvj+36)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+41; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=111; pile[WZ2]=jvj+42; 
(*f[54])( );     /*TRI1(jvj+41,111,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=jvj+21; pile[WZ2]=107; pile[WZ3]=jvj+43; 
(*f[301])( );     /*TRI11(jvj+42,jvj+21,107,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+34; 
(*f[58])( );     /*TRI3(jvj+43,22,100,jvj+34)*/
pile[v[22]]=jvj+32; pile[WZ1]=111; pile[WZ2]=jvj+33; 
(*f[54])( );     /*TRI1(jvj+32,111,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=jvj+34; pile[WZ2]=103; pile[WZ3]=jvj+35; 
(*f[58])( );     /*TRI3(jvj+33,jvj+34,103,jvj+35)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+36; pile[WZ4]=jvj+35; pile[WZ5]=jvj+26; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+36,jvj+35,jvj+26)*/
pile[WZ2]=111; pile[WZ3]=jvj+24; pile[WZ4]=jvj+22; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+24,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=107; pile[WZ2]=jvj+25; 
(*f[36])( );     /*PLUSC0(jvj+22,107,jvj+25)*/
pile[WZ2]=jvj+26; 
(*f[36])( );     /*PLUSC0(jvj+22,107,jvj+26)*/
pile[WZ1]=1006; pile[WZ2]=jvj+7; 
(*f[34])( );     /*CHGC0(jvj+22,1006,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=NNNI; pile[WZ2]=110; pile[WZ3]=(-11593); pile[WZ4]=jvj+48; 
(*f[270])( );     /*QUADRI7(101,NNNI,110,(-11593),jvj+48)*/
pile[v[22]]=V28; pile[WZ1]=858; pile[WZ2]=jvj+44; 
(*f[46])( );     /*TRI0(V28,858,jvj+44)*/
pile[v[22]]=jvj+44; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+45; 
(*f[189])( );     /*TRI4(jvj+44,v[13],642,jvj+45)*/
pile[v[22]]=jvj+45; pile[WZ1]=3823; pile[WZ2]=246; pile[WZ3]=jvj+46; 
(*f[189])( );     /*TRI4(jvj+45,3823,246,jvj+46)*/
pile[v[22]]=jvj+46; pile[WZ1]=20543; pile[WZ2]=218; pile[WZ3]=jvj+47; 
(*f[58])( );     /*TRI3(jvj+46,20543,218,jvj+47)*/
pile[v[22]]=jvj+48; pile[WZ1]=(-20); pile[WZ2]=jvj+47; pile[WZ3]=159; pile[WZ4]=jvj+49; 
(*f[298])( );     /*TRIENS1(jvj+48,(-20),jvj+47,159,jvj+49)*/
pile[v[22]]=jvj+49; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+23; 
(*f[58])( );     /*TRI3(jvj+49,1,158,jvj+23)*/
pile[v[22]]=jvj+22; pile[WZ1]=jvj+23; 
(*f[1296])( );     /*NOUVCONTR0(jvj+22,jvj+23)*/
l12:x[jvj+11]=t[x[jvj+11]];
goto l11;
l6:x[jvj+5]=s[x[jvj+52]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+52];
if((x[jvj+5]==x[jvj+18])) goto l7;
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[68])( );     /*PLUE0(jvj+4,jvj+5)*/
l7:x[jvj+52]=t[x[jvj+52]];
goto l5;
l10:V15=s[x[jvj+8]];
pile[v[22]]=jvj+7; pile[WZ1]=V15; 
(*f[207])( );     /*PLUE2(jvj+7,V15)*/
x[jvj+8]=t[x[jvj+8]];
goto l9;
l13:pile[v[22]]=jvj+18; pile[WZ1]=jvj+19; 
(*f[255])( );     /*COPEXP0(jvj+18,jvj+19)*/
x[jvj+2]=0 ;z[jvj+2]=0;
goto l2;
l14:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
