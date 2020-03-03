#include "dx.h"
void ISPRIME0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V14=0,V17=0,Q=0,V20=0,V24=0,V40=0,V43=0,V46=0,V29=0,V49=0,V53=0,V60=0,T=0,V35=0,V97=0,V11=0,V99=0,V37=0;
int C,B,A;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=62;
if(v[0]>99700) (*f[6])( );

C=pile[v[22]]; B=pile[v[22]+1]; A=pile[v[22]+2]; R=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=A; pile[WZ1]=jvj+1; 
(*f[891])( );     /*VAREXP0(A,jvj+1)*/
for(i=x[jvj+1],V3=0;i>0;i=t[i],V3++)  ;
if((V3!=1)) goto l21;
if((x[jvj+1]<=0)) goto l21;
x[jvj+56]=s[x[jvj+1]] ;z[jvj+56]=(x[jvj+56]<=sepcte) ? x[jvj+56] : z[jvj+1];
x[jvj+4]=x[jvj+56] ;z[jvj+4]=z[jvj+56];
pile[WZ1]=jvj+2; 
(*f[255])( );     /*COPEXP0(A,jvj+2)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+45; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+45)*/
pile[WZ3]=486; pile[WZ4]=jvj+48; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+48)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=C; pile[WZ4]=jvj+49; 
(*f[192])( );     /*QUADRI4(100,41,130,C,jvj+49)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-7423); pile[WZ4]=jvj+51; 
(*f[270])( );     /*QUADRI7(100,21,140,(-7423),jvj+51)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+53; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+53)*/
pile[v[22]]=jvj+51; pile[WZ1]=111; pile[WZ2]=jvj+52; 
(*f[54])( );     /*TRI1(jvj+51,111,jvj+52)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+53; pile[WZ4]=jvj+52; pile[WZ5]=jvj+50; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+53,jvj+52,jvj+50)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+48; pile[WZ4]=jvj+46; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+48,jvj+46)*/
pile[v[22]]=jvj+46; pile[WZ1]=107; pile[WZ2]=jvj+49; 
(*f[36])( );     /*PLUSC0(jvj+46,107,jvj+49)*/
pile[WZ2]=jvj+50; 
(*f[36])( );     /*PLUSC0(jvj+46,107,jvj+50)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=B; pile[WZ4]=jvj+47; 
(*f[192])( );     /*QUADRI4(100,41,130,B,jvj+47)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+45; pile[WZ4]=jvj+3; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+45,jvj+3)*/
pile[v[22]]=jvj+3; pile[WZ1]=107; pile[WZ2]=jvj+46; 
(*f[36])( );     /*PLUSC0(jvj+3,107,jvj+46)*/
pile[WZ2]=jvj+47; 
(*f[36])( );     /*PLUSC0(jvj+3,107,jvj+47)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+3; pile[WZ2]=jvj+2; pile[WZ3]=jvj+5; 
(*f[1719])( );     /*SUBSTITUTES0(jvj+4,jvj+3,jvj+2,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[799])( );if(v[102]) goto l20;     /*NORME0(jvj+5,jvj+6)*/
pile[v[22]]=111; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(111,jvj+6,jvj+9)*/
pile[v[22]]=101; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(101,jvj+9,jvj+10)*/
if((x[jvj+10]==486)) goto l5;
if((x[jvj+10]!=485)) goto l20;
pile[v[22]]=107; pile[WZ1]=jvj+6; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(107,jvj+6,jvj+17)*/
for(i=x[jvj+17],V40=0;i>0;i=t[i],V40++)  ;
if((V40!=2)) goto l20;
x[jvj+59]=x[jvj+17] ;z[jvj+59]=z[jvj+17];
l11:if((x[jvj+59]<=0)) goto l20;
x[jvj+18]=s[x[jvj+59]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+59];
pile[v[22]]=111; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,jvj+18,jvj+19)*/
pile[v[22]]=101; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+19,jvj+20)*/
if((x[jvj+20]!=486)) goto l12;
pile[v[22]]=107; pile[WZ1]=jvj+18; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(107,jvj+18,jvj+21)*/
for(i=x[jvj+21],V43=0;i>0;i=t[i],V43++)  ;
if((V43!=2)) goto l12;
x[jvj+60]=x[jvj+21] ;z[jvj+60]=z[jvj+21];
l13:if((x[jvj+60]<=0)) goto l12;
x[jvj+22]=s[x[jvj+60]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+60];
pile[v[22]]=130; pile[WZ1]=jvj+22; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(130,jvj+22,V46)*/
V46=pile[WZ2]; 
V29=V46;
x[jvj+61]=x[jvj+21] ;z[jvj+61]=z[jvj+21];
l15:if((x[jvj+61]<=0)) goto l14;
x[jvj+23]=s[x[jvj+61]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+61];
if((x[jvj+22]==x[jvj+23])) goto l16;
pile[v[22]]=100; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(100,jvj+23,jvj+24)*/
if((x[jvj+24]!=484)) goto l16;
pile[v[22]]=111; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(111,jvj+23,jvj+25)*/
pile[v[22]]=140; pile[WZ1]=jvj+25; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(140,jvj+25,V49)*/
V49=pile[WZ2]; 
if((V49!=(-7423))) goto l16;
pile[v[22]]=102; pile[WZ1]=jvj+23; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(102,jvj+23,jvj+26)*/
pile[v[22]]=130; pile[WZ1]=jvj+26; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(130,jvj+26,V53)*/
V53=pile[WZ2]; 
if((V53!=0)) goto l16;
x[jvj+62]=x[jvj+17] ;z[jvj+62]=z[jvj+17];
l17:if((x[jvj+62]<=0)) goto l16;
x[jvj+27]=s[x[jvj+62]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+62];
if((x[jvj+18]==x[jvj+27])) goto l18;
pile[v[22]]=130; pile[WZ1]=jvj+27; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(130,jvj+27,V60)*/
V60=pile[WZ2]; 
T=V60;
pile[v[22]]=T; pile[WZ1]=V29; 
(*f[1011])( );     /*PGCD0(T,V29,V35)*/
V35=pile[WZ2]; 
if((V35==1)) goto l18;
x[jvj+38]=incon;
pile[WZ1]=jvj+55; 
(*f[992])( );if(v[102]) goto l24;     /*FACTPREM0(T,jvj+55)*/
for(i=x[jvj+55],V99=0;i>0;i=t[i],V99++)  ;
if((V99!=1)) goto l24;
V37=135;
l3:if((V37==135)) goto l4;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=134; pile[WZ4]=jvj+38; 
(*f[181])( );     /*QUADRI2(100,20,101,134,jvj+38)*/
l19:x[R]=x[jvj+38] ;z[R]=z[jvj+38];
l22:v[0]=jvj; v[22]-=4; v[102]=0;return;
l2:pile[v[22]]=jvj+4; pile[WZ1]=jvj+7; 
(*f[255])( );     /*COPEXP0(jvj+4,jvj+7)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+29; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+29)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=Q; pile[WZ4]=jvj+31; 
(*f[192])( );     /*QUADRI4(100,41,130,Q,jvj+31)*/
pile[v[22]]=jvj+29; pile[WZ1]=111; pile[WZ2]=jvj+30; 
(*f[54])( );     /*TRI1(jvj+29,111,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=jvj+31; pile[WZ2]=103; pile[WZ3]=jvj+32; 
(*f[58])( );     /*TRI3(jvj+30,jvj+31,103,jvj+32)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+7; pile[WZ4]=jvj+32; pile[WZ5]=jvj+33; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+7,jvj+32,jvj+33)*/
l9:x[jvj+58]=x[jvj+11] ;z[jvj+58]=z[jvj+11];
l8:if((x[jvj+58]<=0)) goto l7;
x[jvj+13]=s[x[jvj+58]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+58];
if((x[jvj+12]==x[jvj+13])) goto l10;
pile[v[22]]=100; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,jvj+13,jvj+14)*/
if((x[jvj+14]!=484)) goto l10;
pile[v[22]]=111; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,jvj+13,jvj+15)*/
pile[v[22]]=140; pile[WZ1]=jvj+15; 
(*f[44])( );if(v[102]) goto l10;     /*FNDC1(140,jvj+15,V20)*/
V20=pile[WZ2]; 
if((V20!=(-7423))) goto l10;
pile[v[22]]=102; pile[WZ1]=jvj+13; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(102,jvj+13,jvj+16)*/
pile[v[22]]=130; pile[WZ1]=jvj+16; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(130,jvj+16,V24)*/
V24=pile[WZ2]; 
if((V24!=0)) goto l10;
x[R]=x[jvj+33] ;z[R]=z[jvj+33];
goto l22;
l4:pile[v[22]]=jvj+4; pile[WZ1]=jvj+8; 
(*f[255])( );     /*COPEXP0(jvj+4,jvj+8)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+34; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+34)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=B; pile[WZ4]=jvj+36; 
(*f[192])( );     /*QUADRI4(100,41,130,B,jvj+36)*/
pile[v[22]]=jvj+34; pile[WZ1]=111; pile[WZ2]=jvj+35; 
(*f[54])( );     /*TRI1(jvj+34,111,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=jvj+36; pile[WZ2]=103; pile[WZ3]=jvj+37; 
(*f[58])( );     /*TRI3(jvj+35,jvj+36,103,jvj+37)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+8; pile[WZ4]=jvj+37; pile[WZ5]=jvj+38; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+8,jvj+37,jvj+38)*/
goto l19;
l5:pile[v[22]]=107; pile[WZ1]=jvj+6; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(107,jvj+6,jvj+11)*/
for(i=x[jvj+11],V14=0;i>0;i=t[i],V14++)  ;
if((V14!=2)) goto l20;
x[jvj+57]=x[jvj+11] ;z[jvj+57]=z[jvj+11];
l6:if((x[jvj+57]<=0)) goto l20;
x[jvj+12]=s[x[jvj+57]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+57];
pile[v[22]]=130; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(130,jvj+12,V17)*/
V17=pile[WZ2]; 
Q=V17;
x[jvj+33]=incon;
pile[v[22]]=Q; pile[WZ1]=jvj+54; 
(*f[992])( );if(v[102]) goto l23;     /*FACTPREM0(Q,jvj+54)*/
for(i=x[jvj+54],V97=0;i>0;i=t[i],V97++)  ;
if((V97!=1)) goto l23;
V11=135;
l1:if((V11==135)) goto l2;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=134; pile[WZ4]=jvj+33; 
(*f[181])( );     /*QUADRI2(100,20,101,134,jvj+33)*/
goto l9;
l7:x[jvj+57]=t[x[jvj+57]];
goto l6;
l10:x[jvj+58]=t[x[jvj+58]];
goto l8;
l12:x[jvj+59]=t[x[jvj+59]];
goto l11;
l14:x[jvj+60]=t[x[jvj+60]];
goto l13;
l16:x[jvj+61]=t[x[jvj+61]];
goto l15;
l18:x[jvj+62]=t[x[jvj+62]];
goto l17;
l20:pile[v[22]]=jvj+4; pile[WZ1]=jvj+28; 
(*f[255])( );     /*COPEXP0(jvj+4,jvj+28)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=625; pile[WZ4]=jvj+41; 
(*f[181])( );     /*QUADRI2(100,20,101,625,jvj+41)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=B; pile[WZ4]=jvj+43; 
(*f[192])( );     /*QUADRI4(100,41,130,B,jvj+43)*/
pile[WZ3]=C; pile[WZ4]=jvj+39; 
(*f[192])( );     /*QUADRI4(100,41,130,C,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=160; pile[WZ2]=jvj+40; 
(*f[54])( );     /*TRI1(jvj+39,160,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=jvj+41; pile[WZ2]=111; pile[WZ3]=jvj+42; 
(*f[58])( );     /*TRI3(jvj+40,jvj+41,111,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=jvj+43; pile[WZ2]=103; pile[WZ3]=jvj+44; 
(*f[58])( );     /*TRI3(jvj+42,jvj+43,103,jvj+44)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+28; pile[WZ4]=jvj+44; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+28,jvj+44,R)*/
goto l22;
l21:v[0]=jvj; v[22]-=4; v[102]=1;return;
l23:V11=134;
goto l1;
l24:V37=134;
goto l3;
}
