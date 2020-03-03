#include "dx.h"
void ATOME618T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V58=0,V17=0,V64=0,V18=0,V65=0,V62=0,V34=0,V46=0,F=0;
int NNNI;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=54;
x[jvj+1]=20618;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3925&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNI=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=NNNI; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(100,NNNI,jvj+7)*/
if((x[jvj+7]!=22)) goto l21;
pile[v[22]]=111; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(111,NNNI,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(101,jvj+8,jvj+9)*/
pile[v[22]]=1939; pile[WZ1]=145; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(1939,145,jvj+10)*/
for(a=x[jvj+10];a>0;a=t[a]) if(s[a]==x[jvj+9]) goto l7;
l21:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l1:x[jvj+3]=0 ;z[jvj+3]=0;
pile[v[22]]=929; pile[WZ1]=jvj+2; 
(*f[1975])( );if(v[102]) goto l2;     /*FNDCND0(929,jvj+2,V58)*/
V58=pile[WZ2]; 
pile[v[22]]=jvj+3; pile[WZ1]=V58; 
(*f[207])( );     /*PLUE2(jvj+3,V58)*/
l2:pile[v[22]]=1006; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(1006,jvj+4,jvj+5)*/
V64=x[jvj+5];
l3:if((V64>0)) goto l4;
pile[v[22]]=1006; pile[WZ1]=NNNI; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(1006,NNNI,jvj+6)*/
V65=x[jvj+6];
l5:if((V65>0)) goto l6;
x[jvj+53]=x[jvj+25] ;z[jvj+53]=z[jvj+25];
l10:if((x[jvj+53]<=0)) goto l9;
x[jvj+49]=s[x[jvj+53]] ;z[jvj+49]=(x[jvj+49]<=sepcte) ? x[jvj+49] : z[jvj+53];
x[jvj+29]=x[jvj+49] ;z[jvj+29]=z[jvj+49];
pile[v[22]]=jvj+29; pile[WZ1]=jvj+30; 
(*f[255])( );     /*COPEXP0(jvj+29,jvj+30)*/
x[jvj+50]=x[jvj+25] ;z[jvj+50]=z[jvj+25];
l11:if((x[jvj+50]>0)) goto l12;
x[jvj+53]=t[x[jvj+53]];
goto l10;
l4:V17=s[V64];
pile[v[22]]=jvj+3; pile[WZ1]=V17; 
(*f[207])( );     /*PLUE2(jvj+3,V17)*/
V64=t[V64];
goto l3;
l6:V18=s[V65];
pile[v[22]]=jvj+3; pile[WZ1]=V18; 
(*f[207])( );     /*PLUE2(jvj+3,V18)*/
V65=t[V65];
goto l5;
l7:x[jvj+2]=vo[14];z[jvj+2]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(642,jvj+2,V62)*/
V62=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=NNNI; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(102,NNNI,jvj+11)*/
pile[v[22]]=100; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(100,jvj+11,jvj+12)*/
if((x[jvj+12]!=484)) goto l21;
pile[v[22]]=103; pile[WZ1]=NNNI; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(103,NNNI,jvj+13)*/
pile[v[22]]=1940; pile[WZ1]=145; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(1940,145,jvj+14)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+15; 
(*f[200])( );if(v[102]) goto l21;     /*NDD0(jvj+11,jvj+15)*/
pile[v[22]]=509; pile[WZ2]=jvj+16; 
(*f[1969])( );     /*FNDEND0(509,jvj+15,jvj+16)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+17; 
(*f[1352])( );     /*POSITIF0(jvj+11,jvj+17)*/
if((x[jvj+17]==135)) goto l8;
goto l21;
l12:x[jvj+31]=s[x[jvj+50]] ;z[jvj+31]=(x[jvj+31]<=sepcte) ? x[jvj+31] : z[jvj+50];
if((x[jvj+49]==x[jvj+31])) goto l13;
pile[v[22]]=jvj+11; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[760])( );     /*MEMEX0(jvj+11,jvj+31,jvj+32)*/
if((x[jvj+32]==135)) goto l15;
l13:x[jvj+50]=t[x[jvj+50]];
goto l11;
l15:x[jvj+54]=x[jvj+26] ;z[jvj+54]=z[jvj+26];
l14:if((x[jvj+54]<=0)) goto l13;
x[jvj+51]=s[x[jvj+54]] ;z[jvj+51]=(x[jvj+51]<=sepcte) ? x[jvj+51] : z[jvj+54];
x[jvj+33]=x[jvj+51] ;z[jvj+33]=z[jvj+51];
pile[v[22]]=jvj+33; pile[WZ1]=jvj+34; 
(*f[1352])( );     /*POSITIF0(jvj+33,jvj+34)*/
if((x[jvj+34]==135)) goto l17;
l16:x[jvj+54]=t[x[jvj+54]];
goto l14;
l17:pile[v[22]]=jvj+33; pile[WZ1]=jvj+35; 
(*f[255])( );     /*COPEXP0(jvj+33,jvj+35)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=30; pile[WZ4]=jvj+40; 
(*f[181])( );     /*QUADRI2(100,20,101,30,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=111; pile[WZ2]=jvj+41; 
(*f[54])( );     /*TRI1(jvj+40,111,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=jvj+35; pile[WZ2]=103; pile[WZ3]=jvj+42; 
(*f[58])( );     /*TRI3(jvj+41,jvj+35,103,jvj+42)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+30; pile[WZ4]=jvj+42; pile[WZ5]=jvj+38; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+30,jvj+42,jvj+38)*/
x[jvj+52]=x[jvj+26] ;z[jvj+52]=z[jvj+26];
l18:if((x[jvj+52]<=0)) goto l16;
x[jvj+36]=s[x[jvj+52]] ;z[jvj+36]=(x[jvj+36]<=sepcte) ? x[jvj+36] : z[jvj+52];
if((x[jvj+51]==x[jvj+36])) goto l19;
pile[v[22]]=jvj+13; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[760])( );     /*MEMEX0(jvj+13,jvj+36,jvj+37)*/
if((x[jvj+37]==135)) goto l20;
l19:x[jvj+52]=t[x[jvj+52]];
goto l18;
l20:pile[v[22]]=jvj+38; pile[WZ1]=1006; pile[WZ2]=jvj+3; 
(*f[34])( );     /*CHGC0(jvj+38,1006,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=NNNI; pile[WZ2]=110; pile[WZ3]=(-11593); pile[WZ4]=jvj+47; 
(*f[270])( );     /*QUADRI7(101,NNNI,110,(-11593),jvj+47)*/
pile[v[22]]=V62; pile[WZ1]=858; pile[WZ2]=jvj+43; 
(*f[46])( );     /*TRI0(V62,858,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+44; 
(*f[189])( );     /*TRI4(jvj+43,v[13],642,jvj+44)*/
pile[v[22]]=jvj+44; pile[WZ1]=3925; pile[WZ2]=246; pile[WZ3]=jvj+45; 
(*f[189])( );     /*TRI4(jvj+44,3925,246,jvj+45)*/
pile[v[22]]=jvj+45; pile[WZ1]=20618; pile[WZ2]=218; pile[WZ3]=jvj+46; 
(*f[58])( );     /*TRI3(jvj+45,20618,218,jvj+46)*/
pile[v[22]]=jvj+47; pile[WZ1]=(-20); pile[WZ2]=jvj+46; pile[WZ3]=159; pile[WZ4]=jvj+48; 
(*f[298])( );     /*TRIENS1(jvj+47,(-20),jvj+46,159,jvj+48)*/
pile[v[22]]=jvj+48; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+39; 
(*f[58])( );     /*TRI3(jvj+48,1,158,jvj+39)*/
pile[v[22]]=jvj+38; pile[WZ1]=jvj+39; 
(*f[1296])( );     /*NOUVCONTR0(jvj+38,jvj+39)*/
goto l19;
l8:if((x[jvj+16]<=0)) goto l21;
x[jvj+4]=s[x[jvj+16]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+16];
pile[v[22]]=100; pile[WZ1]=jvj+4; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(100,jvj+4,jvj+18)*/
if((x[jvj+18]!=22)) goto l9;
pile[v[22]]=102; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(102,jvj+4,jvj+19)*/
pile[v[22]]=111; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,jvj+19,jvj+20)*/
pile[v[22]]=101; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+20,jvj+21)*/
if((x[jvj+21]!=486)) goto l9;
pile[v[22]]=103; pile[WZ1]=jvj+4; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(103,jvj+4,jvj+22)*/
pile[v[22]]=111; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,jvj+22,jvj+23)*/
pile[v[22]]=101; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+23,jvj+24)*/
if((x[jvj+24]!=486)) goto l9;
pile[v[22]]=107; pile[WZ1]=jvj+19; pile[WZ2]=jvj+25; 
(*f[33])( );     /*FNDE0(107,jvj+19,jvj+25)*/
for(i=x[jvj+25],V34=0;i>0;i=t[i],V34++)  ;
if((V34!=2)) goto l9;
pile[WZ1]=jvj+22; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(107,jvj+22,jvj+26)*/
for(i=x[jvj+26],V46=0;i>0;i=t[i],V46++)  ;
if((V46!=2)) goto l9;
pile[v[22]]=111; pile[WZ1]=jvj+4; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,jvj+4,jvj+27)*/
pile[v[22]]=101; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+27,jvj+28)*/
F=x[jvj+28];
for(a=x[jvj+14];a>0;a=t[a]) if(s[a]==F) goto l1;
l9:x[jvj+16]=t[x[jvj+16]];
goto l8;
}
