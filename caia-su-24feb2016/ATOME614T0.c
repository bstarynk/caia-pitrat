#include "dx.h"
void ATOME614T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V43=0,V12=0,V46=0,V23=0,V14=0,V13=0;
int NNNI;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=46;
x[jvj+1]=20614;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3844&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNI=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=NNNI; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(111,NNNI,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]!=25)) goto l17;
x[jvj+2]=vo[14];z[jvj+2]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(642,jvj+2,V46)*/
V46=pile[WZ2]; 
x[jvj+3]=0 ;z[jvj+3]=0;
pile[v[22]]=929; 
(*f[1975])( );if(v[102]) goto l1;     /*FNDCND0(929,jvj+2,V43)*/
V43=pile[WZ2]; 
pile[v[22]]=jvj+3; pile[WZ1]=V43; 
(*f[207])( );     /*PLUE2(jvj+3,V43)*/
l1:pile[v[22]]=1006; pile[WZ1]=NNNI; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1006,NNNI,jvj+4)*/
l2:if((x[jvj+4]>0)) goto l3;
x[jvj+7]=d[20];z[jvj+7]=0;
l4:if((x[jvj+7]<=0)) goto l17;
x[jvj+8]=s[x[jvj+7]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+7];
pile[v[22]]=268; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(268,jvj+8,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=NNNI; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+9,NNNI,jvj+10)*/
pile[v[22]]=111; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,jvj+10,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+11,jvj+12)*/
if((x[jvj+12]!=485)) goto l5;
pile[v[22]]=107; pile[WZ1]=jvj+10; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(107,jvj+10,jvj+13)*/
for(i=x[jvj+13],V23=0;i>0;i=t[i],V23++)  ;
if((V23!=2)) goto l5;
pile[v[22]]=jvj+8; pile[WZ1]=NNNI; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+8,NNNI,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; 
(*f[1446])( );     /*NONUL0(jvj+14,jvj+15)*/
if((x[jvj+15]==135)) goto l6;
l5:x[jvj+7]=t[x[jvj+7]];
goto l4;
l3:V12=s[x[jvj+4]];
pile[v[22]]=jvj+3; pile[WZ1]=V12; 
(*f[207])( );     /*PLUE2(jvj+3,V12)*/
x[jvj+4]=t[x[jvj+4]];
goto l2;
l6:pile[v[22]]=jvj+14; pile[WZ1]=jvj+16; 
(*f[3534])( );if(v[102]) goto l5;     /*ENSFCT0(jvj+14,jvj+16)*/
x[jvj+46]=x[jvj+13] ;z[jvj+46]=z[jvj+13];
l7:if((x[jvj+46]<=0)) goto l5;
x[jvj+42]=s[x[jvj+46]] ;z[jvj+42]=(x[jvj+42]<=sepcte) ? x[jvj+42] : z[jvj+46];
x[jvj+17]=x[jvj+42] ;z[jvj+17]=z[jvj+42];
pile[v[22]]=jvj+17; pile[WZ1]=jvj+18; 
(*f[3534])( );if(v[102]) goto l8;     /*ENSFCT0(jvj+17,jvj+18)*/
x[jvj+43]=x[jvj+13] ;z[jvj+43]=z[jvj+13];
l9:if((x[jvj+43]<=0)) goto l8;
x[jvj+19]=s[x[jvj+43]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+43];
if((x[jvj+42]==x[jvj+19])) goto l10;
pile[v[22]]=130; pile[WZ1]=jvj+19; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(130,jvj+19,V14)*/
V14=pile[WZ2]; 
V13=abs(V14);
if((V13!=1)) goto l10;
x[jvj+44]=x[jvj+16] ;z[jvj+44]=z[jvj+16];
l11:if((x[jvj+44]<=0)) goto l10;
x[jvj+20]=s[x[jvj+44]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+44];
pile[v[22]]=100; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(100,jvj+20,jvj+21)*/
if((x[jvj+21]==484)) goto l13;
if((x[jvj+21]==41)) goto l13;
l12:x[jvj+44]=t[x[jvj+44]];
goto l11;
l8:x[jvj+46]=t[x[jvj+46]];
goto l7;
l10:x[jvj+43]=t[x[jvj+43]];
goto l9;
l13:pile[v[22]]=jvj+20; pile[WZ1]=jvj+22; 
(*f[255])( );     /*COPEXP0(jvj+20,jvj+22)*/
x[jvj+45]=x[jvj+18] ;z[jvj+45]=z[jvj+18];
l14:if((x[jvj+45]<=0)) goto l12;
x[jvj+23]=s[x[jvj+45]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+45];
pile[v[22]]=100; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(100,jvj+23,jvj+24)*/
if((x[jvj+24]==484)) goto l16;
if((x[jvj+24]==41)) goto l16;
l15:x[jvj+45]=t[x[jvj+45]];
goto l14;
l16:pile[v[22]]=jvj+23; pile[WZ1]=jvj+25; 
(*f[255])( );     /*COPEXP0(jvj+23,jvj+25)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+28; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+28)*/
pile[WZ3]=636; pile[WZ4]=jvj+33; 
(*f[181])( );     /*QUADRI2(100,20,101,636,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=111; pile[WZ2]=jvj+34; 
(*f[54])( );     /*TRI1(jvj+33,111,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=jvj+25; pile[WZ2]=103; pile[WZ3]=jvj+35; 
(*f[58])( );     /*TRI3(jvj+34,jvj+25,103,jvj+35)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+22; pile[WZ4]=jvj+35; pile[WZ5]=jvj+32; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+22,jvj+35,jvj+32)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+30; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+30)*/
pile[v[22]]=jvj+28; pile[WZ1]=111; pile[WZ2]=jvj+29; 
(*f[54])( );     /*TRI1(jvj+28,111,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=jvj+30; pile[WZ2]=103; pile[WZ3]=jvj+31; 
(*f[58])( );     /*TRI3(jvj+29,jvj+30,103,jvj+31)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+32; pile[WZ4]=jvj+31; pile[WZ5]=jvj+26; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+32,jvj+31,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=1006; pile[WZ2]=jvj+3; 
(*f[34])( );     /*CHGC0(jvj+26,1006,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=NNNI; pile[WZ2]=110; pile[WZ3]=(-11593); pile[WZ4]=jvj+40; 
(*f[270])( );     /*QUADRI7(101,NNNI,110,(-11593),jvj+40)*/
pile[v[22]]=V46; pile[WZ1]=858; pile[WZ2]=jvj+36; 
(*f[46])( );     /*TRI0(V46,858,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+37; 
(*f[189])( );     /*TRI4(jvj+36,v[13],642,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=3844; pile[WZ2]=246; pile[WZ3]=jvj+38; 
(*f[189])( );     /*TRI4(jvj+37,3844,246,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=20614; pile[WZ2]=218; pile[WZ3]=jvj+39; 
(*f[58])( );     /*TRI3(jvj+38,20614,218,jvj+39)*/
pile[v[22]]=jvj+40; pile[WZ1]=(-20); pile[WZ2]=jvj+39; pile[WZ3]=159; pile[WZ4]=jvj+41; 
(*f[298])( );     /*TRIENS1(jvj+40,(-20),jvj+39,159,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+27; 
(*f[58])( );     /*TRI3(jvj+41,1,158,jvj+27)*/
pile[v[22]]=jvj+26; pile[WZ1]=jvj+27; 
(*f[1296])( );     /*NOUVCONTR0(jvj+26,jvj+27)*/
goto l15;
l17:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
