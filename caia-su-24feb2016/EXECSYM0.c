#include "dx.h"
void EXECSYM0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V7=0,V13=0,V8=0,V10=0,V20=0,V21=0;
int P,A,FF;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=22;
x[jvj+1]=11080;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3988&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
P=pile[v[22]]; A=pile[v[22]+1]; FF=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=vo[12];z[jvj+2]=vz[12];
x[jvj+3]=vo[13];z[jvj+3]=vz[13];
x[jvj+4]=vo[14];z[jvj+4]=vz[14];
x[jvj+5]=vo[16];z[jvj+5]=vz[16];
vo[30]=x[jvj+2];vz[30]=0;
vo[31]=x[jvj+3];vz[31]=0;
vo[32]=x[jvj+4];vz[32]=0;
vo[33]=x[jvj+5];vz[33]=0;
pile[v[22]]=v[42]; 
(*f[62])( );     /*INH0(v[42])*/
x[jvj+22]=incon;
if((FF==(-5963))) goto l4;
if((FF!=(-9009))) goto l6;
x[jvj+22]=26236 ;z[jvj+22]=26236;
l1:pile[v[22]]=159; pile[WZ1]=683; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(159,683,jvj+6)*/
l2:if((x[jvj+6]<=0)) goto l6;
x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=905; pile[WZ1]=jvj+7; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(905,jvj+7,V7)*/
V7=pile[WZ2]; 
if((V7!=(-5963))) goto l3;
x[jvj+9]=vo[12];z[jvj+9]=vz[12];
pile[v[22]]=117; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(117,jvj+9,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=1096; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(1096,jvj+7,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=109; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(109,jvj+9,jvj+10)*/
pile[v[22]]=(-1); pile[WZ1]=1121; pile[WZ2]=jvj+16; 
(*f[46])( );     /*TRI0((-1),1121,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=A; pile[WZ2]=1081; pile[WZ3]=jvj+17; 
(*f[301])( );     /*TRI11(jvj+16,A,1081,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=844; pile[WZ2]=860; pile[WZ3]=jvj+18; 
(*f[58])( );     /*TRI3(jvj+17,844,860,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=V10; pile[WZ2]=683; pile[WZ3]=jvj+19; 
(*f[189])( );     /*TRI4(jvj+18,V10,683,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+10; pile[WZ2]=449; pile[WZ3]=jvj+20; 
(*f[58])( );     /*TRI3(jvj+19,jvj+10,449,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=(-7141); pile[WZ2]=163; pile[WZ3]=jvj+21; 
(*f[631])( );     /*TRI16(jvj+20,(-7141),163,jvj+21)*/
pile[v[22]]=109; pile[WZ1]=jvj+22; pile[WZ2]=117; pile[WZ3]=V8; pile[WZ4]=jvj+21; pile[WZ5]=jvj+8; 
(*f[47])( );     /*QUADRI0(109,jvj+22,117,V8,jvj+21,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=1200; 
(*f[1261])( );     /*NOUVSAUVE1(jvj+8,1200)*/
vo[12]=x[jvj+8];vz[12]=0;
pile[v[22]]=163; pile[WZ1]=jvj+9; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(163,jvj+9,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=jvj+8; pile[WZ1]=190; pile[WZ2]=V13; 
(*f[177])( );     /*CHGC4(jvj+8,190,V13)*/
l5:pile[v[22]]=jvj+8; 
(*f[1255])( );     /*SOREXP1(jvj+8)*/
pile[v[22]]=P; 
(*f[1190])( );     /*MALICE0(P)*/
pile[v[22]]=A; 
(*f[4062])( );     /*STOSYM0(A)*/
l6:x[jvj+11]=vo[30];z[jvj+11]=vz[30];
x[jvj+12]=vo[31];z[jvj+12]=vz[31];
x[jvj+13]=vo[32];z[jvj+13]=vz[32];
x[jvj+14]=vo[33];z[jvj+14]=vz[33];
vo[12]=x[jvj+11];vz[12]=0;
vo[13]=x[jvj+12];vz[13]=0;
vo[14]=x[jvj+13];vz[14]=0;
vo[16]=x[jvj+14];vz[16]=0;
V20=vv[16];
pile[v[22]]=V20; 
(*f[62])( );     /*INH0(V20)*/
V21=vv[21];
if((V21<=0)) goto l7;
pile[v[22]]=43; pile[WZ1]=32; 
(*f[139])( );     /*EDITE1(43,32)*/
l7:x[jvj+15]=vo[32];z[jvj+15]=vz[32];
pile[v[22]]=jvj+15; pile[WZ1]=893; pile[WZ2]=12; 
(*f[35])( );     /*CHGC1(jvj+15,893,12)*/
l8:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l3:x[jvj+6]=t[x[jvj+6]];
goto l2;
l4:x[jvj+22]=26098 ;z[jvj+22]=26098;
goto l1;
}
