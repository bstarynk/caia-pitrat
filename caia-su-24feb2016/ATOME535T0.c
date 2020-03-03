#include "dx.h"
void ATOME535T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V31=0,V11=0,V34=0,V13=0,V21=0,V12=0;
int NNNI;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=37;
x[jvj+1]=20535;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3883&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNI=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=NNNI; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,NNNI,jvj+12)*/
pile[v[22]]=101; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+12,jvj+13)*/
if((x[jvj+13]!=25)) goto l10;
x[jvj+9]=vo[14];z[jvj+9]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(642,jvj+9,V34)*/
V34=pile[WZ2]; 
x[jvj+10]=0 ;z[jvj+10]=0;
pile[v[22]]=929; 
(*f[1975])( );if(v[102]) goto l5;     /*FNDCND0(929,jvj+9,V31)*/
V31=pile[WZ2]; 
pile[v[22]]=jvj+10; pile[WZ1]=V31; 
(*f[207])( );     /*PLUE2(jvj+10,V31)*/
l5:pile[v[22]]=1006; pile[WZ1]=NNNI; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(1006,NNNI,jvj+11)*/
l6:if((x[jvj+11]>0)) goto l7;
x[jvj+14]=d[20];z[jvj+14]=0;
l8:if((x[jvj+14]<=0)) goto l10;
x[jvj+15]=s[x[jvj+14]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+14];
pile[v[22]]=jvj+15; pile[WZ1]=NNNI; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(jvj+15,NNNI,jvj+16)*/
pile[v[22]]=111; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,jvj+16,jvj+17)*/
pile[v[22]]=101; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+17,jvj+18)*/
if((x[jvj+18]!=486)) goto l9;
pile[v[22]]=107; pile[WZ1]=jvj+16; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(107,jvj+16,jvj+19)*/
for(i=x[jvj+19],V13=0;i>0;i=t[i],V13++)  ;
pile[v[22]]=268; pile[WZ1]=jvj+15; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(268,jvj+15,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=NNNI; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(jvj+20,NNNI,jvj+21)*/
pile[v[22]]=130; pile[WZ1]=jvj+21; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(130,jvj+21,V21)*/
V21=pile[WZ2]; 
if((V21!=0)) goto l9;
x[jvj+4]=0 ;z[jvj+4]=0;
x[jvj+37]=x[jvj+19] ;z[jvj+37]=z[jvj+19];
l1:if((x[jvj+37]>0)) goto l2;
for(i=x[jvj+4],V12=0;i>0;i=t[i],V12++)  ;
if((V12!=V13)) goto l9;
x[jvj+8]=0 ;z[jvj+8]=0;
l3:if((x[jvj+4]>0)) goto l4;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+24; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=111; pile[WZ2]=jvj+25; 
(*f[54])( );     /*TRI1(jvj+24,111,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=jvj+8; pile[WZ2]=107; pile[WZ3]=jvj+26; 
(*f[301])( );     /*TRI11(jvj+25,jvj+8,107,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+22; 
(*f[58])( );     /*TRI3(jvj+26,22,100,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=1006; pile[WZ2]=jvj+10; 
(*f[34])( );     /*CHGC0(jvj+22,1006,jvj+10)*/
pile[v[22]]=101; pile[WZ1]=NNNI; pile[WZ2]=110; pile[WZ3]=(-11593); pile[WZ4]=jvj+35; 
(*f[270])( );     /*QUADRI7(101,NNNI,110,(-11593),jvj+35)*/
pile[v[22]]=V34; pile[WZ1]=858; pile[WZ2]=jvj+31; 
(*f[46])( );     /*TRI0(V34,858,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+32; 
(*f[189])( );     /*TRI4(jvj+31,v[13],642,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=3883; pile[WZ2]=246; pile[WZ3]=jvj+33; 
(*f[189])( );     /*TRI4(jvj+32,3883,246,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=20535; pile[WZ2]=218; pile[WZ3]=jvj+34; 
(*f[58])( );     /*TRI3(jvj+33,20535,218,jvj+34)*/
pile[v[22]]=jvj+35; pile[WZ1]=(-20); pile[WZ2]=jvj+34; pile[WZ3]=159; pile[WZ4]=jvj+36; 
(*f[298])( );     /*TRIENS1(jvj+35,(-20),jvj+34,159,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+23; 
(*f[58])( );     /*TRI3(jvj+36,1,158,jvj+23)*/
pile[v[22]]=jvj+22; pile[WZ1]=jvj+23; 
(*f[1296])( );     /*NOUVCONTR0(jvj+22,jvj+23)*/
l9:x[jvj+14]=t[x[jvj+14]];
goto l8;
l2:x[jvj+2]=s[x[jvj+37]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+37];
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[255])( );     /*COPEXP0(jvj+2,jvj+3)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+27; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+27)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+29; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+29)*/
pile[v[22]]=jvj+27; pile[WZ1]=111; pile[WZ2]=jvj+28; 
(*f[54])( );     /*TRI1(jvj+27,111,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=jvj+29; pile[WZ2]=103; pile[WZ3]=jvj+30; 
(*f[58])( );     /*TRI3(jvj+28,jvj+29,103,jvj+30)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+3; pile[WZ4]=jvj+30; pile[WZ5]=jvj+5; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+3,jvj+30,jvj+5)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[522])( );     /*PLUB2(jvj+4,jvj+5)*/
x[jvj+37]=t[x[jvj+37]];
goto l1;
l4:x[jvj+6]=s[x[jvj+4]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+4];
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; 
(*f[255])( );     /*COPEXP0(jvj+6,jvj+7)*/
pile[v[22]]=jvj+8; 
(*f[68])( );     /*PLUE0(jvj+8,jvj+7)*/
x[jvj+4]=t[x[jvj+4]];
goto l3;
l7:V11=s[x[jvj+11]];
pile[v[22]]=jvj+10; pile[WZ1]=V11; 
(*f[207])( );     /*PLUE2(jvj+10,V11)*/
x[jvj+11]=t[x[jvj+11]];
goto l6;
l10:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
