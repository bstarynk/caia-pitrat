#include "dx.h"
void COMB3(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int C;
int jvj;
jvj=v[0];
v[0]+=2;
x[jvj+1]=10290;z[jvj+1]=(-100);
x[jvj+2]=3;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==580&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
C=pile[v[22]]; v[22]+=1; 
pile[v[22]]=0; 
(*f[578])( );     /*COMB1(0)*/
pile[v[22]]=0; 
(*f[579])( );     /*COMB2(0)*/
pile[v[22]]=0; 
(*f[580])( );     /*COMB3(0)*/
pile[v[22]]=0; 
(*f[581])( );     /*COMB4(0)*/
pile[v[22]]=0; 
(*f[582])( );     /*COMB5(0)*/
pile[v[22]]=0; 
(*f[583])( );     /*COMB6(0)*/
pile[v[22]]=0; 
(*f[584])( );     /*COMB7(0)*/
pile[v[22]]=0; 
(*f[585])( );     /*COMB8(0)*/
pile[v[22]]=0; 
(*f[586])( );     /*COMB9(0)*/
pile[v[22]]=0; 
(*f[587])( );     /*COMB10(0)*/
pile[v[22]]=0; 
(*f[588])( );     /*COMB11(0)*/
pile[v[22]]=0; 
(*f[589])( );     /*COMB12(0)*/
pile[v[22]]=0; 
(*f[590])( );     /*COMB13(0)*/
pile[v[22]]=0; 
(*f[591])( );     /*COMB14(0)*/
pile[v[22]]=0; 
(*f[592])( );     /*COMB15(0)*/
pile[v[22]]=0; 
(*f[593])( );     /*COMB16(0)*/
l1:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
}
