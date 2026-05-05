struct D3DXCOLOR *__fastcall D3DXTex::CCodec::Convert(D3DXTex::CCodec *this, struct D3DXCOLOR *a2)
{
  unsigned int v4; // edx
  __int64 v5; // r10
  float *v6; // rcx
  float v7; // xmm2_4
  char *v8; // r9
  float v9; // xmm3_4
  float v10; // xmm2_4
  float v11; // xmm2_4
  unsigned int v12; // edx
  __int64 v13; // r10
  char *v14; // r9
  float v15; // xmm0_4
  unsigned int v16; // edx
  __int64 v17; // rcx
  float *v18; // r9
  float v19; // xmm0_4
  unsigned int v20; // edx
  float *v21; // rcx
  __int64 v22; // r10
  float v23; // xmm1_4
  char *v24; // r9
  float v25; // xmm2_4
  float v26; // xmm1_4
  float v27; // xmm1_4
  unsigned int v28; // edx
  __int64 v29; // r10
  char *v30; // r9
  float v31; // xmm0_4
  unsigned int v32; // edx
  __int64 v33; // r10
  float *v34; // r9
  float v35; // xmm0_4
  unsigned int v36; // edx
  __int64 v37; // r10
  float *v38; // rcx
  float v39; // xmm2_4
  char *v40; // r9
  float v41; // xmm3_4
  float v42; // xmm2_4
  float v43; // xmm2_4
  unsigned int v44; // edx
  __int64 v45; // rcx
  float *v46; // r9
  float v47; // xmm0_4
  unsigned int v48; // edx
  __int64 v49; // r10
  float *v50; // r9
  float v51; // xmm0_4

  switch ( *((_DWORD *)this + 3) )
  {
    case 1:
      switch ( *((_DWORD *)this + 26) )
      {
        case 2:
          v48 = 0;
          if ( *((_DWORD *)this + 34) )
          {
            v49 = 0;
            v50 = (float *)((char *)a2 + 8);
            do
            {
              ++v48;
              *(float *)(v49 + *((_QWORD *)this + 14)) = (float)(*(v50 - 2) * 0.5) + 0.5;
              v49 += 16;
              *(float *)(v49 + *((_QWORD *)this + 14) - 12) = (float)(*(v50 - 1) * 0.5) + 0.5;
              v51 = *v50;
              v50 += 4;
              *(float *)(v49 + *((_QWORD *)this + 14) - 8) = (float)(v51 * 0.5) + 0.5;
              *(float *)(v49 + *((_QWORD *)this + 14) - 4) = *(v50 - 3);
            }
            while ( v48 < *((_DWORD *)this + 34) );
          }
          break;
        case 3:
          v44 = 0;
          if ( *((_DWORD *)this + 34) )
          {
            v45 = 0;
            v46 = (float *)((char *)a2 + 8);
            do
            {
              ++v44;
              *(float *)(v45 + *((_QWORD *)this + 14)) = (float)(*(v46 - 2) * 0.5) + 0.5;
              v45 += 16;
              *(float *)(*((_QWORD *)this + 14) + v45 - 12) = (float)(*(v46 - 1) * 0.5) + 0.5;
              v47 = *v46;
              v46 += 4;
              *(float *)(*((_QWORD *)this + 14) + v45 - 8) = (float)(v47 * 0.5) + 0.5;
              *(float *)(*((_QWORD *)this + 14) + v45 - 4) = (float)(*(v46 - 3) * 0.5) + 0.5;
            }
            while ( v44 < *((_DWORD *)this + 34) );
          }
          break;
        case 4:
          v36 = 0;
          if ( *((_DWORD *)this + 34) )
          {
            v37 = -8LL - (_QWORD)a2;
            v38 = (float *)((char *)a2 + 8);
            do
            {
              v39 = *(v38 - 2);
              if ( v39 >= 0.0 )
              {
                if ( v39 >= 1.0 )
                  v39 = 1.0;
              }
              else
              {
                v39 = 0.0;
              }
              v40 = (char *)v38 + v37;
              *(float *)((char *)v38 + v37 + *((_QWORD *)this + 14)) = v39;
              v41 = *(v38 - 1);
              if ( v41 >= 0.0 )
              {
                if ( v41 >= 1.0 )
                  v41 = 1.0;
              }
              else
              {
                v41 = 0.0;
              }
              *(float *)&v40[*((_QWORD *)this + 14) + 4] = v41;
              v42 = *v38;
              if ( *v38 >= 0.0 )
              {
                if ( v42 >= 1.0 )
                  v42 = 1.0;
              }
              else
              {
                v42 = 0.0;
              }
              *(float *)&v40[*((_QWORD *)this + 14) + 8] = v42;
              v43 = v38[1];
              if ( v43 >= 0.0 )
              {
                if ( v43 >= 1.0 )
                  v43 = 1.0;
              }
              else
              {
                v43 = 0.0;
              }
              ++v36;
              v38 += 4;
              *(float *)&v40[*((_QWORD *)this + 14) + 12] = v43;
            }
            while ( v36 < *((_DWORD *)this + 34) );
          }
          break;
      }
      break;
    case 2:
      switch ( *((_DWORD *)this + 26) )
      {
        case 1:
          v32 = 0;
          if ( *((_DWORD *)this + 34) )
          {
            v33 = 0;
            v34 = (float *)((char *)a2 + 8);
            do
            {
              ++v32;
              *(float *)(v33 + *((_QWORD *)this + 14)) = (float)(*(v34 - 2) * 2.0) - 1.0;
              v33 += 16;
              *(float *)(v33 + *((_QWORD *)this + 14) - 12) = (float)(*(v34 - 1) * 2.0) - 1.0;
              v35 = *v34;
              v34 += 4;
              *(float *)(v33 + *((_QWORD *)this + 14) - 8) = (float)(v35 * 2.0) - 1.0;
              *(float *)(v33 + *((_QWORD *)this + 14) - 4) = *(v34 - 3);
            }
            while ( v32 < *((_DWORD *)this + 34) );
          }
          break;
        case 3:
          v28 = 0;
          if ( *((_DWORD *)this + 34) )
          {
            v29 = 0;
            v30 = (char *)a2 + 8;
            do
            {
              ++v28;
              *(_DWORD *)(v29 + *((_QWORD *)this + 14)) = *((_DWORD *)v30 - 2);
              *(_DWORD *)(v29 + *((_QWORD *)this + 14) + 4) = *((_DWORD *)v30 - 1);
              *(_DWORD *)(v29 + *((_QWORD *)this + 14) + 8) = *(_DWORD *)v30;
              v29 += 16;
              v31 = *((float *)v30 + 1);
              v30 += 16;
              *(float *)(v29 + *((_QWORD *)this + 14) - 4) = (float)(v31 * 0.5) + 0.5;
            }
            while ( v28 < *((_DWORD *)this + 34) );
          }
          break;
        case 4:
          v20 = 0;
          if ( *((_DWORD *)this + 34) )
          {
            v21 = (float *)((char *)a2 + 8);
            v22 = -8LL - (_QWORD)a2;
            do
            {
              v23 = *(v21 - 2);
              if ( v23 >= -1.0 )
              {
                if ( v23 >= 1.0 )
                  v23 = 1.0;
              }
              else
              {
                v23 = FLOAT_N1_0;
              }
              v24 = (char *)v21 + v22;
              *(float *)((char *)v21 + v22 + *((_QWORD *)this + 14)) = v23;
              v25 = *(v21 - 1);
              if ( v25 >= -1.0 )
              {
                if ( v25 >= 1.0 )
                  v25 = 1.0;
              }
              else
              {
                v25 = FLOAT_N1_0;
              }
              *(float *)&v24[*((_QWORD *)this + 14) + 4] = v25;
              v26 = *v21;
              if ( *v21 >= -1.0 )
              {
                if ( v26 >= 1.0 )
                  v26 = 1.0;
              }
              else
              {
                v26 = FLOAT_N1_0;
              }
              *(float *)&v24[*((_QWORD *)this + 14) + 8] = v26;
              v27 = v21[1];
              if ( v27 >= 0.0 )
              {
                if ( v27 >= 1.0 )
                  v27 = 1.0;
              }
              else
              {
                v27 = 0.0;
              }
              ++v20;
              v21 += 4;
              *(float *)&v24[*((_QWORD *)this + 14) + 12] = v27;
            }
            while ( v20 < *((_DWORD *)this + 34) );
          }
          break;
      }
      break;
    case 3:
      switch ( *((_DWORD *)this + 26) )
      {
        case 1:
          v16 = 0;
          if ( *((_DWORD *)this + 34) )
          {
            v17 = 0;
            v18 = (float *)((char *)a2 + 8);
            do
            {
              ++v16;
              *(float *)(v17 + *((_QWORD *)this + 14)) = (float)(*(v18 - 2) * 2.0) - 1.0;
              v17 += 16;
              *(float *)(v17 + *((_QWORD *)this + 14) - 12) = (float)(*(v18 - 1) * 2.0) - 1.0;
              v19 = *v18;
              v18 += 4;
              *(float *)(v17 + *((_QWORD *)this + 14) - 8) = (float)(v19 * 2.0) - 1.0;
              *(float *)(v17 + *((_QWORD *)this + 14) - 4) = (float)(*(v18 - 3) * 2.0) - 1.0;
            }
            while ( v16 < *((_DWORD *)this + 34) );
          }
          break;
        case 2:
          v12 = 0;
          if ( *((_DWORD *)this + 34) )
          {
            v13 = 0;
            v14 = (char *)a2 + 8;
            do
            {
              ++v12;
              *(_DWORD *)(v13 + *((_QWORD *)this + 14)) = *((_DWORD *)v14 - 2);
              *(_DWORD *)(v13 + *((_QWORD *)this + 14) + 4) = *((_DWORD *)v14 - 1);
              *(_DWORD *)(v13 + *((_QWORD *)this + 14) + 8) = *(_DWORD *)v14;
              v13 += 16;
              v15 = *((float *)v14 + 1);
              v14 += 16;
              *(float *)(v13 + *((_QWORD *)this + 14) - 4) = (float)(v15 * 2.0) - 1.0;
            }
            while ( v12 < *((_DWORD *)this + 34) );
          }
          break;
        case 4:
          v4 = 0;
          if ( *((_DWORD *)this + 34) )
          {
            v5 = -8LL - (_QWORD)a2;
            v6 = (float *)((char *)a2 + 8);
            do
            {
              v7 = *(v6 - 2);
              if ( v7 >= -1.0 )
              {
                if ( v7 >= 1.0 )
                  v7 = 1.0;
              }
              else
              {
                v7 = FLOAT_N1_0;
              }
              v8 = (char *)v6 + v5;
              *(float *)((char *)v6 + v5 + *((_QWORD *)this + 14)) = v7;
              v9 = *(v6 - 1);
              if ( v9 >= -1.0 )
              {
                if ( v9 >= 1.0 )
                  v9 = 1.0;
              }
              else
              {
                v9 = FLOAT_N1_0;
              }
              *(float *)&v8[*((_QWORD *)this + 14) + 4] = v9;
              v10 = *v6;
              if ( *v6 >= -1.0 )
              {
                if ( v10 >= 1.0 )
                  v10 = 1.0;
              }
              else
              {
                v10 = FLOAT_N1_0;
              }
              *(float *)&v8[*((_QWORD *)this + 14) + 8] = v10;
              v11 = v6[1];
              if ( v11 >= -1.0 )
              {
                if ( v11 >= 1.0 )
                  v11 = 1.0;
              }
              else
              {
                v11 = FLOAT_N1_0;
              }
              ++v4;
              v6 += 4;
              *(float *)&v8[*((_QWORD *)this + 14) + 12] = v11;
            }
            while ( v4 < *((_DWORD *)this + 34) );
          }
          break;
      }
      break;
  }
  return (struct D3DXCOLOR *)*((_QWORD *)this + 14);
}
