#include "dx.h"
void FINDEX0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int WW=0,V7=0,V10=0,V11=0;
int X,KR,UR,ND;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=13;
x[jvj+1]=10321;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==311&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
X=pile[v[22]]; KR=pile[v[22]+1]; UR=pile[v[22]+2]; ND=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=x[X] ;z[jvj+2]=z[X];
l10:x[jvj+4]=WW=incon;
pile[v[22]]=102; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(102,jvj+2,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(101,jvj+3,jvj+4)*/
l1:pile[v[22]]=103; pile[WZ1]=jvj+2; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(103,jvj+2,jvj+5)*/
pile[v[22]]=140; pile[WZ1]=jvj+5; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(140,jvj+5,WW)*/
WW=pile[WZ2]; 
l2:if(x[jvj+4]!=incon) goto l3;
l8:pile[v[22]]=120; pile[WZ1]=jvj+2; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(120,jvj+2,jvj+13)*/
x[jvj+2]=x[jvj+13] ;z[jvj+2]=z[jvj+13];
goto l10;
l3:if(WW!=incon) goto l4;
l7:if(x[jvj+4]!=433&&x[jvj+4]!=918) goto l8;
pile[v[22]]=366; pile[WZ1]=jvj+2; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(366,jvj+2,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=KR; pile[WZ2]=UR; pile[WZ3]=ND; 
(*f[311])( );     /*FINDEX0(jvj+12,KR,UR,ND)*/
goto l8;
l4:if((x[jvj+4]==44)) goto l5;
if((x[jvj+4]==187)) goto l6;
if((x[jvj+4]!=714)) goto l7;
pile[v[22]]=jvj+2; pile[WZ1]=KR; pile[WZ2]=UR; pile[WZ3]=289; pile[WZ4]=WW; pile[WZ5]=0; pile[v[22]+6]=ND; pile[v[22]+7]=jvj+9; 
(*f[696])( );if(v[102]) goto l7;     /*COMPL0(jvj+2,KR,UR,289,WW,0,ND,jvj+9)*/
pile[v[22]]=246; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(246,jvj+9,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=jvj+2; pile[WZ1]=KR; pile[WZ2]=UR; pile[WZ3]=187; pile[WZ4]=WW; pile[WZ5]=V10; pile[v[22]+6]=ND; pile[v[22]+7]=jvj+10; 
(*f[696])( );if(v[102]) goto l7;     /*COMPL0(jvj+2,KR,UR,187,WW,V10,ND,jvj+10)*/
pile[v[22]]=246; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(246,jvj+10,V11)*/
V11=pile[WZ2]; 
pile[v[22]]=jvj+2; pile[WZ1]=KR; pile[WZ2]=UR; pile[WZ3]=714; pile[WZ4]=WW; pile[WZ5]=V11; pile[v[22]+6]=ND; pile[v[22]+7]=jvj+11; 
(*f[696])( );if(v[102]) goto l7;     /*COMPL0(jvj+2,KR,UR,714,WW,V11,ND,jvj+11)*/
goto l7;
l5:pile[v[22]]=jvj+2; pile[WZ1]=KR; pile[WZ2]=UR; pile[WZ3]=44; pile[WZ4]=WW; pile[WZ5]=0; pile[v[22]+6]=ND; pile[v[22]+7]=jvj+6; 
(*f[696])( );if(v[102]) goto l7;     /*COMPL0(jvj+2,KR,UR,44,WW,0,ND,jvj+6)*/
goto l7;
l6:pile[v[22]]=jvj+2; pile[WZ1]=KR; pile[WZ2]=UR; pile[WZ3]=289; pile[WZ4]=WW; pile[WZ5]=0; pile[v[22]+6]=ND; pile[v[22]+7]=jvj+7; 
(*f[696])( );if(v[102]) goto l7;     /*COMPL0(jvj+2,KR,UR,289,WW,0,ND,jvj+7)*/
pile[v[22]]=246; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(246,jvj+7,V7)*/
V7=pile[WZ2]; 
pile[v[22]]=jvj+2; pile[WZ1]=KR; pile[WZ2]=UR; pile[WZ3]=187; pile[WZ4]=WW; pile[WZ5]=V7; pile[v[22]+6]=ND; pile[v[22]+7]=jvj+8; 
(*f[696])( );if(v[102]) goto l7;     /*COMPL0(jvj+2,KR,UR,187,WW,V7,ND,jvj+8)*/
goto l7;
l9:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; return;
}
