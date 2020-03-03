#include "dx.h"
void ATOME102T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V69=0,V19=0,V24=0,V48=0,V32=0,K=0,V56=0;
int R,RR;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=55;
x[jvj+1]=20102;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3609&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; RR=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(111,R,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(101,jvj+7,jvj+8)*/
if((x[jvj+8]!=25)) goto l17;
pile[v[22]]=111; pile[WZ1]=RR; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(111,RR,jvj+9)*/
pile[v[22]]=101; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(101,jvj+9,jvj+10)*/
if((x[jvj+10]!=25)) goto l17;
x[jvj+11]=vo[14];z[jvj+11]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(642,jvj+11,V69)*/
V69=pile[WZ2]; 
x[jvj+5]=0 ;z[jvj+5]=0;
pile[v[22]]=R; pile[WZ1]=jvj+3; 
(*f[887])( );     /*VARND0(R,jvj+3)*/
pile[v[22]]=RR; pile[WZ1]=jvj+4; 
(*f[887])( );     /*VARND0(RR,jvj+4)*/
l1:if((x[jvj+3]>0)) goto l2;
for(i=x[jvj+5],V19=0;i>0;i=t[i],V19++)  ;
if((V19<2)) goto l17;
x[jvj+12]=d[20];z[jvj+12]=0;
l5:if((x[jvj+12]<=0)) goto l17;
x[jvj+13]=s[x[jvj+12]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+12];
pile[v[22]]=268; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(268,jvj+13,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=R; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(jvj+14,R,jvj+15)*/
pile[v[22]]=111; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,jvj+15,jvj+16)*/
pile[v[22]]=101; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+16,jvj+17)*/
if((x[jvj+17]!=485)) goto l6;
pile[v[22]]=107; pile[WZ1]=jvj+15; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(107,jvj+15,jvj+18)*/
for(i=x[jvj+18],V24=0;i>0;i=t[i],V24++)  ;
if((V24!=2)) goto l6;
pile[v[22]]=jvj+13; pile[WZ1]=R; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(jvj+13,R,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; 
(*f[255])( );     /*COPEXP0(jvj+19,jvj+20)*/
x[jvj+21]=d[20];z[jvj+21]=0;
l7:if((x[jvj+21]<=0)) goto l6;
x[jvj+22]=s[x[jvj+21]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+21];
pile[v[22]]=268; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(268,jvj+22,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=RR; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(jvj+23,RR,jvj+24)*/
pile[v[22]]=111; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,jvj+24,jvj+25)*/
pile[v[22]]=101; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+25,jvj+26)*/
if((x[jvj+26]!=485)) goto l8;
pile[v[22]]=107; pile[WZ1]=jvj+24; pile[WZ2]=jvj+27; 
(*f[33])( );     /*FNDE0(107,jvj+24,jvj+27)*/
for(i=x[jvj+27],V48=0;i>0;i=t[i],V48++)  ;
if((V48!=2)) goto l8;
pile[v[22]]=jvj+22; pile[WZ1]=RR; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(jvj+22,RR,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=jvj+29; 
(*f[255])( );     /*COPEXP0(jvj+28,jvj+29)*/
x[jvj+54]=x[jvj+18] ;z[jvj+54]=z[jvj+18];
l9:if((x[jvj+54]<=0)) goto l8;
x[jvj+50]=s[x[jvj+54]] ;z[jvj+50]=(x[jvj+50]<=sepcte) ? x[jvj+50] : z[jvj+54];
x[jvj+30]=x[jvj+50] ;z[jvj+30]=z[jvj+50];
pile[v[22]]=jvj+30; pile[WZ1]=jvj+31; 
(*f[255])( );     /*COPEXP0(jvj+30,jvj+31)*/
x[jvj+51]=x[jvj+18] ;z[jvj+51]=z[jvj+18];
l10:if((x[jvj+51]>0)) goto l11;
x[jvj+54]=t[x[jvj+54]];
goto l9;
l2:x[jvj+6]=s[x[jvj+3]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+3];
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==x[jvj+6]) goto l4;
l3:x[jvj+3]=t[x[jvj+3]];
goto l1;
l4:pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[68])( );     /*PLUE0(jvj+5,jvj+6)*/
goto l3;
l6:x[jvj+12]=t[x[jvj+12]];
goto l5;
l8:x[jvj+21]=t[x[jvj+21]];
goto l7;
l11:x[jvj+32]=s[x[jvj+51]] ;z[jvj+32]=(x[jvj+32]<=sepcte) ? x[jvj+32] : z[jvj+51];
if((x[jvj+50]==x[jvj+32])) goto l12;
pile[v[22]]=130; pile[WZ1]=jvj+32; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(130,jvj+32,V32)*/
V32=pile[WZ2]; 
K=V32;
x[jvj+55]=x[jvj+27] ;z[jvj+55]=z[jvj+27];
l13:if((x[jvj+55]<=0)) goto l12;
x[jvj+52]=s[x[jvj+55]] ;z[jvj+52]=(x[jvj+52]<=sepcte) ? x[jvj+52] : z[jvj+55];
x[jvj+33]=x[jvj+52] ;z[jvj+33]=z[jvj+52];
pile[v[22]]=jvj+33; pile[WZ1]=jvj+34; 
(*f[255])( );     /*COPEXP0(jvj+33,jvj+34)*/
x[jvj+53]=x[jvj+27] ;z[jvj+53]=z[jvj+27];
l14:if((x[jvj+53]>0)) goto l15;
x[jvj+55]=t[x[jvj+55]];
goto l13;
l12:x[jvj+51]=t[x[jvj+51]];
goto l10;
l15:x[jvj+35]=s[x[jvj+53]] ;z[jvj+35]=(x[jvj+35]<=sepcte) ? x[jvj+35] : z[jvj+53];
if((x[jvj+52]==x[jvj+35])) goto l16;
pile[v[22]]=130; pile[WZ1]=jvj+35; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(130,jvj+35,V56)*/
V56=pile[WZ2]; 
if((K!=V56)) goto l16;
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+41; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+41)*/
pile[WZ1]=RR; pile[WZ3]=(-631); pile[WZ4]=jvj+42; 
(*f[270])( );     /*QUADRI7(101,RR,110,(-631),jvj+42)*/
pile[v[22]]=V69; pile[WZ1]=858; pile[WZ2]=jvj+38; 
(*f[46])( );     /*TRI0(V69,858,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+39; 
(*f[189])( );     /*TRI4(jvj+38,v[13],642,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=3609; pile[WZ2]=246; pile[WZ3]=jvj+40; 
(*f[189])( );     /*TRI4(jvj+39,3609,246,jvj+40)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20102; pile[WZ4]=jvj+40; pile[WZ5]=jvj+36; 
(*f[269])( );     /*QUADRI6(158,1,218,20102,jvj+40,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=159; pile[WZ2]=jvj+41; 
(*f[36])( );     /*PLUSC0(jvj+36,159,jvj+41)*/
pile[WZ2]=jvj+42; 
(*f[36])( );     /*PLUSC0(jvj+36,159,jvj+42)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+43; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+43)*/
pile[WZ3]=485; pile[WZ4]=jvj+48; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+48)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+48; pile[WZ4]=jvj+47; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+48,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=107; pile[WZ2]=jvj+20; 
(*f[36])( );     /*PLUSC0(jvj+47,107,jvj+20)*/
pile[WZ2]=jvj+34; 
(*f[36])( );     /*PLUSC0(jvj+47,107,jvj+34)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+49; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+49)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+49; pile[WZ4]=jvj+45; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+49,jvj+45)*/
pile[v[22]]=jvj+45; pile[WZ1]=107; pile[WZ2]=jvj+31; 
(*f[36])( );     /*PLUSC0(jvj+45,107,jvj+31)*/
pile[WZ2]=jvj+29; 
(*f[36])( );     /*PLUSC0(jvj+45,107,jvj+29)*/
pile[v[22]]=jvj+43; pile[WZ1]=111; pile[WZ2]=jvj+44; 
(*f[54])( );     /*TRI1(jvj+43,111,jvj+44)*/
pile[v[22]]=jvj+44; pile[WZ1]=jvj+45; pile[WZ2]=103; pile[WZ3]=jvj+46; 
(*f[58])( );     /*TRI3(jvj+44,jvj+45,103,jvj+46)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+47; pile[WZ4]=jvj+46; pile[WZ5]=jvj+37; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+47,jvj+46,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=jvj+36; 
(*f[1296])( );     /*NOUVCONTR0(jvj+37,jvj+36)*/
l16:x[jvj+53]=t[x[jvj+53]];
goto l14;
l17:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; return;
}
