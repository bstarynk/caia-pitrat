#include "dx.h"
void APPROFONDIT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V23=0,NN=0,V19=0,V13=0,V12=0,V16=0,V17=0,V6=0,V5=0,V10=0,V30=0,V31=0,V33=0;
int B;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=20;
x[jvj+1]=10954;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1250&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
B=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=vo[14];z[jvj+2]=vz[14];
pile[v[22]]=1112; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(1112,jvj+2,jvj+3)*/
pile[v[22]]=jvj+3; 
(*f[1523])( );     /*NUMEROTE0(jvj+3)*/
l1:pile[v[22]]=645; pile[WZ1]=597; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(645,597,jvj+4)*/
l2:if((x[jvj+4]<=0)) goto l7;
x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=1092; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(1092,jvj+5,jvj+6)*/
if((x[jvj+6]!=255)) goto l3;
pile[v[22]]=683; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(683,jvj+5,V23)*/
V23=pile[WZ2]; 
NN=V23;
pile[v[22]]=1076; pile[WZ1]=966; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(1076,966,V13)*/
V13=pile[WZ2]; 
V12=V13+1;
pile[v[22]]=117; pile[WZ1]=B; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(117,B,V16)*/
V16=pile[WZ2]; 
x[jvj+7]=vo[12];z[jvj+7]=vz[12];
pile[v[22]]=683; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(683,jvj+7,V17)*/
V17=pile[WZ2]; 
pile[v[22]]=109; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(109,jvj+7,jvj+9)*/
pile[v[22]]=V16; pile[WZ1]=1114; pile[WZ2]=jvj+14; 
(*f[46])( );     /*TRI0(V16,1114,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=V12; pile[WZ2]=1076; pile[WZ3]=jvj+15; 
(*f[189])( );     /*TRI4(jvj+14,V12,1076,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=1082; pile[WZ2]=860; pile[WZ3]=jvj+16; 
(*f[58])( );     /*TRI3(jvj+15,1082,860,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=NN; pile[WZ2]=683; pile[WZ3]=jvj+17; 
(*f[189])( );     /*TRI4(jvj+16,NN,683,jvj+17)*/
pile[v[22]]=109; pile[WZ1]=jvj+9; pile[WZ2]=359; pile[WZ3]=V17; pile[WZ4]=jvj+17; pile[WZ5]=jvj+8; 
(*f[47])( );     /*QUADRI0(109,jvj+9,359,V17,jvj+17,jvj+8)*/
pile[v[22]]=163; pile[WZ1]=jvj+7; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(163,jvj+7,V19)*/
V19=pile[WZ2]; 
pile[v[22]]=jvj+8; pile[WZ1]=163; pile[WZ2]=V19; 
(*f[177])( );     /*CHGC4(jvj+8,163,V19)*/
l4:pile[v[22]]=966; pile[WZ1]=1076; pile[WZ2]=V12; 
(*f[43])( );     /*CHGC2(966,1076,V12)*/
pile[v[22]]=192; pile[WZ1]=1099; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(192,1099,V6)*/
V6=pile[WZ2]; 
x[jvj+10]=vo[14];z[jvj+10]=vz[14];
pile[v[22]]=1112; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(1112,jvj+10,jvj+11)*/
l5:x[jvj+12]=x[jvj+11] ;z[jvj+12]=z[jvj+11];
pile[v[22]]=1110; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(1110,jvj+12,V5)*/
V5=pile[WZ2]; 
if((V5>=V6)) goto l6;
pile[v[22]]=204; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(204,jvj+12,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=698; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(698,jvj+12,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=1110; pile[WZ2]=V5; 
(*f[43])( );     /*CHGC2(jvj+13,1110,V5)*/
pile[WZ1]=204; pile[WZ2]=V10; 
(*f[43])( );     /*CHGC2(jvj+13,204,V10)*/
pile[WZ1]=122; pile[WZ2]=876; 
(*f[35])( );     /*CHGC1(jvj+13,122,876)*/
pile[v[22]]=25; pile[WZ1]=145; pile[WZ2]=jvj+18; 
(*f[54])( );     /*TRI1(25,145,jvj+18)*/
pile[v[22]]=101; pile[WZ1]=191; pile[WZ2]=122; pile[WZ3]=935; pile[WZ4]=jvj+18; pile[WZ5]=jvj+19; 
(*f[269])( );     /*QUADRI6(101,191,122,935,jvj+18,jvj+19)*/
pile[v[22]]=jvj+13; pile[WZ1]=735; pile[WZ2]=jvj+19; 
(*f[35])( );     /*CHGC1(jvj+13,735,jvj+19)*/
pile[WZ1]=860; pile[WZ2]=1082; 
(*f[35])( );     /*CHGC1(jvj+13,860,1082)*/
pile[WZ1]=1062; pile[WZ2]=616; 
(*f[35])( );     /*CHGC1(jvj+13,1062,616)*/
pile[WZ1]=1121; pile[WZ2]=1; 
(*f[43])( );     /*CHGC2(jvj+13,1121,1)*/
pile[WZ1]=683; pile[WZ2]=NN; 
(*f[43])( );     /*CHGC2(jvj+13,683,NN)*/
pile[WZ1]=1161; pile[WZ2]=978; 
(*f[35])( );     /*CHGC1(jvj+13,1161,978)*/
pile[WZ1]=1056; pile[WZ2]=1060; 
(*f[36])( );     /*PLUSC0(jvj+13,1056,1060)*/
pile[v[22]]=936; pile[WZ1]=1082; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(936,1082,V30)*/
V30=pile[WZ2]; 
pile[v[22]]=jvj+13; pile[WZ1]=936; pile[WZ2]=V30; 
(*f[43])( );     /*CHGC2(jvj+13,936,V30)*/
l8:x[jvj+20]=vo[12];z[jvj+20]=vz[12];
pile[v[22]]=683; pile[WZ1]=jvj+20; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(683,jvj+20,V31)*/
V31=pile[WZ2]; 
pile[v[22]]=jvj+13; pile[WZ1]=359; pile[WZ2]=V31; 
(*f[43])( );     /*CHGC2(jvj+13,359,V31)*/
l9:pile[v[22]]=jvj+13; 
(*f[1262])( );if(v[102]) goto l6;     /*AJEXP2(jvj+13,V33)*/
V33=pile[WZ1]; 
pile[v[22]]=V33; pile[WZ1]=1104; pile[WZ2]=jvj+8; 
(*f[235])( );     /*PLUSC2(V33,1104,jvj+8)*/
pile[v[22]]=924; pile[WZ1]=1109; 
(*f[36])( );     /*PLUSC0(924,1109,jvj+8)*/
l6:pile[v[22]]=120; pile[WZ1]=jvj+12; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(120,jvj+12,jvj+11)*/
goto l5;
l3:x[jvj+4]=t[x[jvj+4]];
goto l2;
l7:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
