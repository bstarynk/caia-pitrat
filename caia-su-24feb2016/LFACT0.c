#include "dx.h"
void LFACT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int DZ=0,DM=0,DN=0;
int DR;
int EX,DY;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=11;
x[jvj+1]=11750;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1058&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
DR=pile[v[22]]; EX=pile[v[22]+1]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=DR; pile[WZ1]=jvj+2; 
(*f[1372])( );if(v[102]) goto l11;     /*LFACTA0(DR,jvj+2,DZ)*/
DZ=pile[WZ2]; 
pile[v[22]]=DZ; pile[WZ1]=64; pile[WZ2]=66; pile[WZ3]=jvj+3; 
(*f[666])( );if(v[102]) goto l1;     /*SMA3(DZ,64,66,jvj+3)*/
if((x[jvj+3]==339)) goto l2;
if((x[jvj+3]!=1419)) goto l6;
pile[v[22]]=1671; pile[WZ1]=jvj+3; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(1671,jvj+3,jvj+5)*/
for(a=x[jvj+5];a>0;a=t[a]) if(s[a]==1709) goto l4;
l6:pile[v[22]]=1671; pile[WZ1]=jvj+3; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(1671,jvj+3,jvj+9)*/
for(a=x[jvj+9];a>0;a=t[a]) if(s[a]==1709) goto l11;
DN=DZ;
x[jvj+8]=x[jvj+2] ;z[jvj+8]=z[jvj+2];
l7:pile[v[22]]=DN; pile[WZ1]=64; pile[WZ2]=66; pile[WZ3]=jvj+10; 
(*f[666])( );if(v[102]) goto l9;     /*SMA3(DN,64,66,jvj+10)*/
if((x[jvj+10]==145)) goto l8;
pile[v[22]]=1671; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(1671,jvj+10,jvj+11)*/
for(a=x[jvj+11];a>0;a=t[a]) if(s[a]==145) goto l8;
l9:DY=DN;
x[EX]=x[jvj+8] ;z[EX]=z[jvj+8];
l12:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; pile[v[22]+2]=DY; v[102]=0;return;
l1:x[EX]=x[jvj+2] ;z[EX]=z[jvj+2];
DY=DZ;
goto l12;
l2:pile[v[22]]=1671; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1671,jvj+3,jvj+4)*/
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==1709) goto l3;
goto l6;
l3:x[jvj+7]=339 ;z[jvj+7]=339;
l5:if(x[jvj+7]==250||x[jvj+7]==125) goto l6;
pile[v[22]]=DR; pile[WZ1]=jvj+7; pile[WZ3]=jvj+8; 
(*f[1374])( );if(v[102]) goto l6;     /*LOR0(DR,jvj+7,DN,jvj+8)*/
DN=pile[WZ2]; 
goto l7;
l4:pile[v[22]]=DR; pile[WZ1]=jvj+3; pile[WZ2]=68; pile[WZ4]=jvj+6; pile[WZ5]=jvj+7; 
(*f[1375])( );if(v[102]) goto l6;     /*LAND0(DR,jvj+3,68,DM,jvj+6,jvj+7)*/
DM=pile[WZ3]; 
if((x[jvj+7]!=250)) goto l5;
DN=DM;
x[jvj+8]=x[jvj+6] ;z[jvj+8]=z[jvj+6];
goto l7;
l8:pile[v[22]]=DN; pile[WZ1]=jvj+8; pile[WZ2]=EX; 
(*f[1373])( );if(v[102]) goto l9;     /*LFACTA1(DN,jvj+8,EX,DY)*/
DY=pile[WZ3]; 
goto l12;
l11:x[EX]=DY=incon;
l10:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
}
