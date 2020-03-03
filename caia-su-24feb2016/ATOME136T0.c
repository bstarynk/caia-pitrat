#include "dx.h"
void ATOME136T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int P=0,V42=0,V34=0,V35=0,V36=0,V37=0,V39=0,V38=0,V40=0,V16=0,V20=0,K=0,E=0,V12=0,V79=0,V77=0,V7=0,V73=0,V74=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=47;
x[jvj+1]=20136;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3630&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,R,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+8,jvj+9)*/
if((x[jvj+9]!=25)) goto l10;
x[jvj+10]=vo[14];z[jvj+10]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(642,jvj+10,V40)*/
V40=pile[WZ2]; 
x[jvj+11]=d[20];z[jvj+11]=0;
l4:if((x[jvj+11]<=0)) goto l10;
x[jvj+12]=s[x[jvj+11]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+11];
pile[v[22]]=jvj+12; pile[WZ1]=R; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+12,R,jvj+13)*/
pile[v[22]]=111; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,jvj+13,jvj+14)*/
pile[v[22]]=101; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+14,jvj+15)*/
if((x[jvj+15]!=485)) goto l5;
pile[v[22]]=107; pile[WZ1]=jvj+13; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(107,jvj+13,jvj+16)*/
for(i=x[jvj+16],V16=0;i>0;i=t[i],V16++)  ;
if((V16!=2)) goto l5;
pile[v[22]]=268; pile[WZ1]=jvj+12; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(268,jvj+12,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=R; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+17,R,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=jvj+2; 
(*f[3627])( );if(v[102]) goto l5;     /*CARREDE0(jvj+18,jvj+2)*/
x[jvj+46]=x[jvj+16] ;z[jvj+46]=z[jvj+16];
l6:if((x[jvj+46]<=0)) goto l5;
x[jvj+19]=s[x[jvj+46]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+46];
pile[v[22]]=130; pile[WZ1]=jvj+19; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(130,jvj+19,V20)*/
V20=pile[WZ2]; 
K=V20;
V79=abs(K);
V77=V79;
pile[v[22]]=V77; pile[WZ1]=jvj+44; 
(*f[991])( );if(v[102]) goto l7;     /*ENSFACT0(V77,jvj+44)*/
pile[v[22]]=jvj+44; pile[WZ1]=V77; 
(*f[207])( );     /*PLUE2(jvj+44,V77)*/
pile[WZ1]=1; 
(*f[207])( );     /*PLUE2(jvj+44,1)*/
x[jvj+45]=0 ;z[jvj+45]=0;
l11:if((x[jvj+44]>0)) goto l12;
V7=x[jvj+45];
E=V7;
for(i=E,V12=0;i>0;i=t[i],V12++)  ;
if((V12>=200)) goto l7;
x[jvj+47]=x[jvj+16] ;z[jvj+47]=z[jvj+16];
l8:if((x[jvj+47]<=0)) goto l7;
x[jvj+20]=s[x[jvj+47]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+47];
if((x[jvj+19]==x[jvj+20])) goto l9;
pile[v[22]]=jvj+20; pile[WZ1]=jvj+4; 
(*f[3627])( );if(v[102]) goto l9;     /*CARREDE0(jvj+20,jvj+4)*/
x[jvj+6]=0 ;z[jvj+6]=0;
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[255])( );     /*COPEXP0(jvj+2,jvj+3)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[255])( );     /*COPEXP0(jvj+4,jvj+5)*/
V42=E;
l1:if((V42>0)) goto l2;
pile[v[22]]=jvj+6; pile[WZ1]=jvj+21; 
(*f[299])( );     /*COPEL0(jvj+6,jvj+21)*/
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+39; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+39)*/
pile[v[22]]=V40; pile[WZ1]=858; pile[WZ2]=jvj+35; 
(*f[46])( );     /*TRI0(V40,858,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+36; 
(*f[189])( );     /*TRI4(jvj+35,v[13],642,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=3630; pile[WZ2]=246; pile[WZ3]=jvj+37; 
(*f[189])( );     /*TRI4(jvj+36,3630,246,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=20136; pile[WZ2]=218; pile[WZ3]=jvj+38; 
(*f[58])( );     /*TRI3(jvj+37,20136,218,jvj+38)*/
pile[v[22]]=jvj+39; pile[WZ1]=(-20); pile[WZ2]=jvj+38; pile[WZ3]=159; pile[WZ4]=jvj+40; 
(*f[298])( );     /*TRIENS1(jvj+39,(-20),jvj+38,159,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+22; 
(*f[58])( );     /*TRI3(jvj+40,1,158,jvj+22)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+41; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=111; pile[WZ2]=jvj+42; 
(*f[54])( );     /*TRI1(jvj+41,111,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=jvj+21; pile[WZ2]=107; pile[WZ3]=jvj+43; 
(*f[301])( );     /*TRI11(jvj+42,jvj+21,107,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+23; 
(*f[58])( );     /*TRI3(jvj+43,22,100,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=jvj+22; 
(*f[1296])( );     /*NOUVCONTR0(jvj+23,jvj+22)*/
l9:x[jvj+47]=t[x[jvj+47]];
goto l8;
l2:P=s[V42];
V34=K/P;
V35=P+V34;
V36=V35%2;
if((V36!=0)) goto l3;
V37=V35/2;
V39=P-V34;
V38=V39/2;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+24; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+24)*/
pile[WZ3]=25; pile[WZ4]=jvj+27; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+27)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V37; pile[WZ4]=jvj+29; 
(*f[192])( );     /*QUADRI4(100,41,130,V37,jvj+29)*/
pile[v[22]]=jvj+27; pile[WZ1]=111; pile[WZ2]=jvj+28; 
(*f[54])( );     /*TRI1(jvj+27,111,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=jvj+29; pile[WZ2]=103; pile[WZ3]=jvj+30; 
(*f[58])( );     /*TRI3(jvj+28,jvj+29,103,jvj+30)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+3; pile[WZ4]=jvj+30; pile[WZ5]=jvj+25; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+3,jvj+30,jvj+25)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+31; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+31)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V38; pile[WZ4]=jvj+33; 
(*f[192])( );     /*QUADRI4(100,41,130,V38,jvj+33)*/
pile[v[22]]=jvj+31; pile[WZ1]=111; pile[WZ2]=jvj+32; 
(*f[54])( );     /*TRI1(jvj+31,111,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=jvj+33; pile[WZ2]=103; pile[WZ3]=jvj+34; 
(*f[58])( );     /*TRI3(jvj+32,jvj+33,103,jvj+34)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+5; pile[WZ4]=jvj+34; pile[WZ5]=jvj+26; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+5,jvj+34,jvj+26)*/
pile[WZ2]=111; pile[WZ3]=jvj+24; pile[WZ4]=jvj+7; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+24,jvj+7)*/
pile[v[22]]=jvj+7; pile[WZ1]=107; pile[WZ2]=jvj+25; 
(*f[36])( );     /*PLUSC0(jvj+7,107,jvj+25)*/
pile[WZ2]=jvj+26; 
(*f[36])( );     /*PLUSC0(jvj+7,107,jvj+26)*/
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; 
(*f[68])( );     /*PLUE0(jvj+6,jvj+7)*/
l3:V42=t[V42];
goto l1;
l5:x[jvj+11]=t[x[jvj+11]];
goto l4;
l7:x[jvj+46]=t[x[jvj+46]];
goto l6;
l10:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l12:V73=s[x[jvj+44]];
V74=(-V73);
pile[v[22]]=jvj+45; pile[WZ1]=V74; 
(*f[207])( );     /*PLUE2(jvj+45,V74)*/
pile[WZ1]=V73; 
(*f[207])( );     /*PLUE2(jvj+45,V73)*/
x[jvj+44]=t[x[jvj+44]];
goto l11;
}
