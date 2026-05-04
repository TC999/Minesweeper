void *__cdecl recalloc(void *Block, size_t Count, size_t Size)
{
  if ( Count && 0xFFFFFFFFFFFFFFE0uLL / Count < Size )
  {
    *errno() = 12;
    invalid_parameter(0, 0, 0, 0, 0);
  }
  return realloc(Block, Size * Count);
}
