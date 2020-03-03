#include "dx.h"
void CALRES0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int B;
int RS;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=21;
if(v[0]>99700) (*f[6])( );

B=pile[v[22]]; RS=pile[v[22]+1]; v[22]+=2; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+3]=vo[12];z[jvj+3]=vz[12];
pile[v[22]]=860; pile[WZ1]=jvj+3; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(860,jvj+3,jvj+12)*/
if((x[jvj+12]==301)) goto l2;
if((x[jvj+12]==954)) goto l7;
if(x[jvj+12]==530||x[jvj+12]==104||x[jvj+12]==368) goto l5;
if(x[jvj+12]==1085||x[jvj+12]==1102) goto l9;
if(x[jvj+12]!=901&&x[jvj+12]!=84) goto l19;
pile[v[22]]=735; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(735,jvj+3,jvj+13)*/
pile[WZ1]=jvj+13; pile[WZ2]=B; pile[WZ3]=67; pile[WZ4]=jvj+14; 
(*f[1282])( );     /*ANAPRED1(735,jvj+13,B,67,jvj+14)*/
x[jvj+20]=incon;
if((x[jvj+14]!=135)) goto l13;
pile[v[22]]=935; pile[WZ1]=B; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(935,B,jvj+11)*/
if((x[jvj+11]==547)) goto l12;
x[jvj+20]=1124 ;z[jvj+20]=1124;
l18:x[RS]=x[jvj+20] ;z[RS]=z[jvj+20];
l21:pile[v[22]]=B; pile[WZ1]=893; pile[WZ2]=RS; 
(*f[35])( );     /*CHGC1(B,893,RS)*/
v[0]=jvj; v[22]-=2; v[102]=0;return;
l1:x[jvj+21]=1041 ;z[jvj+21]=1041;
l20:x[RS]=x[jvj+21] ;z[RS]=z[jvj+21];
goto l21;
l2:x[jvj+16]=incon;
pile[v[22]]=935; pile[WZ1]=B; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(935,B,jvj+2)*/
if((x[jvj+2]!=547)) goto l4;
pile[v[22]]=735; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(735,jvj+3,jvj+4)*/
pile[WZ1]=jvj+4; pile[WZ2]=B; pile[WZ3]=67; pile[WZ4]=jvj+5; 
(*f[1282])( );     /*ANAPRED1(735,jvj+4,B,67,jvj+5)*/
if((x[jvj+5]==135)) goto l3;
l4:x[jvj+16]=1041 ;z[jvj+16]=1041;
l14:x[RS]=x[jvj+16] ;z[RS]=z[jvj+16];
goto l21;
l3:x[jvj+16]=1000 ;z[jvj+16]=1000;
goto l14;
l5:x[jvj+18]=incon;
pile[v[22]]=935; pile[WZ1]=B; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(935,B,jvj+6)*/
if((x[jvj+6]!=547)) goto l6;
x[jvj+18]=1000 ;z[jvj+18]=1000;
l16:x[RS]=x[jvj+18] ;z[RS]=z[jvj+18];
goto l21;
l6:x[jvj+18]=1041 ;z[jvj+18]=1041;
goto l16;
l7:x[jvj+17]=incon;
pile[v[22]]=935; pile[WZ1]=B; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(935,B,jvj+7)*/
if(x[jvj+7]!=325&&x[jvj+7]!=493) goto l8;
x[jvj+17]=1000 ;z[jvj+17]=1000;
l15:x[RS]=x[jvj+17] ;z[RS]=z[jvj+17];
goto l21;
l8:x[jvj+17]=1041 ;z[jvj+17]=1041;
goto l15;
l9:x[jvj+19]=incon;
pile[v[22]]=935; pile[WZ1]=B; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(935,B,jvj+8)*/
if((x[jvj+8]!=547)) goto l11;
pile[v[22]]=735; pile[WZ1]=jvj+3; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(735,jvj+3,jvj+9)*/
pile[WZ1]=jvj+9; pile[WZ2]=B; pile[WZ3]=67; pile[WZ4]=jvj+10; 
(*f[1282])( );     /*ANAPRED1(735,jvj+9,B,67,jvj+10)*/
if((x[jvj+10]==135)) goto l10;
l11:x[jvj+19]=1041 ;z[jvj+19]=1041;
l17:x[RS]=x[jvj+19] ;z[RS]=z[jvj+19];
goto l21;
l10:x[jvj+19]=1000 ;z[jvj+19]=1000;
goto l17;
l12:x[jvj+20]=1000 ;z[jvj+20]=1000;
goto l18;
l13:x[jvj+20]=1041 ;z[jvj+20]=1041;
goto l18;
l19:pile[v[22]]=860; pile[WZ1]=B; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(860,B,jvj+15)*/
if(x[jvj+15]!=1082&&x[jvj+15]!=336) goto l22;
x[jvj+21]=incon;
pile[v[22]]=935; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(935,B,jvj+1)*/
if(x[jvj+1]!=547&&x[jvj+1]!=1000) goto l1;
x[jvj+21]=1000 ;z[jvj+21]=1000;
goto l20;
l22:v[0]=jvj; v[22]-=2; v[102]=1;return;
}
