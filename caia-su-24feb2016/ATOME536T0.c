#include "dx.h"
void ATOME536T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V26=0,V11=0,V29=0;
int NNNI;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=36;
x[jvj+1]=20536;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3885&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNI=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=NNNI; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,NNNI,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]!=408)) goto l6;
pile[v[22]]=102; pile[WZ1]=NNNI; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,NNNI,jvj+7)*/
pile[v[22]]=111; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,jvj+7,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+8,jvj+9)*/
if((x[jvj+9]!=596)) goto l6;
x[jvj+10]=vo[16];z[jvj+10]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[1948])( );if(v[102]) goto l6;     /*FNDOND0(498,jvj+10,jvj+11)*/
pile[v[22]]=1182; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(1182,jvj+11,jvj+12)*/
if((68!=x[jvj+12])) goto l6;
x[jvj+2]=vo[14];z[jvj+2]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(642,jvj+2,V29)*/
V29=pile[WZ2]; 
x[jvj+3]=0 ;z[jvj+3]=0;
pile[v[22]]=929; 
(*f[1975])( );if(v[102]) goto l1;     /*FNDCND0(929,jvj+2,V26)*/
V26=pile[WZ2]; 
pile[v[22]]=jvj+3; pile[WZ1]=V26; 
(*f[207])( );     /*PLUE2(jvj+3,V26)*/
l1:pile[v[22]]=1006; pile[WZ1]=NNNI; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1006,NNNI,jvj+4)*/
l2:if((x[jvj+4]>0)) goto l3;
pile[v[22]]=102; pile[WZ1]=jvj+7; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,jvj+7,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=jvj+14; 
(*f[1446])( );     /*NONUL0(jvj+13,jvj+14)*/
if((x[jvj+14]==135)) goto l4;
l6:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l3:V11=s[x[jvj+4]];
pile[v[22]]=jvj+3; pile[WZ1]=V11; 
(*f[207])( );     /*PLUE2(jvj+3,V11)*/
x[jvj+4]=t[x[jvj+4]];
goto l2;
l4:pile[v[22]]=jvj+13; pile[WZ1]=jvj+15; 
(*f[255])( );     /*COPEXP0(jvj+13,jvj+15)*/
pile[v[22]]=103; pile[WZ1]=jvj+7; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(103,jvj+7,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=jvj+17; 
(*f[3873])( );if(v[102]) goto l6;     /*INFB0(jvj+16,jvj+17)*/
pile[v[22]]=103; pile[WZ1]=NNNI; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(103,NNNI,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=jvj+19; 
(*f[255])( );     /*COPEXP0(jvj+18,jvj+19)*/
pile[v[22]]=jvj+17; pile[WZ1]=jvj+20; 
(*f[1352])( );     /*POSITIF0(jvj+17,jvj+20)*/
if((x[jvj+20]==135)) goto l5;
goto l6;
l5:pile[v[22]]=jvj+17; pile[WZ1]=jvj+21; 
(*f[255])( );     /*COPEXP0(jvj+17,jvj+21)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=408; pile[WZ4]=jvj+24; 
(*f[181])( );     /*QUADRI2(100,20,101,408,jvj+24)*/
pile[WZ3]=596; pile[WZ4]=jvj+28; 
(*f[181])( );     /*QUADRI2(100,20,101,596,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=111; pile[WZ2]=jvj+29; 
(*f[54])( );     /*TRI1(jvj+28,111,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=jvj+21; pile[WZ2]=103; pile[WZ3]=jvj+30; 
(*f[58])( );     /*TRI3(jvj+29,jvj+21,103,jvj+30)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+15; pile[WZ4]=jvj+30; pile[WZ5]=jvj+27; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+15,jvj+30,jvj+27)*/
pile[v[22]]=jvj+24; pile[WZ1]=111; pile[WZ2]=jvj+25; 
(*f[54])( );     /*TRI1(jvj+24,111,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=jvj+19; pile[WZ2]=103; pile[WZ3]=jvj+26; 
(*f[58])( );     /*TRI3(jvj+25,jvj+19,103,jvj+26)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+27; pile[WZ4]=jvj+26; pile[WZ5]=jvj+22; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+27,jvj+26,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=1006; pile[WZ2]=jvj+3; 
(*f[34])( );     /*CHGC0(jvj+22,1006,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=NNNI; pile[WZ2]=110; pile[WZ3]=(-11593); pile[WZ4]=jvj+35; 
(*f[270])( );     /*QUADRI7(101,NNNI,110,(-11593),jvj+35)*/
pile[v[22]]=V29; pile[WZ1]=858; pile[WZ2]=jvj+31; 
(*f[46])( );     /*TRI0(V29,858,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+32; 
(*f[189])( );     /*TRI4(jvj+31,v[13],642,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=3885; pile[WZ2]=246; pile[WZ3]=jvj+33; 
(*f[189])( );     /*TRI4(jvj+32,3885,246,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=20536; pile[WZ2]=218; pile[WZ3]=jvj+34; 
(*f[58])( );     /*TRI3(jvj+33,20536,218,jvj+34)*/
pile[v[22]]=jvj+35; pile[WZ1]=(-20); pile[WZ2]=jvj+34; pile[WZ3]=159; pile[WZ4]=jvj+36; 
(*f[298])( );     /*TRIENS1(jvj+35,(-20),jvj+34,159,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+23; 
(*f[58])( );     /*TRI3(jvj+36,1,158,jvj+23)*/
pile[v[22]]=jvj+22; pile[WZ1]=jvj+23; 
(*f[1296])( );     /*NOUVCONTR0(jvj+22,jvj+23)*/
goto l6;
}
