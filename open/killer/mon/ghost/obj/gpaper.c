// gpaper.c

inherit ITEM;

void create()
{
   set_name("��ֽ", ({ "gpaper" }) );
   set_weight(20);
   if( clonep() )
      set_default_object(__FILE__);
   else
   {
      set("unit", "��");
      set("long", "������������������õĽ�ֽ��\n");
      set("value", 100);
   }
}
