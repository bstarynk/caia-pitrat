#include "dx.h"
void FAIRETOTAL0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V22=0,NN=0,V8=0,V9=0,V7=0,V6=0,V5=0,R=0,V18=0,V12=0,V11=0,V15=0,V16=0,V33=0,V34=0,V35=0,V36=0,V37=0,V38=0,V39=0,V40=0,V41=0,V42=0,V43=0,V44=0,V45=0,V46=0,V47=0,V48=0,V49=0,V50=0,V51=0;
int B;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=20;
x[jvj+1]=11064;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1535&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
B=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=645; pile[WZ1]=597; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(645,597,jvj+2)*/
l1:if((x[jvj+2]<=0)) goto l4;
x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=1092; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(1092,jvj+3,jvj+4)*/
if((x[jvj+4]!=255)) goto l2;
pile[v[22]]=683; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(683,jvj+3,V22)*/
V22=pile[WZ2]; 
NN=V22;
pile[v[22]]=876; pile[WZ1]=B; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(876,B,V8)*/
V8=pile[WZ2]; 
x[jvj+5]=vo[12];z[jvj+5]=vz[12];
pile[v[22]]=683; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(683,jvj+5,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=936; pile[WZ1]=B; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(936,B,V7)*/
V7=pile[WZ2]; 
V6=V7*3;
V5=V6+10;
pile[v[22]]=1078; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(1078,B,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=jvj+9; 
(*f[378])( );     /*CPI0(jvj+6,jvj+9)*/
V33=x[jvj+9];
pile[v[22]]=jvj+9; pile[WZ1]=0; pile[WZ2]=V33; pile[WZ3]=117; 
(*f[285])( );     /*ENLY0(jvj+9,0,V33,117,V34,V35)*/
V34=pile[WZ4]; V35=pile[WZ5]; 
pile[WZ1]=V35; pile[WZ2]=V34; pile[WZ3]=978; 
(*f[285])( );     /*ENLY0(jvj+9,V35,V34,978,V36,V37)*/
V36=pile[WZ4]; V37=pile[WZ5]; 
pile[WZ1]=V37; pile[WZ2]=V36; pile[WZ3]=999; 
(*f[285])( );     /*ENLY0(jvj+9,V37,V36,999,V38,V39)*/
V38=pile[WZ4]; V39=pile[WZ5]; 
pile[WZ1]=V39; pile[WZ2]=V38; pile[WZ3]=1002; 
(*f[285])( );     /*ENLY0(jvj+9,V39,V38,1002,V40,V41)*/
V40=pile[WZ4]; V41=pile[WZ5]; 
pile[WZ1]=V41; pile[WZ2]=V40; pile[WZ3]=1025; 
(*f[285])( );     /*ENLY0(jvj+9,V41,V40,1025,V42,V43)*/
V42=pile[WZ4]; V43=pile[WZ5]; 
pile[WZ1]=V43; pile[WZ2]=V42; pile[WZ3]=1042; 
(*f[285])( );     /*ENLY0(jvj+9,V43,V42,1042,V44,V45)*/
V44=pile[WZ4]; V45=pile[WZ5]; 
pile[WZ1]=V45; pile[WZ2]=V44; pile[WZ3]=1080; 
(*f[285])( );     /*ENLY0(jvj+9,V45,V44,1080,V46,V47)*/
V46=pile[WZ4]; V47=pile[WZ5]; 
pile[WZ1]=V47; pile[WZ2]=V46; pile[WZ3]=1104; 
(*f[285])( );     /*ENLY0(jvj+9,V47,V46,1104,V48,V49)*/
V48=pile[WZ4]; V49=pile[WZ5]; 
pile[WZ1]=V49; pile[WZ2]=V48; pile[WZ3]=1121; 
(*f[285])( );     /*ENLY0(jvj+9,V49,V48,1121,V50,V51)*/
V50=pile[WZ4]; V51=pile[WZ5]; 
pile[v[22]]=1048; pile[WZ1]=B; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(1048,B,jvj+7)*/
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[255])( );     /*COPEXP0(jvj+7,jvj+8)*/
pile[v[22]]=1025; pile[WZ1]=jvj+9; 
(*f[71])( );     /*ENLV0(1025,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=936; pile[WZ2]=V5; 
(*f[43])( );     /*CHGC2(jvj+9,936,V5)*/
pile[WZ1]=860; pile[WZ2]=301; 
(*f[35])( );     /*CHGC1(jvj+9,860,301)*/
pile[WZ1]=1056; pile[WZ2]=1060; 
(*f[36])( );     /*PLUSC0(jvj+9,1056,1060)*/
pile[v[22]]=29; pile[WZ1]=145; pile[WZ2]=jvj+20; 
(*f[54])( );     /*TRI1(29,145,jvj+20)*/
pile[v[22]]=117; pile[WZ1]=V8; pile[WZ2]=122; pile[WZ3]=876; pile[WZ4]=jvj+20; pile[WZ5]=jvj+10; 
(*f[725])( );     /*QUADRI14(117,V8,122,876,jvj+20,jvj+10)*/
pile[v[22]]=jvj+9; pile[WZ1]=735; pile[WZ2]=jvj+10; 
(*f[35])( );     /*CHGC1(jvj+9,735,jvj+10)*/
pile[v[22]]=698; pile[WZ1]=jvj+8; pile[WZ2]=1110; pile[WZ3]=1; pile[WZ4]=jvj+11; 
(*f[192])( );     /*QUADRI4(698,jvj+8,1110,1,jvj+11)*/
pile[v[22]]=jvj+9; pile[WZ1]=1025; pile[WZ2]=jvj+11; 
(*f[36])( );     /*PLUSC0(jvj+9,1025,jvj+11)*/
pile[WZ1]=1062; pile[WZ2]=616; 
(*f[35])( );     /*CHGC1(jvj+9,1062,616)*/
pile[WZ1]=1121; pile[WZ2]=1; 
(*f[43])( );     /*CHGC2(jvj+9,1121,1)*/
pile[WZ1]=359; pile[WZ2]=V9; 
(*f[43])( );     /*CHGC2(jvj+9,359,V9)*/
pile[WZ1]=683; pile[WZ2]=NN; 
(*f[43])( );     /*CHGC2(jvj+9,683,NN)*/
pile[WZ1]=1161; pile[WZ2]=978; 
(*f[35])( );     /*CHGC1(jvj+9,1161,978)*/
(*f[1262])( );if(v[102]) goto l4;     /*AJEXP2(jvj+9,R)*/
R=pile[WZ1]; 
pile[v[22]]=1076; pile[WZ1]=966; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(1076,966,V12)*/
V12=pile[WZ2]; 
V11=V12+1;
x[jvj+12]=vo[12];z[jvj+12]=vz[12];
pile[v[22]]=109; pile[WZ1]=jvj+12; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(109,jvj+12,jvj+14)*/
pile[v[22]]=117; pile[WZ1]=B; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(117,B,V15)*/
V15=pile[WZ2]; 
pile[v[22]]=683; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(683,jvj+12,V16)*/
V16=pile[WZ2]; 
pile[v[22]]=V15; pile[WZ1]=1114; pile[WZ2]=jvj+15; 
(*f[46])( );     /*TRI0(V15,1114,jvj+15)*/
pile[v[22]]=R; pile[WZ1]=(-41); pile[WZ3]=1104; pile[WZ4]=jvj+16; 
(*f[1349])( );     /*TRIENS2(R,(-41),jvj+15,1104,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=V11; pile[WZ2]=1076; pile[WZ3]=jvj+17; 
(*f[189])( );     /*TRI4(jvj+16,V11,1076,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=301; pile[WZ2]=860; pile[WZ3]=jvj+18; 
(*f[58])( );     /*TRI3(jvj+17,301,860,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=NN; pile[WZ2]=683; pile[WZ3]=jvj+19; 
(*f[189])( );     /*TRI4(jvj+18,NN,683,jvj+19)*/
pile[v[22]]=109; pile[WZ1]=jvj+14; pile[WZ2]=359; pile[WZ3]=V16; pile[WZ4]=jvj+19; pile[WZ5]=jvj+13; 
(*f[47])( );     /*QUADRI0(109,jvj+14,359,V16,jvj+19,jvj+13)*/
pile[v[22]]=163; pile[WZ1]=jvj+12; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(163,jvj+12,V18)*/
V18=pile[WZ2]; 
pile[v[22]]=jvj+13; pile[WZ1]=163; pile[WZ2]=V18; 
(*f[177])( );     /*CHGC4(jvj+13,163,V18)*/
l3:pile[v[22]]=924; pile[WZ1]=1109; pile[WZ2]=jvj+13; 
(*f[36])( );     /*PLUSC0(924,1109,jvj+13)*/
pile[v[22]]=966; pile[WZ1]=1076; pile[WZ2]=V11; 
(*f[43])( );     /*CHGC2(966,1076,V11)*/
l4:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l2:x[jvj+2]=t[x[jvj+2]];
goto l1;
}
