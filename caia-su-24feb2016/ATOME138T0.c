#include "dx.h"
void ATOME138T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int M=0,V35=0,P=0,V31=0,V37=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=55;
x[jvj+1]=20138;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3632&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(111,R,jvj+14)*/
pile[v[22]]=101; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(101,jvj+14,jvj+15)*/
if((x[jvj+15]!=25)) goto l15;
x[jvj+16]=vo[14];z[jvj+16]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+16; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(642,jvj+16,V31)*/
V31=pile[WZ2]; 
pile[v[22]]=1294; pile[WZ1]=R; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(1294,R,jvj+17)*/
for(a=x[jvj+17];a>0;a=t[a]) if(s[a]==1340) goto l11;
l15:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l3:x[jvj+3]=s[x[jvj+54]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+54];
pile[v[22]]=100; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(100,jvj+3,jvj+4)*/
if((x[jvj+4]==41)) goto l4;
l1:pile[v[22]]=100; pile[WZ1]=jvj+3; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(100,jvj+3,jvj+5)*/
if((x[jvj+5]==484)) goto l4;
l12:x[jvj+18]=t[x[jvj+18]];
l10:if((x[jvj+18]<=0)) goto l15;
x[jvj+19]=s[x[jvj+18]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+18];
pile[v[22]]=jvj+19; pile[WZ1]=R; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(jvj+19,R,jvj+9)*/
pile[v[22]]=111; pile[WZ1]=jvj+9; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,jvj+9,jvj+20)*/
pile[v[22]]=101; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+20,jvj+21)*/
if((x[jvj+21]!=486)) goto l12;
pile[v[22]]=107; pile[WZ1]=jvj+9; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(107,jvj+9,jvj+22)*/
x[jvj+54]=x[jvj+22] ;z[jvj+54]=z[jvj+22];
l2:if((x[jvj+54]>0)) goto l3;
pile[v[22]]=268; pile[WZ1]=jvj+19; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(268,jvj+19,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=R; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(jvj+23,R,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=jvj+25; 
(*f[3633])( );if(v[102]) goto l12;     /*TRPREM0(jvj+24,jvj+25)*/
pile[WZ1]=jvj+26; 
(*f[255])( );     /*COPEXP0(jvj+24,jvj+26)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+27; 
(*f[255])( );     /*COPEXP0(jvj+9,jvj+27)*/
V37=x[jvj+25];
l13:if((V37<=0)) goto l12;
P=s[V37];
pile[v[22]]=jvj+24; pile[WZ1]=P; pile[WZ2]=jvj+28; 
(*f[3634])( );if(v[102]) goto l14;     /*ANAPREM0(jvj+24,P,jvj+28)*/
x[jvj+12]=0 ;z[jvj+12]=0;
V35=x[jvj+28];
l7:if((V35>0)) goto l8;
pile[v[22]]=jvj+12; pile[WZ1]=jvj+29; 
(*f[299])( );     /*COPEL0(jvj+12,jvj+29)*/
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+39; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+39)*/
pile[v[22]]=V31; pile[WZ1]=858; pile[WZ2]=jvj+35; 
(*f[46])( );     /*TRI0(V31,858,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+36; 
(*f[189])( );     /*TRI4(jvj+35,v[13],642,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=3632; pile[WZ2]=246; pile[WZ3]=jvj+37; 
(*f[189])( );     /*TRI4(jvj+36,3632,246,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=20138; pile[WZ2]=218; pile[WZ3]=jvj+38; 
(*f[58])( );     /*TRI3(jvj+37,20138,218,jvj+38)*/
pile[v[22]]=jvj+39; pile[WZ1]=(-20); pile[WZ2]=jvj+38; pile[WZ3]=159; pile[WZ4]=jvj+40; 
(*f[298])( );     /*TRIENS1(jvj+39,(-20),jvj+38,159,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+30; 
(*f[58])( );     /*TRI3(jvj+40,1,158,jvj+30)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+41; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+41)*/
pile[WZ3]=48; pile[WZ4]=jvj+43; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+43)*/
pile[WZ3]=25; pile[WZ4]=jvj+46; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+46)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+48; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+48)*/
pile[v[22]]=jvj+46; pile[WZ1]=111; pile[WZ2]=jvj+47; 
(*f[54])( );     /*TRI1(jvj+46,111,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=jvj+48; pile[WZ2]=103; pile[WZ3]=jvj+49; 
(*f[58])( );     /*TRI3(jvj+47,jvj+48,103,jvj+49)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+26; pile[WZ4]=jvj+49; pile[WZ5]=jvj+44; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+26,jvj+49,jvj+44)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+50; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+50)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+52; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+52)*/
pile[v[22]]=jvj+50; pile[WZ1]=111; pile[WZ2]=jvj+51; 
(*f[54])( );     /*TRI1(jvj+50,111,jvj+51)*/
pile[v[22]]=jvj+51; pile[WZ1]=jvj+52; pile[WZ2]=103; pile[WZ3]=jvj+53; 
(*f[58])( );     /*TRI3(jvj+51,jvj+52,103,jvj+53)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+27; pile[WZ4]=jvj+53; pile[WZ5]=jvj+45; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+27,jvj+53,jvj+45)*/
pile[WZ2]=111; pile[WZ3]=jvj+43; pile[WZ4]=jvj+42; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+43,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=107; pile[WZ2]=jvj+44; 
(*f[36])( );     /*PLUSC0(jvj+42,107,jvj+44)*/
pile[WZ2]=jvj+45; 
(*f[36])( );     /*PLUSC0(jvj+42,107,jvj+45)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+41; pile[WZ4]=jvj+31; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+41,jvj+31)*/
pile[v[22]]=jvj+29; pile[WZ1]=jvj+31; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+29,jvj+31,107)*/
pile[v[22]]=jvj+31; pile[WZ1]=107; pile[WZ2]=jvj+42; 
(*f[36])( );     /*PLUSC0(jvj+31,107,jvj+42)*/
pile[WZ1]=jvj+30; 
(*f[1296])( );     /*NOUVCONTR0(jvj+31,jvj+30)*/
l14:V37=t[V37];
goto l13;
l4:x[jvj+54]=t[x[jvj+54]];
goto l2;
l6:x[jvj+6]=s[x[jvj+55]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+55];
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; 
(*f[255])( );     /*COPEXP0(jvj+6,jvj+7)*/
pile[v[22]]=jvj+8; 
(*f[68])( );     /*PLUE0(jvj+8,jvj+7)*/
x[jvj+55]=t[x[jvj+55]];
l5:if((x[jvj+55]>0)) goto l6;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+32; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=111; pile[WZ2]=jvj+33; 
(*f[54])( );     /*TRI1(jvj+32,111,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=jvj+8; pile[WZ2]=107; pile[WZ3]=jvj+34; 
(*f[301])( );     /*TRI11(jvj+33,jvj+8,107,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+13; 
(*f[58])( );     /*TRI3(jvj+34,22,100,jvj+13)*/
pile[v[22]]=jvj+12; pile[WZ1]=jvj+13; 
(*f[68])( );     /*PLUE0(jvj+12,jvj+13)*/
l9:V35=t[V35];
goto l7;
l8:M=s[V35];
pile[v[22]]=P; pile[WZ1]=jvj+9; pile[WZ2]=M; pile[WZ3]=1; pile[WZ4]=jvj+10; 
(*f[3636])( );if(v[102]) goto l9;     /*CRESPENS0(P,jvj+9,M,1,jvj+10)*/
pile[WZ1]=jvj+10; pile[WZ3]=jvj+11; 
(*f[3635])( );if(v[102]) goto l9;     /*CMSSENS0(P,jvj+10,M,jvj+11)*/
x[jvj+8]=0 ;z[jvj+8]=0;
x[jvj+55]=x[jvj+11] ;z[jvj+55]=z[jvj+11];
goto l5;
l11:x[jvj+18]=d[20];z[jvj+18]=0;
goto l10;
}
