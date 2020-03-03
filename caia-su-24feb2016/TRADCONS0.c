#include "dx.h"
void TRADCONS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V=0,V31=0,VA=0,V16=0;
int B,EE,M;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=39;
x[jvj+1]=11352;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1482&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
B=pile[v[22]]; EE=pile[v[22]+1]; M=pile[v[22]+2]; R=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=B; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(100,B,jvj+2)*/
if((x[jvj+2]==21)) goto l2;
pile[v[22]]=jvj+2; pile[WZ1]=100; pile[WZ2]=R; 
(*f[54])( );     /*TRI1(jvj+2,100,R)*/
pile[v[22]]=101; pile[WZ1]=B; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(101,B,jvj+3)*/
pile[v[22]]=R; pile[WZ1]=101; 
(*f[35])( );     /*CHGC1(R,101,jvj+3)*/
l1:pile[v[22]]=130; pile[WZ1]=B; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(130,B,V2)*/
V2=pile[WZ2]; 
pile[v[22]]=R; pile[WZ1]=130; pile[WZ2]=V2; 
(*f[43])( );     /*CHGC2(R,130,V2)*/
l9:pile[v[22]]=111; pile[WZ1]=B; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,B,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=jvj+17; 
(*f[255])( );     /*COPEXP0(jvj+16,jvj+17)*/
pile[v[22]]=R; pile[WZ1]=111; pile[WZ2]=jvj+17; 
(*f[35])( );     /*CHGC1(R,111,jvj+17)*/
l12:x[jvj+18]=d[6];z[jvj+18]=0;
l10:if((x[jvj+18]>0)) goto l11;
if((x[M]!=135)) goto l15;
pile[v[22]]=107; pile[WZ1]=B; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(107,B,jvj+22)*/
for(i=x[jvj+22],V16=0;i>0;i=t[i],V16++)  ;
if((V16==1)) goto l4;
if((V16<=1)) goto l15;
x[jvj+14]=0 ;z[jvj+14]=0;
l6:if((x[jvj+22]>0)) goto l7;
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+14; 
(*f[34])( );     /*CHGC0(R,107,jvj+14)*/
l15:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; v[102]=0;return;
l2:if((x[M]!=135)) goto l14;
pile[v[22]]=140; pile[WZ1]=B; 
(*f[44])( );if(v[102]) goto l14;     /*FNDC1(140,B,V)*/
V=pile[WZ2]; 
pile[v[22]]=525; pile[WZ1]=21; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(525,21,jvj+4)*/
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==V) goto l16;
pile[WZ1]=773; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(525,773,jvj+5)*/
for(a=x[jvj+5];a>0;a=t[a]) if(s[a]==V) goto l17;
pile[WZ1]=23; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(525,23,jvj+6)*/
for(a=x[jvj+6];a>0;a=t[a]) if(s[a]==V) goto l3;
l14:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; v[102]=1;return;
l3:pile[v[22]]=V; pile[WZ1]=EE; pile[WZ2]=M; pile[WZ3]=jvj+7; 
(*f[1699])( );     /*TRADCONSA0(V,EE,M,jvj+7)*/
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[255])( );     /*COPEXP0(jvj+7,jvj+8)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=585; pile[WZ4]=jvj+31; 
(*f[181])( );     /*QUADRI2(100,20,101,585,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=111; pile[WZ2]=jvj+32; 
(*f[54])( );     /*TRI1(jvj+31,111,jvj+32)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+8; pile[WZ4]=jvj+32; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+8,jvj+32,R)*/
goto l9;
l4:if((x[jvj+22]<=0)) goto l15;
x[jvj+23]=s[x[jvj+22]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+22];
pile[v[22]]=jvj+23; pile[WZ1]=EE; pile[WZ2]=M; pile[WZ3]=jvj+24; 
(*f[1482])( );if(v[102]) goto l15;     /*TRADCONS0(jvj+23,EE,M,jvj+24)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+24; 
(*f[36])( );     /*PLUSC0(R,107,jvj+24)*/
goto l15;
l5:pile[v[22]]=VA; pile[WZ1]=EE; pile[WZ2]=M; pile[WZ3]=jvj+11; 
(*f[1699])( );     /*TRADCONSA0(VA,EE,M,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; 
(*f[255])( );     /*COPEXP0(jvj+11,jvj+12)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=585; pile[WZ4]=jvj+33; 
(*f[181])( );     /*QUADRI2(100,20,101,585,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=111; pile[WZ2]=jvj+34; 
(*f[54])( );     /*TRI1(jvj+33,111,jvj+34)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+12; pile[WZ4]=jvj+34; pile[WZ5]=jvj+15; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+12,jvj+34,jvj+15)*/
l8:pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; 
(*f[68])( );     /*PLUE0(jvj+14,jvj+15)*/
x[jvj+22]=t[x[jvj+22]];
goto l6;
l7:x[jvj+9]=s[x[jvj+22]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+22];
pile[v[22]]=jvj+9; pile[WZ1]=jvj+13; 
(*f[255])( );     /*COPEXP0(jvj+9,jvj+13)*/
x[jvj+15]=incon;
pile[v[22]]=140; pile[WZ1]=jvj+9; 
(*f[44])( );if(v[102]) goto l18;     /*FNDC1(140,jvj+9,V31)*/
V31=pile[WZ2]; 
VA=V31;
pile[v[22]]=525; pile[WZ1]=23; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(525,23,jvj+10)*/
for(a=x[jvj+10];a>0;a=t[a]) if(s[a]==VA) goto l5;
l18:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=623; pile[WZ4]=jvj+35; 
(*f[181])( );     /*QUADRI2(100,20,101,623,jvj+35)*/
pile[WZ3]=295; pile[WZ4]=jvj+38; 
(*f[181])( );     /*QUADRI2(100,20,101,295,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=111; pile[WZ2]=jvj+39; 
(*f[54])( );     /*TRI1(jvj+38,111,jvj+39)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+13; pile[WZ4]=jvj+39; pile[WZ5]=jvj+37; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+13,jvj+39,jvj+37)*/
pile[v[22]]=jvj+35; pile[WZ1]=111; pile[WZ2]=jvj+36; 
(*f[54])( );     /*TRI1(jvj+35,111,jvj+36)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+37; pile[WZ4]=jvj+36; pile[WZ5]=jvj+15; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+37,jvj+36,jvj+15)*/
goto l8;
l11:x[jvj+19]=s[x[jvj+18]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+18];
pile[v[22]]=jvj+19; pile[WZ1]=B; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(jvj+19,B,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=EE; pile[WZ2]=M; pile[WZ3]=jvj+21; 
(*f[1482])( );if(v[102]) goto l13;     /*TRADCONS0(jvj+20,EE,M,jvj+21)*/
pile[v[22]]=R; pile[WZ1]=jvj+19; pile[WZ2]=jvj+21; 
(*f[35])( );     /*CHGC1(R,jvj+19,jvj+21)*/
l13:x[jvj+18]=t[x[jvj+18]];
goto l10;
l16:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=295; pile[WZ4]=jvj+25; 
(*f[181])( );     /*QUADRI2(100,20,101,295,jvj+25)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+27; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+27)*/
pile[v[22]]=jvj+25; pile[WZ1]=111; pile[WZ2]=jvj+26; 
(*f[54])( );     /*TRI1(jvj+25,111,jvj+26)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+27; pile[WZ4]=jvj+26; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+27,jvj+26,R)*/
goto l9;
l17:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=139; pile[WZ4]=jvj+28; 
(*f[181])( );     /*QUADRI2(100,20,101,139,jvj+28)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+30; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+30)*/
pile[v[22]]=jvj+28; pile[WZ1]=111; pile[WZ2]=jvj+29; 
(*f[54])( );     /*TRI1(jvj+28,111,jvj+29)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+30; pile[WZ4]=jvj+29; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+30,jvj+29,R)*/
goto l9;
}
