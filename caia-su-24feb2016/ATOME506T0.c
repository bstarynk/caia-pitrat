#include "dx.h"
void ATOME506T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V66=0,V68=0,I=0,V81=0,V20=0,V82=0,V75=0,V25=0,V84=0,V26=0,V85=0,V35=0,V79=0,V50=0,V67=0,V69=0,V28=0,V27=0;
int NNNI;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=65;
x[jvj+1]=20506;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3929&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNI=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=NNNI; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(111,NNNI,jvj+20)*/
pile[v[22]]=101; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(101,jvj+20,jvj+21)*/
if((x[jvj+21]!=29)) goto l26;
pile[v[22]]=103; pile[WZ1]=NNNI; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(103,NNNI,jvj+22)*/
pile[v[22]]=111; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(111,jvj+22,jvj+23)*/
pile[v[22]]=101; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(101,jvj+23,jvj+24)*/
if((x[jvj+24]!=485)) goto l26;
pile[v[22]]=107; pile[WZ1]=jvj+22; pile[WZ2]=jvj+25; 
(*f[33])( );     /*FNDE0(107,jvj+22,jvj+25)*/
for(i=x[jvj+25],V35=0;i>0;i=t[i],V35++)  ;
if((V35!=2)) goto l26;
x[jvj+16]=vo[14];z[jvj+16]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+16; 
(*f[26])( );if(v[102]) goto l26;     /*FNDC0(642,jvj+16,V79)*/
V79=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=NNNI; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(102,NNNI,jvj+3)*/
pile[v[22]]=100; pile[WZ1]=jvj+3; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(100,jvj+3,jvj+26)*/
if((x[jvj+26]!=484)) goto l26;
pile[v[22]]=jvj+3; pile[WZ1]=jvj+27; 
(*f[200])( );if(v[102]) goto l26;     /*NDD0(jvj+3,jvj+27)*/
pile[v[22]]=509; pile[WZ2]=jvj+28; 
(*f[1969])( );     /*FNDEND0(509,jvj+27,jvj+28)*/
l14:if((x[jvj+28]<=0)) goto l26;
x[jvj+9]=s[x[jvj+28]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+28];
pile[v[22]]=111; pile[WZ1]=jvj+9; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(111,jvj+9,jvj+29)*/
pile[v[22]]=101; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(101,jvj+29,jvj+30)*/
if((x[jvj+30]!=29)) goto l15;
pile[v[22]]=103; pile[WZ1]=jvj+9; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(103,jvj+9,jvj+31)*/
pile[v[22]]=111; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(111,jvj+31,jvj+32)*/
pile[v[22]]=101; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(101,jvj+32,jvj+33)*/
if((x[jvj+33]!=485)) goto l15;
pile[v[22]]=107; pile[WZ1]=jvj+31; pile[WZ2]=jvj+34; 
(*f[33])( );     /*FNDE0(107,jvj+31,jvj+34)*/
for(i=x[jvj+34],V50=0;i>0;i=t[i],V50++)  ;
if((V50!=2)) goto l15;
x[jvj+12]=0 ;z[jvj+12]=0;
pile[v[22]]=1006; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(1006,jvj+9,jvj+10)*/
pile[WZ1]=NNNI; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(1006,NNNI,jvj+11)*/
V82=x[jvj+10];
l3:if((V82>0)) goto l4;
if((x[jvj+12]!=0)) goto l15;
pile[v[22]]=102; pile[WZ1]=jvj+9; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(102,jvj+9,jvj+35)*/
x[jvj+17]=0 ;z[jvj+17]=0;
pile[v[22]]=929; pile[WZ1]=jvj+16; 
(*f[1975])( );if(v[102]) goto l9;     /*FNDCND0(929,jvj+16,V75)*/
V75=pile[WZ2]; 
pile[v[22]]=jvj+17; pile[WZ1]=V75; 
(*f[207])( );     /*PLUE2(jvj+17,V75)*/
l9:pile[v[22]]=1006; pile[WZ1]=jvj+9; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(1006,jvj+9,jvj+18)*/
V84=x[jvj+18];
l10:if((V84>0)) goto l11;
pile[v[22]]=1006; pile[WZ1]=NNNI; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(1006,NNNI,jvj+19)*/
V85=x[jvj+19];
l12:if((V85>0)) goto l13;
x[jvj+5]=x[jvj+35] ;z[jvj+5]=z[jvj+35];
x[jvj+64]=x[jvj+25] ;z[jvj+64]=z[jvj+25];
l16:if((x[jvj+64]<=0)) goto l15;
x[jvj+60]=s[x[jvj+64]] ;z[jvj+60]=(x[jvj+60]<=sepcte) ? x[jvj+60] : z[jvj+64];
x[jvj+36]=x[jvj+60] ;z[jvj+36]=z[jvj+60];
pile[v[22]]=jvj+35; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[760])( );     /*MEMEX0(jvj+35,jvj+36,jvj+37)*/
if((x[jvj+37]==135)) goto l19;
l17:x[jvj+64]=t[x[jvj+64]];
goto l16;
l2:I=s[V81];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+48; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+48)*/
pile[WZ3]=485; pile[WZ4]=jvj+52; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+52)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+53; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+53)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+52; pile[WZ4]=jvj+50; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+52,jvj+50)*/
pile[v[22]]=jvj+50; pile[WZ1]=107; pile[WZ2]=jvj+6; 
(*f[36])( );     /*PLUSC0(jvj+50,107,jvj+6)*/
pile[WZ2]=jvj+53; 
(*f[36])( );     /*PLUSC0(jvj+50,107,jvj+53)*/
pile[v[22]]=jvj+48; pile[WZ1]=111; pile[WZ2]=jvj+49; 
(*f[54])( );     /*TRI1(jvj+48,111,jvj+49)*/
pile[v[22]]=jvj+49; pile[WZ1]=jvj+50; pile[WZ2]=103; pile[WZ3]=jvj+51; 
(*f[58])( );     /*TRI3(jvj+49,jvj+50,103,jvj+51)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+4; pile[WZ4]=jvj+51; pile[WZ5]=jvj+8; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+4,jvj+51,jvj+8)*/
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[522])( );     /*PLUB2(jvj+7,jvj+8)*/
V81=t[V81];
l1:if((V81>0)) goto l2;
for(i=x[jvj+7],V27=0;i>0;i=t[i],V27++)  ;
if((V27!=V28)) goto l25;
x[jvj+15]=0 ;z[jvj+15]=0;
l7:if((x[jvj+7]>0)) goto l8;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+45; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+45)*/
pile[v[22]]=jvj+45; pile[WZ1]=111; pile[WZ2]=jvj+46; 
(*f[54])( );     /*TRI1(jvj+45,111,jvj+46)*/
pile[v[22]]=jvj+46; pile[WZ1]=jvj+15; pile[WZ2]=107; pile[WZ3]=jvj+47; 
(*f[301])( );     /*TRI11(jvj+46,jvj+15,107,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+43; 
(*f[58])( );     /*TRI3(jvj+47,22,100,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=1006; pile[WZ2]=jvj+17; 
(*f[34])( );     /*CHGC0(jvj+43,1006,jvj+17)*/
pile[v[22]]=101; pile[WZ1]=NNNI; pile[WZ2]=110; pile[WZ3]=(-11593); pile[WZ4]=jvj+58; 
(*f[270])( );     /*QUADRI7(101,NNNI,110,(-11593),jvj+58)*/
pile[v[22]]=V79; pile[WZ1]=858; pile[WZ2]=jvj+54; 
(*f[46])( );     /*TRI0(V79,858,jvj+54)*/
pile[v[22]]=jvj+54; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+55; 
(*f[189])( );     /*TRI4(jvj+54,v[13],642,jvj+55)*/
pile[v[22]]=jvj+55; pile[WZ1]=3929; pile[WZ2]=246; pile[WZ3]=jvj+56; 
(*f[189])( );     /*TRI4(jvj+55,3929,246,jvj+56)*/
pile[v[22]]=jvj+56; pile[WZ1]=20506; pile[WZ2]=218; pile[WZ3]=jvj+57; 
(*f[58])( );     /*TRI3(jvj+56,20506,218,jvj+57)*/
pile[v[22]]=jvj+58; pile[WZ1]=(-20); pile[WZ2]=jvj+57; pile[WZ3]=159; pile[WZ4]=jvj+59; 
(*f[298])( );     /*TRIENS1(jvj+58,(-20),jvj+57,159,jvj+59)*/
pile[v[22]]=jvj+59; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+44; 
(*f[58])( );     /*TRI3(jvj+59,1,158,jvj+44)*/
pile[v[22]]=jvj+43; pile[WZ1]=jvj+44; 
(*f[1296])( );     /*NOUVCONTR0(jvj+43,jvj+44)*/
l25:x[jvj+63]=t[x[jvj+63]];
l23:if((x[jvj+63]<=0)) goto l22;
x[jvj+41]=s[x[jvj+63]] ;z[jvj+41]=(x[jvj+41]<=sepcte) ? x[jvj+41] : z[jvj+63];
if((x[jvj+62]==x[jvj+41])) goto l25;
pile[v[22]]=130; pile[WZ1]=jvj+41; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(130,jvj+41,V69)*/
V69=pile[WZ2]; 
V68=1-V69;
pile[v[22]]=V66; pile[WZ1]=V68; pile[WZ2]=jvj+42; 
(*f[3801])( );     /*ENSINTERV0(V66,V68,jvj+42)*/
for(i=x[jvj+42],V28=0;i>0;i=t[i],V28++)  ;
x[jvj+7]=0 ;z[jvj+7]=0;
pile[WZ2]=jvj+2; 
(*f[3801])( );     /*ENSINTERV0(V66,V68,jvj+2)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[255])( );     /*COPEXP0(jvj+3,jvj+4)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[255])( );     /*COPEXP0(jvj+5,jvj+6)*/
V81=x[jvj+2];
goto l1;
l4:V20=s[V82];
for(a=x[jvj+11];a>0;a=t[a]) if(s[a]==V20) goto l6;
l5:V82=t[V82];
goto l3;
l6:pile[v[22]]=jvj+12; pile[WZ1]=V20; 
(*f[207])( );     /*PLUE2(jvj+12,V20)*/
goto l5;
l8:x[jvj+13]=s[x[jvj+7]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+7];
pile[v[22]]=jvj+13; pile[WZ1]=jvj+14; 
(*f[255])( );     /*COPEXP0(jvj+13,jvj+14)*/
pile[v[22]]=jvj+15; 
(*f[68])( );     /*PLUE0(jvj+15,jvj+14)*/
x[jvj+7]=t[x[jvj+7]];
goto l7;
l11:V25=s[V84];
pile[v[22]]=jvj+17; pile[WZ1]=V25; 
(*f[207])( );     /*PLUE2(jvj+17,V25)*/
V84=t[V84];
goto l10;
l13:V26=s[V85];
pile[v[22]]=jvj+17; pile[WZ1]=V26; 
(*f[207])( );     /*PLUE2(jvj+17,V26)*/
V85=t[V85];
goto l12;
l15:x[jvj+28]=t[x[jvj+28]];
goto l14;
l19:x[jvj+61]=x[jvj+25] ;z[jvj+61]=z[jvj+25];
l18:if((x[jvj+61]<=0)) goto l17;
x[jvj+38]=s[x[jvj+61]] ;z[jvj+38]=(x[jvj+38]<=sepcte) ? x[jvj+38] : z[jvj+61];
if((x[jvj+60]==x[jvj+38])) goto l20;
pile[v[22]]=130; pile[WZ1]=jvj+38; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(130,jvj+38,V67)*/
V67=pile[WZ2]; 
V66=V67-1;
x[jvj+65]=x[jvj+34] ;z[jvj+65]=z[jvj+34];
l21:if((x[jvj+65]<=0)) goto l20;
x[jvj+62]=s[x[jvj+65]] ;z[jvj+62]=(x[jvj+62]<=sepcte) ? x[jvj+62] : z[jvj+65];
x[jvj+39]=x[jvj+62] ;z[jvj+39]=z[jvj+62];
pile[v[22]]=jvj+3; pile[WZ1]=jvj+39; pile[WZ2]=jvj+40; 
(*f[760])( );     /*MEMEX0(jvj+3,jvj+39,jvj+40)*/
if((x[jvj+40]==135)) goto l24;
l22:x[jvj+65]=t[x[jvj+65]];
goto l21;
l20:x[jvj+61]=t[x[jvj+61]];
goto l18;
l24:x[jvj+63]=x[jvj+34] ;z[jvj+63]=z[jvj+34];
goto l23;
l26:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
