struct D3DXTex::CCodec *__fastcall D3DXTex::CCodec::Create(struct D3DX_BLT *a1)
{
  int v1; // edx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  D3DXTex::CCodec *v11; // rax
  D3DXTex::CCodec *v12; // rbx
  void **v13; // r11
  D3DXTex::CCodec *v14; // rax
  D3DXTex::CCodec *v15; // rax
  D3DXTex::CCodec *v16; // rax
  D3DXTex::CCodec *v17; // rax
  D3DXTex::CCodec *v18; // rax
  D3DXTex::CCodec *v19; // rax
  D3DXTex::CCodec *v20; // rax
  D3DXTex::CCodec *v21; // rax
  D3DXTex::CCodec *v22; // rax
  int v23; // edx
  int v24; // edx
  int v25; // edx
  int v26; // edx
  int v27; // edx
  int v28; // edx
  int v29; // edx
  int v30; // edx
  D3DXTex::CCodec *v31; // rax
  D3DXTex::CCodec *v32; // rax
  D3DXTex::CCodec *v33; // rax
  D3DXTex::CCodec *v34; // rax
  D3DXTex::CCodec *v35; // rax
  D3DXTex::CCodec *v36; // rax
  D3DXTex::CCodec *v37; // rax
  D3DXTex::CCodec *v38; // rax
  D3DXTex::CCodec *v39; // rax
  D3DXTex::CCodec *v40; // rax
  int v41; // edx
  int v42; // edx
  int v43; // edx
  int v44; // edx
  int v45; // edx
  int v46; // edx
  int v47; // edx
  int v48; // edx
  D3DXTex::CCodec *v49; // rax
  D3DXTex::CCodec *v50; // rax
  D3DXTex::CCodec *v51; // rax
  D3DXTex::CCodec *v52; // rax
  D3DXTex::CCodec *v53; // rax
  D3DXTex::CCodec *v54; // rax
  D3DXTex::CCodec *v55; // rax
  D3DXTex::CCodec *v56; // rax
  D3DXTex::CCodec *v57; // rax
  int v58; // edx
  int v59; // edx
  int v60; // edx
  int v61; // edx
  int v62; // edx
  int v63; // edx
  int v64; // edx
  int v65; // edx
  D3DXTex::CCodec *v66; // rax
  D3DXTex::CCodec *v67; // rax
  D3DXTex::CCodec *v68; // rax
  D3DXTex::CCodec *v69; // rax
  D3DXTex::CCodec *v70; // rax
  D3DXTex::CCodec *v71; // rax
  D3DXTex::CCodec *v72; // rax
  D3DXTex::CCodec *v73; // rax
  D3DXTex::CCodecDXT *v74; // rax
  D3DXTex::CCodecYUV *v75; // rax
  D3DXTex::CCodec *v76; // rax
  D3DXTex::CCodec *v77; // rax

  v1 = *((_DWORD *)a1 + 2);
  if ( v1 > 827611204 )
  {
    if ( v1 > 909200449 )
    {
      switch ( v1 )
      {
        case 909201952:
          v77 = (D3DXTex::CCodec *)operator new(0xA0u, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
          v12 = v77;
          if ( v77 )
          {
            D3DXTex::CCodec::CCodec(v77, a1, 0x30u, 1u);
            v13 = &D3DXTex::CCodec_D3DX_R16G16B16::`vftable';
            goto LABEL_156;
          }
          goto LABEL_157;
        case 1111970375:
          v75 = (D3DXTex::CCodecYUV *)operator new(0xD8u, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
          v12 = v75;
          if ( !v75 )
            goto LABEL_157;
          break;
        case 1195525970:
          v75 = (D3DXTex::CCodecYUV *)operator new(0xD8u, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
          v12 = v75;
          if ( !v75 )
            goto LABEL_157;
          break;
        case 1498831189:
          v75 = (D3DXTex::CCodecYUV *)operator new(0xD8u, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
          v12 = v75;
          if ( !v75 )
            goto LABEL_157;
          break;
        default:
          return 0;
      }
    }
    else
    {
      if ( v1 == 909200449 )
      {
        v76 = (D3DXTex::CCodec *)operator new(0xA0u, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
        v12 = v76;
        if ( v76 )
        {
          D3DXTex::CCodec::CCodec(v76, a1, 0x20u, 1u);
          v13 = &D3DXTex::CCodec_D3DX_A16L16::`vftable';
          goto LABEL_156;
        }
        goto LABEL_157;
      }
      if ( v1 == 844388420 )
      {
        v74 = (D3DXTex::CCodecDXT *)operator new(0x140u, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
        v12 = v74;
        if ( !v74 )
          goto LABEL_157;
        goto LABEL_141;
      }
      if ( v1 != 844715353 )
      {
        switch ( v1 )
        {
          case 861165636:
            v74 = (D3DXTex::CCodecDXT *)operator new(
                                          0x140u,
                                          (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
            v12 = v74;
            if ( !v74 )
              goto LABEL_157;
            break;
          case 877942852:
            v74 = (D3DXTex::CCodecDXT *)operator new(
                                          0x140u,
                                          (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
            v12 = v74;
            if ( !v74 )
              goto LABEL_157;
            break;
          case 894720068:
            v74 = (D3DXTex::CCodecDXT *)operator new(
                                          0x140u,
                                          (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
            v12 = v74;
            if ( !v74 )
              goto LABEL_157;
            break;
          default:
            return 0;
        }
LABEL_141:
        D3DXTex::CCodecDXT::CCodecDXT(v74, a1);
        v13 = &D3DXTex::CCodecDXT::`vftable';
        goto LABEL_156;
      }
      v75 = (D3DXTex::CCodecYUV *)operator new(0xD8u, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
      v12 = v75;
      if ( !v75 )
        goto LABEL_157;
    }
    D3DXTex::CCodecYUV::CCodecYUV(v75, a1);
    v13 = &D3DXTex::CCodec_UYVY::`vftable';
    goto LABEL_156;
  }
  if ( v1 == 827611204 )
  {
    v74 = (D3DXTex::CCodecDXT *)operator new(0x140u, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
    v12 = v74;
    if ( !v74 )
      goto LABEL_157;
    goto LABEL_141;
  }
  if ( v1 > 50 )
  {
    if ( v1 > 81 )
    {
      v58 = v1 - 82;
      if ( v58 )
      {
        v59 = v58 - 28;
        if ( !v59 )
        {
          v73 = (D3DXTex::CCodec *)operator new(0xA0u, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
          v12 = v73;
          if ( v73 )
          {
            D3DXTex::CCodec::CCodec(v73, a1, 0x40u, 3u);
            v13 = &D3DXTex::CCodec_Q16W16V16U16::`vftable';
            goto LABEL_156;
          }
          goto LABEL_157;
        }
        v60 = v59 - 1;
        if ( !v60 )
        {
          v72 = (D3DXTex::CCodec *)operator new(0xA0u, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
          v12 = v72;
          if ( v72 )
          {
            D3DXTex::CCodec::CCodec(v72, a1, 0x10u, 4u);
            v13 = &D3DXTex::CCodec_R16F::`vftable';
            goto LABEL_156;
          }
          goto LABEL_157;
        }
        v61 = v60 - 1;
        if ( !v61 )
        {
          v71 = (D3DXTex::CCodec *)operator new(0xA0u, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
          v12 = v71;
          if ( v71 )
          {
            D3DXTex::CCodec::CCodec(v71, a1, 0x20u, 4u);
            v13 = &D3DXTex::CCodec_G16R16F::`vftable';
            goto LABEL_156;
          }
          goto LABEL_157;
        }
        v62 = v61 - 1;
        if ( !v62 )
        {
          v70 = (D3DXTex::CCodec *)operator new(0xA0u, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
          v12 = v70;
          if ( v70 )
          {
            D3DXTex::CCodec::CCodec(v70, a1, 0x40u, 4u);
            v13 = &D3DXTex::CCodec_A16B16G16R16F::`vftable';
            goto LABEL_156;
          }
          goto LABEL_157;
        }
        v63 = v62 - 1;
        if ( v63 )
        {
          v64 = v63 - 1;
          if ( !v64 )
          {
            v68 = (D3DXTex::CCodec *)operator new(0xA0u, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
            v12 = v68;
            if ( v68 )
            {
              D3DXTex::CCodec::CCodec(v68, a1, 0x40u, 4u);
              v13 = &D3DXTex::CCodec_G32R32F::`vftable';
              goto LABEL_156;
            }
            goto LABEL_157;
          }
          v65 = v64 - 1;
          if ( !v65 )
          {
            v67 = (D3DXTex::CCodec *)operator new(0xA0u, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
            v12 = v67;
            if ( v67 )
            {
              D3DXTex::CCodec::CCodec(v67, a1, 0x80u, 4u);
              v13 = &D3DXTex::CCodec_A32B32G32R32F::`vftable';
              goto LABEL_156;
            }
            goto LABEL_157;
          }
          if ( v65 == 1 )
          {
            v66 = (D3DXTex::CCodec *)operator new(0xA0u, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
            v12 = v66;
            if ( v66 )
            {
              D3DXTex::CCodec::CCodec(v66, a1, 0x10u, 2u);
              v13 = &D3DXTex::CCodec_CxV8U8::`vftable';
              goto LABEL_156;
            }
            goto LABEL_157;
          }
          return 0;
        }
        v69 = (D3DXTex::CCodec *)operator new(0xA0u, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
        v12 = v69;
        if ( !v69 )
          goto LABEL_157;
      }
      else
      {
        v69 = (D3DXTex::CCodec *)operator new(0xA0u, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
        v12 = v69;
        if ( !v69 )
          goto LABEL_157;
      }
      D3DXTex::CCodec::CCodec(v69, a1, 0x20u, 4u);
      v13 = &D3DXTex::CCodec_R32F::`vftable';
      goto LABEL_156;
    }
    if ( v1 == 81 )
    {
      v49 = (D3DXTex::CCodec *)operator new(0xA0u, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
      v12 = v49;
      if ( !v49 )
        goto LABEL_157;
    }
    else
    {
      v41 = v1 - 51;
      if ( !v41 )
      {
        v57 = (D3DXTex::CCodec *)operator new(0xA0u, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
        v12 = v57;
        if ( v57 )
        {
          D3DXTex::CCodec::CCodec(v57, a1, 0x10u, 1u);
          v13 = &D3DXTex::CCodec_A8L8::`vftable';
          goto LABEL_156;
        }
        goto LABEL_157;
      }
      v42 = v41 - 1;
      if ( !v42 )
      {
        v56 = (D3DXTex::CCodec *)operator new(0xA0u, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
        v12 = v56;
        if ( v56 )
        {
          D3DXTex::CCodec::CCodec(v56, a1, 8u, 1u);
          v13 = &D3DXTex::CCodec_A4L4::`vftable';
          goto LABEL_156;
        }
        goto LABEL_157;
      }
      v43 = v42 - 8;
      if ( !v43 )
      {
        v55 = (D3DXTex::CCodec *)operator new(0xA0u, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
        v12 = v55;
        if ( v55 )
        {
          D3DXTex::CCodec::CCodec(v55, a1, 0x10u, 2u);
          v13 = &D3DXTex::CCodec_V8U8::`vftable';
          goto LABEL_156;
        }
        goto LABEL_157;
      }
      v44 = v43 - 1;
      if ( !v44 )
      {
        v54 = (D3DXTex::CCodec *)operator new(0xA0u, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
        v12 = v54;
        if ( v54 )
        {
          D3DXTex::CCodec::CCodec(v54, a1, 0x10u, 2u);
          v13 = &D3DXTex::CCodec_L6V5U5::`vftable';
          goto LABEL_156;
        }
        goto LABEL_157;
      }
      v45 = v44 - 1;
      if ( !v45 )
      {
        v53 = (D3DXTex::CCodec *)operator new(0xA0u, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
        v12 = v53;
        if ( v53 )
        {
          D3DXTex::CCodec::CCodec(v53, a1, 0x20u, 2u);
          v13 = &D3DXTex::CCodec_X8L8V8U8::`vftable';
          goto LABEL_156;
        }
        goto LABEL_157;
      }
      v46 = v45 - 1;
      if ( !v46 )
      {
        v52 = (D3DXTex::CCodec *)operator new(0xA0u, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
        v12 = v52;
        if ( v52 )
        {
          D3DXTex::CCodec::CCodec(v52, a1, 0x20u, 3u);
          v13 = &D3DXTex::CCodec_Q8W8V8U8::`vftable';
          goto LABEL_156;
        }
        goto LABEL_157;
      }
      v47 = v46 - 1;
      if ( !v47 )
      {
        v51 = (D3DXTex::CCodec *)operator new(0xA0u, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
        v12 = v51;
        if ( v51 )
        {
          D3DXTex::CCodec::CCodec(v51, a1, 0x20u, 2u);
          v13 = &D3DXTex::CCodec_V16U16::`vftable';
          goto LABEL_156;
        }
        goto LABEL_157;
      }
      v48 = v47 - 3;
      if ( !v48 )
      {
        v50 = (D3DXTex::CCodec *)operator new(0xA0u, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
        v12 = v50;
        if ( v50 )
        {
          D3DXTex::CCodec::CCodec(v50, a1, 0x20u, 2u);
          v13 = &D3DXTex::CCodec_A2W10V10U10::`vftable';
          goto LABEL_156;
        }
        goto LABEL_157;
      }
      if ( v48 != 3 )
        return 0;
      v49 = (D3DXTex::CCodec *)operator new(0xA0u, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
      v12 = v49;
      if ( !v49 )
        goto LABEL_157;
    }
    D3DXTex::CCodec::CCodec(v49, a1, 0x10u, 1u);
    v13 = &D3DXTex::CCodec_L16::`vftable';
    goto LABEL_156;
  }
  if ( v1 == 50 )
  {
    v40 = (D3DXTex::CCodec *)operator new(0xA0u, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
    v12 = v40;
    if ( v40 )
    {
      D3DXTex::CCodec::CCodec(v40, a1, 8u, 1u);
      v13 = &D3DXTex::CCodec_L8::`vftable';
      goto LABEL_156;
    }
    goto LABEL_157;
  }
  if ( v1 > 29 )
  {
    v23 = v1 - 30;
    if ( !v23 )
    {
      v39 = (D3DXTex::CCodec *)operator new(0xA0u, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
      v12 = v39;
      if ( v39 )
      {
        D3DXTex::CCodec::CCodec(v39, a1, 0x10u, 1u);
        v13 = &D3DXTex::CCodec_X4R4G4B4::`vftable';
        goto LABEL_156;
      }
      goto LABEL_157;
    }
    v24 = v23 - 1;
    if ( !v24 )
    {
      v38 = (D3DXTex::CCodec *)operator new(0xA0u, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
      v12 = v38;
      if ( v38 )
      {
        D3DXTex::CCodec::CCodec(v38, a1, 0x20u, 1u);
        v13 = &D3DXTex::CCodec_A2B10G10R10::`vftable';
        goto LABEL_156;
      }
      goto LABEL_157;
    }
    v25 = v24 - 1;
    if ( !v25 )
    {
      v37 = (D3DXTex::CCodec *)operator new(0xA0u, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
      v12 = v37;
      if ( v37 )
      {
        D3DXTex::CCodec::CCodec(v37, a1, 0x20u, 1u);
        v13 = &D3DXTex::CCodec_A8B8G8R8::`vftable';
        goto LABEL_156;
      }
      goto LABEL_157;
    }
    v26 = v25 - 1;
    if ( !v26 )
    {
      v36 = (D3DXTex::CCodec *)operator new(0xA0u, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
      v12 = v36;
      if ( v36 )
      {
        D3DXTex::CCodec::CCodec(v36, a1, 0x20u, 1u);
        v13 = &D3DXTex::CCodec_X8B8G8R8::`vftable';
        goto LABEL_156;
      }
      goto LABEL_157;
    }
    v27 = v26 - 1;
    if ( !v27 )
    {
      v35 = (D3DXTex::CCodec *)operator new(0xA0u, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
      v12 = v35;
      if ( v35 )
      {
        D3DXTex::CCodec::CCodec(v35, a1, 0x20u, 1u);
        v13 = &D3DXTex::CCodec_G16R16::`vftable';
        goto LABEL_156;
      }
      goto LABEL_157;
    }
    v28 = v27 - 1;
    if ( !v28 )
    {
      v34 = (D3DXTex::CCodec *)operator new(0xA0u, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
      v12 = v34;
      if ( v34 )
      {
        D3DXTex::CCodec::CCodec(v34, a1, 0x20u, 1u);
        v13 = &D3DXTex::CCodec_A2R10G10B10::`vftable';
        goto LABEL_156;
      }
      goto LABEL_157;
    }
    v29 = v28 - 1;
    if ( !v29 )
    {
      v33 = (D3DXTex::CCodec *)operator new(0xA0u, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
      v12 = v33;
      if ( v33 )
      {
        D3DXTex::CCodec::CCodec(v33, a1, 0x40u, 1u);
        v13 = &D3DXTex::CCodec_A16B16G16R16::`vftable';
        goto LABEL_156;
      }
      goto LABEL_157;
    }
    v30 = v29 - 4;
    if ( !v30 )
    {
      v32 = (D3DXTex::CCodec *)operator new(0xA0u, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
      v12 = v32;
      if ( v32 )
      {
        D3DXTex::CCodec::CCodec(v32, a1, 0x10u, 1u);
        v13 = &D3DXTex::CCodec_A8P8::`vftable';
        goto LABEL_156;
      }
      goto LABEL_157;
    }
    if ( v30 == 1 )
    {
      v31 = (D3DXTex::CCodec *)operator new(0xA0u, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
      v12 = v31;
      if ( v31 )
      {
        D3DXTex::CCodec::CCodec(v31, a1, 8u, 1u);
        v13 = &D3DXTex::CCodec_P8::`vftable';
        goto LABEL_156;
      }
      goto LABEL_157;
    }
    return 0;
  }
  if ( v1 == 29 )
  {
    v22 = (D3DXTex::CCodec *)operator new(0xA0u, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
    v12 = v22;
    if ( v22 )
    {
      D3DXTex::CCodec::CCodec(v22, a1, 0x10u, 1u);
      v13 = &D3DXTex::CCodec_A8R3G3B2::`vftable';
      goto LABEL_156;
    }
    goto LABEL_157;
  }
  v3 = v1 - 20;
  if ( !v3 )
  {
    v21 = (D3DXTex::CCodec *)operator new(0xA0u, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
    v12 = v21;
    if ( v21 )
    {
      D3DXTex::CCodec::CCodec(v21, a1, 0x18u, 1u);
      v13 = &D3DXTex::CCodec_R8G8B8::`vftable';
      goto LABEL_156;
    }
    goto LABEL_157;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    v20 = (D3DXTex::CCodec *)operator new(0xA0u, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
    v12 = v20;
    if ( v20 )
    {
      D3DXTex::CCodec::CCodec(v20, a1, 0x20u, 1u);
      v13 = &D3DXTex::CCodec_A8R8G8B8::`vftable';
      goto LABEL_156;
    }
    goto LABEL_157;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v19 = (D3DXTex::CCodec *)operator new(0xA0u, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
    v12 = v19;
    if ( v19 )
    {
      D3DXTex::CCodec::CCodec(v19, a1, 0x20u, 1u);
      v13 = &D3DXTex::CCodec_X8R8G8B8::`vftable';
      goto LABEL_156;
    }
    goto LABEL_157;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v18 = (D3DXTex::CCodec *)operator new(0xA0u, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
    v12 = v18;
    if ( v18 )
    {
      D3DXTex::CCodec::CCodec(v18, a1, 0x10u, 1u);
      v13 = &D3DXTex::CCodec_R5G6B5::`vftable';
      goto LABEL_156;
    }
    goto LABEL_157;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v17 = (D3DXTex::CCodec *)operator new(0xA0u, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
    v12 = v17;
    if ( v17 )
    {
      D3DXTex::CCodec::CCodec(v17, a1, 0x10u, 1u);
      v13 = &D3DXTex::CCodec_X1R5G5B5::`vftable';
      goto LABEL_156;
    }
    goto LABEL_157;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v16 = (D3DXTex::CCodec *)operator new(0xA0u, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
    v12 = v16;
    if ( v16 )
    {
      D3DXTex::CCodec::CCodec(v16, a1, 0x10u, 1u);
      v13 = &D3DXTex::CCodec_A1R5G5B5::`vftable';
      goto LABEL_156;
    }
    goto LABEL_157;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    v15 = (D3DXTex::CCodec *)operator new(0xA0u, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
    v12 = v15;
    if ( v15 )
    {
      D3DXTex::CCodec::CCodec(v15, a1, 0x10u, 1u);
      v13 = &D3DXTex::CCodec_A4R4G4B4::`vftable';
      goto LABEL_156;
    }
    goto LABEL_157;
  }
  v10 = v9 - 1;
  if ( v10 )
  {
    if ( v10 == 1 )
    {
      v11 = (D3DXTex::CCodec *)operator new(0xA0u, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
      v12 = v11;
      if ( v11 )
      {
        D3DXTex::CCodec::CCodec(v11, a1, 8u, 1u);
        v13 = &D3DXTex::CCodec_A8::`vftable';
LABEL_156:
        *(_QWORD *)v12 = v13;
        goto LABEL_158;
      }
      goto LABEL_157;
    }
    return 0;
  }
  v14 = (D3DXTex::CCodec *)operator new(0xA0u, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
  v12 = v14;
  if ( v14 )
  {
    D3DXTex::CCodec::CCodec(v14, a1, 8u, 1u);
    v13 = &D3DXTex::CCodec_R3G3B2::`vftable';
    goto LABEL_156;
  }
LABEL_157:
  v12 = 0;
LABEL_158:
  if ( !v12 )
    return 0;
  if ( *((_DWORD *)v12 + 8) && (int)D3DXTex::CCodec::DecodePalette(v12, a1) < 0 )
  {
    (**(void (__fastcall ***)(D3DXTex::CCodec *, __int64))v12)(v12, 1);
    return 0;
  }
  if ( *((_DWORD *)v12 + 7) )
    (*(void (__fastcall **)(D3DXTex::CCodec *))(*(_QWORD *)v12 + 24LL))(v12);
  return v12;
}
