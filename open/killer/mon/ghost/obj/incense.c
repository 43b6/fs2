// incense.c

inherit ITEM;

void create()
{
   set_name("���", ({ "incense" }) );
   set_weight(20);
   if( clonep() )
      set_default_object(__FILE__);
   else
   {
      set("unit", "��");
      set("long", "������������������õ����\n");
      set("value", 100);
   }
}
