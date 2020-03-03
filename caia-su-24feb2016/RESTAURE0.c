#include "dx.h"
void RESTAURE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V16=0;
int B,A,HIST;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=28;
x[jvj+1]=11258;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1558&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
B=pile[v[22]]; A=pile[v[22]+1]; HIST=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=incon;
pile[v[22]]=A; pile[WZ1]=jvj+2; 
(*f[799])( );if(v[102]) goto l3;     /*NORME0(A,jvj+2)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=134; pile[WZ4]=jvj+6; 
(*f[181])( );     /*QUADRI2(100,20,101,134,jvj+6)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[760])( );     /*MEMEX0(jvj+2,jvj+6,jvj+7)*/
if((x[jvj+7]==135)) goto l1;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=135; pile[WZ4]=jvj+8; 
(*f[181])( );     /*QUADRI2(100,20,101,135,jvj+8)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[760])( );     /*MEMEX0(jvj+2,jvj+8,jvj+9)*/
if((x[jvj+9]==135)) goto l2;
l3:x[jvj+13]=67 ;z[jvj+13]=67;
l5:pile[v[22]]=1070; pile[WZ1]=B; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(1070,B,jvj+12)*/
if((x[jvj+12]==68)) goto l7;
l6:pile[v[22]]=B; pile[WZ1]=HIST; pile[WZ2]=jvj+13; 
(*f[1752])( );     /*ELIMINE1(B,HIST,jvj+13)*/
l7:if(x[jvj+2]!=incon) goto l8;
l10:if((x[jvj+13]!=12)) goto l11;
l16:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l1:x[jvj+13]=12 ;z[jvj+13]=12;
goto l5;
l2:x[jvj+13]=68 ;z[jvj+13]=68;
if((v[93]<=0)) goto l5;
x[jvj+3]=vo[14];z[jvj+3]=vz[14];
pile[v[22]]=1415; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(1415,jvj+3,jvj+4)*/
pile[v[22]]=1525; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(1525,jvj+4,jvj+5)*/
pile[v[22]]=jvj+4; pile[WZ1]=846; 
(*f[1211])( );     /*MARKUTILE0(jvj+4,846)*/
pile[WZ1]=1462; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+4,1462,1)*/
pile[v[22]]=jvj+5; 
(*f[186])( );     /*BTC0(jvj+5,1462,1)*/
goto l5;
l8:if((x[jvj+13]==68)) goto l11;
pile[v[22]]=1070; pile[WZ1]=B; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(1070,B,jvj+10)*/
pile[v[22]]=jvj+2; pile[WZ1]=1070; 
(*f[35])( );     /*CHGC1(jvj+2,1070,jvj+10)*/
l4:pile[v[22]]=1411; pile[WZ1]=B; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(1411,B,jvj+11)*/
pile[v[22]]=jvj+2; pile[WZ1]=1411; 
(*f[35])( );     /*CHGC1(jvj+2,1411,jvj+11)*/
l9:pile[v[22]]=jvj+2; pile[WZ1]=HIST; 
(*f[1751])( );     /*NOUVCONTR1(jvj+2,HIST)*/
goto l10;
l11:x[jvj+14]=vo[16];z[jvj+14]=vz[16];
pile[v[22]]=509; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(509,jvj+14,jvj+15)*/
if((x[jvj+15]!=0)) goto l16;
x[jvj+16]=vo[14];z[jvj+16]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+16; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(642,jvj+16,V16)*/
V16=pile[WZ2]; 
pile[v[22]]=454; pile[WZ1]=jvj+14; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(454,jvj+14,jvj+17)*/
l12:if((x[jvj+17]<=0)) goto l16;
x[jvj+18]=s[x[jvj+17]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+17];
pile[v[22]]=480; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(480,jvj+18,jvj+19)*/
x[jvj+28]=x[jvj+19] ;z[jvj+28]=z[jvj+19];
l13:if((x[jvj+28]>0)) goto l14;
x[jvj+17]=t[x[jvj+17]];
goto l12;
l14:x[jvj+20]=s[x[jvj+28]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+28];
pile[v[22]]=489; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(489,jvj+20,jvj+21)*/
if((x[jvj+21]!=0)) goto l15;
pile[v[22]]=V16; pile[WZ1]=858; pile[WZ2]=jvj+24; 
(*f[46])( );     /*TRI0(V16,858,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+25; 
(*f[189])( );     /*TRI4(jvj+24,v[13],642,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=1558; pile[WZ2]=246; pile[WZ3]=jvj+26; 
(*f[189])( );     /*TRI4(jvj+25,1558,246,jvj+26)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=11258; pile[WZ4]=jvj+26; pile[WZ5]=jvj+22; 
(*f[269])( );     /*QUADRI6(158,1,218,11258,jvj+26,jvj+22)*/
pile[v[22]]=B; pile[WZ1]=(-20); pile[WZ2]=509; pile[WZ3]=jvj+27; 
(*f[180])( );     /*TRIENS0(B,(-20),509,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=1350; pile[WZ2]=277; pile[WZ3]=jvj+23; 
(*f[58])( );     /*TRI3(jvj+27,1350,277,jvj+23)*/
pile[v[22]]=jvj+22; pile[WZ1]=489; pile[WZ2]=jvj+20; 
(*f[1753])( );     /*LIER1(jvj+22,489,jvj+20,jvj+23)*/
l15:x[jvj+28]=t[x[jvj+28]];
goto l13;
}
