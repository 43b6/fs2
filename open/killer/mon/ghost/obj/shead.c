// star head ���ǻԵ�ͷ

inherit ITEM;

void create()
{
   set_name("���ǻԵ�ͷ", ({ "star head", "head"}) );
   set_weight(20);
   if( clonep() )
      set_default_object(__FILE__);
   else
   {
      set("unit", "��");
      set("long", "���ǳ��ǻԵ�ͷ, ����������Ů���õġ�\n");
      set("value", 100);
   }
}
