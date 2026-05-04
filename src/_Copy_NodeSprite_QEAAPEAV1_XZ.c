struct NodeSprite *__fastcall NodeSprite::Copy(struct NodeBase **this)
{
  struct NodeBase *v2; // rbx

  v2 = NodeBase::CreateFromType(L"Sprite", this[17], 1);
  NodeSprite::Copy(v2, (const struct NodeSprite *)this);
  return v2;
}
