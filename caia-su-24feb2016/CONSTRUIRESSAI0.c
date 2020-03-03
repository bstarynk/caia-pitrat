#include "dx.h"
void CONSTRUIRESSAI0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,A=0,MM=0,J=0,H=0,V4=0,C=0,V16=0,V28=0,V21=0;
int B;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=26;
x[jvj+1]=10899;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==925&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
B=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=vo[14];z[jvj+2]=vz[14];
pile[v[22]]=1335; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(1335,jvj+2,V1)*/
V1=pile[WZ2]; 
if((V1<=0)) goto l2;
pile[v[22]]=jvj+2; pile[WZ1]=935; pile[WZ2]=1336; 
(*f[35])( );     /*CHGC1(jvj+2,935,1336)*/
l2:x[jvj+3]=vo[14];z[jvj+3]=vz[14];
x[jvj+5]=vo[12];z[jvj+5]=vz[12];
x[jvj+6]=incon;
pile[v[22]]=935; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(935,jvj+3,jvj+4)*/
if((x[jvj+4]!=325)) goto l1;
x[jvj+6]=954 ;z[jvj+6]=954;
l3:
(*f[184])( );     /*DATE1(A,MM,J,H)*/
A=pile[v[22]]; MM=pile[WZ1]; J=pile[WZ2]; H=pile[WZ3]; 
pile[v[22]]=jvj+3; 
(*f[948])( );     /*PCTREUSSI0(jvj+3,V4)*/
V4=pile[WZ1]; 
pile[v[22]]=jvj+5; pile[WZ1]=1078; pile[WZ2]=jvj+22; 
(*f[54])( );     /*TRI1(jvj+5,1078,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=V4; pile[WZ2]=1005; pile[WZ3]=jvj+23; 
(*f[189])( );     /*TRI4(jvj+22,V4,1005,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=J; pile[WZ2]=943; pile[WZ3]=jvj+24; 
(*f[189])( );     /*TRI4(jvj+23,J,943,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=MM; pile[WZ2]=942; pile[WZ3]=jvj+25; 
(*f[189])( );     /*TRI4(jvj+24,MM,942,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=A; pile[WZ2]=941; pile[WZ3]=jvj+26; 
(*f[189])( );     /*TRI4(jvj+25,A,941,jvj+26)*/
pile[v[22]]=860; pile[WZ1]=jvj+6; pile[WZ2]=938; pile[WZ3]=H; pile[WZ4]=jvj+26; pile[WZ5]=B; 
(*f[47])( );     /*QUADRI0(860,jvj+6,938,H,jvj+26,B)*/
pile[v[22]]=935; pile[WZ1]=jvj+3; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(935,jvj+3,jvj+7)*/
if((x[jvj+7]!=547)) goto l4;
pile[v[22]]=860; pile[WZ1]=jvj+5; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(860,jvj+5,jvj+8)*/
if((x[jvj+8]!=530)) goto l4;
pile[v[22]]=B; pile[WZ2]=jvj+9; 
(*f[1226])( );if(v[102]) goto l4;     /*PRIOMIN0(B,C,jvj+9)*/
C=pile[WZ1]; 
pile[WZ1]=1046; 
(*f[35])( );     /*CHGC1(B,1046,jvj+9)*/
pile[WZ1]=1047; pile[WZ2]=C; 
(*f[43])( );     /*CHGC2(B,1047,C)*/
l4:pile[v[22]]=1203; pile[WZ1]=jvj+3; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(1203,jvj+3,jvj+10)*/
if((x[jvj+10]==0)) goto l7;
pile[v[22]]=B; pile[WZ1]=1203; 
(*f[34])( );     /*CHGC0(B,1203,jvj+10)*/
l7:x[jvj+11]=d[95];z[jvj+11]=0;
l5:if((x[jvj+11]>0)) goto l6;
x[jvj+14]=d[96];z[jvj+14]=0;
l9:if((x[jvj+14]>0)) goto l10;
x[jvj+16]=vo[14];z[jvj+16]=vz[14];
pile[v[22]]=506; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(506,jvj+16,jvj+17)*/
if(x[jvj+17]==927||x[jvj+17]==1169) goto l13;
l12:pile[v[22]]=B; 
(*f[1227])( );     /*CHEXCLUS0(B)*/
l13:x[jvj+18]=vo[16];z[jvj+18]=vz[16];
pile[v[22]]=1035; pile[WZ1]=jvj+18; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(1035,jvj+18,V28)*/
V28=pile[WZ2]; 
pile[v[22]]=B; pile[WZ1]=1035; pile[WZ2]=V28; 
(*f[43])( );     /*CHGC2(B,1035,V28)*/
l14:x[jvj+19]=vo[12];z[jvj+19]=vz[12];
x[jvj+20]=d[97];z[jvj+20]=0;
l15:if((x[jvj+20]>0)) goto l16;
l19:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; v[102]=0;return;
l1:pile[v[22]]=860; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(860,jvj+5,jvj+6)*/
goto l3;
l6:x[jvj+12]=s[x[jvj+11]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+11];
pile[v[22]]=jvj+12; pile[WZ1]=jvj+3; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(jvj+12,jvj+3,jvj+13)*/
pile[v[22]]=B; pile[WZ1]=jvj+12; 
(*f[35])( );     /*CHGC1(B,jvj+12,jvj+13)*/
l8:x[jvj+11]=t[x[jvj+11]];
goto l5;
l10:x[jvj+15]=s[x[jvj+14]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+14];
pile[v[22]]=jvj+15; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(jvj+15,jvj+3,V16)*/
V16=pile[WZ2]; 
pile[v[22]]=B; pile[WZ1]=jvj+15; pile[WZ2]=V16; 
(*f[43])( );     /*CHGC2(B,jvj+15,V16)*/
l11:x[jvj+14]=t[x[jvj+14]];
goto l9;
l16:x[jvj+21]=s[x[jvj+20]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+20];
pile[v[22]]=jvj+21; pile[WZ1]=jvj+19; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(jvj+21,jvj+19,V21)*/
V21=pile[WZ2]; 
pile[v[22]]=B; pile[WZ1]=jvj+21; pile[WZ2]=V21; 
(*f[43])( );     /*CHGC2(B,jvj+21,V21)*/
l17:x[jvj+20]=t[x[jvj+20]];
goto l15;
l18:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; v[102]=1;return;
}
