#include "dx.h"
void MEMORESSAI0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int N=0,V5=0,V10=0,V11=0,V7=0,V2=0,V15=0,V28=0;
int B,BL,RS;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=20;
x[jvj+1]=11048;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1542&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
B=pile[v[22]]; BL=pile[v[22]+1]; RS=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+3]=x[jvj+2]=N=incon;
pile[v[22]]=860; pile[WZ1]=B; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(860,B,jvj+2)*/
pile[v[22]]=jvj+2; pile[WZ1]=RS; pile[WZ2]=jvj+3; 
(*f[1727])( );     /*QUELMEM0(jvj+2,RS,jvj+3)*/
l1:pile[v[22]]=683; pile[WZ1]=B; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(683,B,N)*/
N=pile[WZ2]; 
l2:if(x[jvj+3]!=incon) goto l3;
l16:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l3:if(x[jvj+2]!=incon) goto l4;
goto l16;
l4:if(N!=incon) goto l5;
goto l16;
l5:if(x[jvj+3]!=1252&&x[jvj+3]!=1251) goto l9;
pile[v[22]]=jvj+3; pile[WZ1]=BL; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(jvj+3,BL,jvj+5)*/
l6:if((x[jvj+5]<=0)) goto l9;
x[jvj+4]=s[x[jvj+5]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+5];
pile[v[22]]=683; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(683,jvj+4,V7)*/
V7=pile[WZ2]; 
if((V7!=N)) goto l7;
pile[v[22]]=860; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(860,jvj+4,jvj+6)*/
if((x[jvj+6]!=x[jvj+2])) goto l7;
pile[v[22]]=893; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(893,jvj+4,jvj+7)*/
if((x[jvj+7]!=x[RS])) goto l7;
pile[v[22]]=359; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(359,jvj+4,V5)*/
V5=pile[WZ2]; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(359,jvj+4,V10)*/
V10=pile[WZ2]; 
pile[WZ1]=B; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(359,B,V11)*/
V11=pile[WZ2]; 
if((V10==V11)) goto l8;
l7:x[jvj+5]=t[x[jvj+5]];
goto l6;
l8:x[jvj+8]=x[jvj+4] ;z[jvj+8]=z[jvj+4];
l13:if((x[jvj+3]==1252)) goto l14;
if((x[jvj+3]!=1251)) goto l16;
if((x[jvj+2]!=1102)) goto l15;
pile[v[22]]=1078; pile[WZ1]=B; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(1078,B,jvj+10)*/
pile[v[22]]=1102; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(1102,jvj+10,V15)*/
V15=pile[WZ2]; 
pile[v[22]]=V15; pile[WZ1]=195; pile[WZ2]=jvj+8; 
(*f[235])( );     /*PLUSC2(V15,195,jvj+8)*/
goto l16;
l9:x[jvj+12]=incon;
if((x[jvj+3]==944)) goto l10;
if((x[jvj+3]!=1250)) goto l17;
pile[v[22]]=860; pile[WZ1]=B; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(860,B,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=860; pile[WZ2]=jvj+12; 
(*f[54])( );     /*TRI1(jvj+13,860,jvj+12)*/
pile[v[22]]=1078; pile[WZ1]=B; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(1078,B,jvj+14)*/
pile[v[22]]=1022; pile[WZ1]=1250; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(1022,1250,jvj+15)*/
l18:if((x[jvj+15]<=0)) goto l20;
x[jvj+16]=s[x[jvj+15]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+15];
pile[v[22]]=jvj+16; pile[WZ1]=jvj+14; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(jvj+16,jvj+14,jvj+17)*/
if((x[jvj+17]==0)) goto l19;
pile[v[22]]=jvj+12; pile[WZ1]=jvj+16; 
(*f[34])( );     /*CHGC0(jvj+12,jvj+16,jvj+17)*/
l19:x[jvj+15]=t[x[jvj+15]];
goto l18;
l10:x[jvj+12]=x[B] ;z[jvj+12]=z[B];
l11:x[jvj+8]=x[jvj+12] ;z[jvj+8]=z[jvj+12];
pile[v[22]]=359; pile[WZ1]=B; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(359,B,V2)*/
V2=pile[WZ2]; 
if((V2==N)) goto l12;
pile[v[22]]=jvj+8; pile[WZ1]=359; pile[WZ2]=V2; 
(*f[43])( );     /*CHGC2(jvj+8,359,V2)*/
l12:pile[v[22]]=BL; pile[WZ1]=jvj+3; pile[WZ2]=jvj+8; 
(*f[36])( );     /*PLUSC0(BL,jvj+3,jvj+8)*/
goto l13;
l14:pile[v[22]]=jvj+8; pile[WZ1]=405; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+8,405,1)*/
goto l16;
l15:pile[v[22]]=1048; pile[WZ1]=B; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(1048,B,jvj+9)*/
pile[v[22]]=jvj+8; pile[WZ1]=1049; 
(*f[36])( );     /*PLUSC0(jvj+8,1049,jvj+9)*/
goto l16;
l17:pile[v[22]]=RS; pile[WZ1]=893; pile[WZ2]=jvj+11; 
(*f[54])( );     /*TRI1(RS,893,jvj+11)*/
pile[v[22]]=683; pile[WZ1]=N; pile[WZ2]=860; pile[WZ3]=jvj+2; pile[WZ4]=jvj+11; pile[WZ5]=jvj+12; 
(*f[725])( );     /*QUADRI14(683,N,860,jvj+2,jvj+11,jvj+12)*/
goto l11;
l20:pile[v[22]]=1016; pile[WZ1]=1250; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(1016,1250,jvj+18)*/
l21:if((x[jvj+18]>0)) goto l22;
goto l11;
l22:x[jvj+20]=s[x[jvj+18]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+18];
if(x[jvj+20]!=695&&x[jvj+20]!=1015) goto l23;
pile[v[22]]=860; pile[WZ1]=B; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(860,B,jvj+19)*/
if((x[jvj+19]!=954)) goto l24;
l23:pile[v[22]]=jvj+20; pile[WZ1]=B; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(jvj+20,B,V28)*/
V28=pile[WZ2]; 
pile[v[22]]=jvj+12; pile[WZ1]=jvj+20; pile[WZ2]=V28; 
(*f[43])( );     /*CHGC2(jvj+12,jvj+20,V28)*/
l24:x[jvj+18]=t[x[jvj+18]];
goto l21;
}
